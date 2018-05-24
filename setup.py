#!/usr/bin/env python

from setuptools import setup, Extension
import subprocess
import re
import os

PACKAGES = ['poppler-glib', 'pygobject-2.0', 'pycairo']

def pypoppler_version():
    re_version = re.compile('pypoppler_(\w+)_version,\ (\d+)')
    config = file('configure.ac', 'r')
    parts = ()
    for line in config:
        match = re_version.search(line)
        if match:
            version, number = match.groups()
            yield (version.upper(), number)


def pycairo_version():
    version = subprocess.check_output(['pkg-config', '--modversion', 'pycairo'])
    version_parts = ['MAJOR', 'MINOR', 'MICRO']
    for part, num in zip(version_parts, version.split('.')):
        yield (part, num)


def pkgconfig(*packages, **kw):
    flag_map = {'-I': 'include_dirs', '-L': 'library_dirs', '-l': 'libraries'}
    for token in subprocess.check_output(['pkg-config', '--libs', '--cflags', ' '.join(packages)]).split():
        if token[:2] in flag_map:
            kw.setdefault(flag_map.get(token[:2]), []).append(token[2:])
    return kw


class PopplerExtension(Extension):
    def __init__(self, name, sources, **kwargs):
        for item, value in pkgconfig(*PACKAGES).items():
            kwargs[item] = kwargs.get(item, []) + value

        # Determine the poppler version and set the macros
        kwargs.setdefault('define_macros', [])
        version_parts = []
        for part, num in pypoppler_version():
            kwargs['define_macros'] += (("PYPOPPLER_%s_VERSION" % part, num),)
            version_parts += num

        # Determine pycairo version, set the macros
        for part, num in pycairo_version():
            kwargs['define_macros'] += (("PYCAIRO_%s_VERSION" % part, num),)

        # Process poppler.defs, this creates poppler.c
        if not os.path.exists('./poppler.c'):
            subprocess.call(['pygobject-codegen-2.0', '--override', 'poppler.override', '--prefix', 'py_poppler', 'poppler.defs'], stdout=file('poppler.c','wb'))

        Extension.__init__(self, name, sources, **kwargs)


setup(name='pypoppler',
        version = '.'.join([x[1] for x in pypoppler_version()]),
        maintainer = 'Mark Riedesel',
        maintainer_email = 'mark@klowner.com',
        license = 'GPLv2',
        description = 'Python bindings for poppler-glib, unofficial branch including '
            'bug fixes, and removal of gtk dependencies',
        url = 'https://code.launchpad.net/~mriedesel/poppler-python/main',
        classifiers = [ 'Development Status :: 3 - Alpha',
                        'Environment :: Console',
                        'Intended Audience :: Developers',
                        'License :: OSI Approved :: GNU General Public License v2 (GPLv2)',
                        'Programming Language :: Python',
                        'Programming Language :: Python :: 2',
                        'Programming Language :: Python :: 2.7',
                        'Programming Language :: Scheme',
                        'Programming Language :: C',
                        'Operating System :: POSIX',
                        'Topic :: Multimedia :: Graphics',
                        ],
        ext_modules = [PopplerExtension('poppler',
                                      sources = ['poppler.c', 'popplermodule.c'],
                                      )
        ],
        requires = ['PyGObject (>=2.28.3)',
                    'pycairo (>=1.10.0)',],
    )
