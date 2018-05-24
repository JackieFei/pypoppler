/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 21 "poppler.override"
#include <Python.h>
#include "pygobject.h"
#include <glib/poppler.h>
#include <pycairo.h>
#include "pypoppler-private.h"
#ifndef POPPLER_TYPE_ACTION_ANY
#define POPPLER_TYPE_ACTION_ANY (_poppler_action_any_get_type ())

static GType _poppler_action_any_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionAny",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

#ifndef POPPLER_TYPE_ACTION_GOTO_DEST
#define POPPLER_TYPE_ACTION_GOTO_DEST (_poppler_action_goto_dest_get_type ())

static GType _poppler_action_goto_dest_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionGotoDest",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

#ifndef POPPLER_TYPE_ACTION_GOTO_DEST
#define POPPLER_TYPE_ACTION_GOTO_DEST (_poppler_action_goto_dest_get_type ())

static GType _poppler_action_goto_dest_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionGotoDest",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

#ifndef POPPLER_TYPE_ACTION_GOTO_REMOTE
#define POPPLER_TYPE_ACTION_GOTO_REMOTE (_poppler_action_goto_remote_get_type ())

static GType _poppler_action_goto_remote_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionGotoRemote",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

#ifndef POPPLER_TYPE_ACTION_LAUNCH
#define POPPLER_TYPE_ACTION_LAUNCH (_poppler_action_launch_get_type ())

static GType _poppler_action_launch_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionLaunch",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

#ifndef POPPLER_TYPE_ACTION_URI
#define POPPLER_TYPE_ACTION_URI (_poppler_action_uri_get_type ())

static GType _poppler_action_uri_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionUri",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

#ifndef POPPLER_TYPE_ACTION_NAMED
#define POPPLER_TYPE_ACTION_NAMED (_poppler_action_named_get_type ())

static GType _poppler_action_named_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionNamed",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

#ifndef POPPLER_TYPE_ACTION_MOVIE
#define POPPLER_TYPE_ACTION_MOVIE (_poppler_action_movie_get_type ())

static GType _poppler_action_movie_get_type (void)
{
    static GType our_type = 0;

    if (our_type == 0)
    {
        our_type = g_boxed_type_register_static ("PopplerActionMovie",
                                                  (GBoxedCopyFunc)poppler_action_copy,
                                                  (GBoxedFreeFunc)poppler_action_free);
    }
    return our_type;
}
#endif

static PyObject *
_poppler_action_to_poppler_action_typed (PopplerAction * action)
{
    if (!action)/*TODO: Should we raise an exception in this case?*/
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

    GType boxed_type;

    switch (action->type)
    {
        case POPPLER_ACTION_NONE:/*TODO: Is this the right behaviour?*/
            Py_INCREF(Py_None);
            return Py_None;
        case POPPLER_ACTION_GOTO_DEST:
            boxed_type = POPPLER_TYPE_ACTION_GOTO_DEST;
            break;
        case POPPLER_ACTION_GOTO_REMOTE:
            boxed_type = POPPLER_TYPE_ACTION_GOTO_REMOTE;
            break;
        case POPPLER_ACTION_LAUNCH:
            boxed_type = POPPLER_TYPE_ACTION_LAUNCH;
            break;
        case POPPLER_ACTION_URI:
            boxed_type = POPPLER_TYPE_ACTION_URI;
            break;
        case POPPLER_ACTION_NAMED:
            boxed_type = POPPLER_TYPE_ACTION_NAMED;
            break;
        case POPPLER_ACTION_MOVIE:
            boxed_type = POPPLER_TYPE_ACTION_MOVIE;
            break;
        default:
            boxed_type = POPPLER_TYPE_ACTION_ANY;
    }

    return pyg_boxed_new (boxed_type, action, TRUE, TRUE);
}


extern Pycairo_CAPI_t *Pycairo_CAPI;

static PyObject *
_glist_to_pylist_objs (GList *source)
{
    GList *iter;
    PyObject *dest = PyList_New (0);
    for (iter = source; iter != NULL; iter = iter->next)
    {
        PyObject *item = pygobject_new ((GObject *)iter->data);
        PyList_Append (dest, item);
        Py_DECREF (item);
    }
    return dest;
}

static PyObject *
_glist_to_pylist_boxed (GList *source, GType boxed_type)
{
    GList *iter;
    PyObject *dest = PyList_New (0);
    for (iter = source; iter != NULL; iter = iter->next)
    {
        PyObject *item = pyg_boxed_new (boxed_type, iter->data,
                                        TRUE, TRUE);
        PyList_Append (dest, item);
        Py_DECREF (item);
    }
    return dest;
}

#line 223 "poppler.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyPopplerFormFieldMapping_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerImageMapping_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerPageTransition_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerLinkMapping_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerRectangle_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerColor_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAction_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerActionAny_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerActionGotoDest_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerActionGotoRemote_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerActionLaunch_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerActionUri_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerActionNamed_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerActionMovie_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerDest_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerFontsIter_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerIndexIter_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotCalloutLine_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotMapping_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAnnot_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotMarkup_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotText_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotFreeText_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerDocument_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerLayer_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerPage_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerPSFile_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerAttachment_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerFormField_Type;
PyTypeObject G_GNUC_INTERNAL PyPopplerFontInfo_Type;

#line 263 "poppler.c"



/* ----------- PopplerFormFieldMapping ----------- */

static int
_wrap_poppler_form_field_mapping_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.FormFieldMapping.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_FORM_FIELD_MAPPING;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_form_field_mapping_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerFormFieldMapping object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

static PyObject *
_wrap_poppler_form_field_mapping__get_area(PyObject *self, void *closure)
{
    PopplerRectangle ret;

    ret = pyg_boxed_get(self, PopplerFormFieldMapping)->area;
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_RECTANGLE, &ret, TRUE, TRUE);
}

static PyObject *
_wrap_poppler_form_field_mapping__get_field(PyObject *self, void *closure)
{
    PopplerFormField *ret;

    ret = pyg_boxed_get(self, PopplerFormFieldMapping)->field;
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static const PyGetSetDef poppler_form_field_mapping_getsets[] = {
    { "area", (getter)_wrap_poppler_form_field_mapping__get_area, (setter)0 },
    { "field", (getter)_wrap_poppler_form_field_mapping__get_field, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerFormFieldMapping_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.FormFieldMapping",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_form_field_mapping_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_form_field_mapping_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerImageMapping ----------- */

static int
_wrap_poppler_image_mapping_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.ImageMapping.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_IMAGE_MAPPING;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_image_mapping_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerImageMapping object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

static PyObject *
_wrap_poppler_image_mapping__get_area(PyObject *self, void *closure)
{
    PopplerRectangle ret;

    ret = pyg_boxed_get(self, PopplerImageMapping)->area;
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_RECTANGLE, &ret, TRUE, TRUE);
}

static PyObject *
_wrap_poppler_image_mapping__get_image_id(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerImageMapping)->image_id;
    return PyInt_FromLong(ret);
}

static const PyGetSetDef poppler_image_mapping_getsets[] = {
    { "area", (getter)_wrap_poppler_image_mapping__get_area, (setter)0 },
    { "image_id", (getter)_wrap_poppler_image_mapping__get_image_id, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerImageMapping_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ImageMapping",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_image_mapping_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_image_mapping_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerPageTransition ----------- */

static int
_wrap_poppler_page_transition_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.PageTransition.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_PAGE_TRANSITION;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_page_transition_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerPageTransition object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

static PyObject *
_wrap_poppler_page_transition__get_type(PyObject *self, void *closure)
{
    gint ret;

    ret = pyg_boxed_get(self, PopplerPageTransition)->type;
    return pyg_enum_from_gtype(POPPLER_TYPE_PAGE_TRANSITION_TYPE, ret);
}

static PyObject *
_wrap_poppler_page_transition__get_alignment(PyObject *self, void *closure)
{
    gint ret;

    ret = pyg_boxed_get(self, PopplerPageTransition)->alignment;
    return pyg_enum_from_gtype(POPPLER_TYPE_PAGE_TRANSITION_ALIGNMENT, ret);
}

static PyObject *
_wrap_poppler_page_transition__get_direction(PyObject *self, void *closure)
{
    gint ret;

    ret = pyg_boxed_get(self, PopplerPageTransition)->direction;
    return pyg_enum_from_gtype(POPPLER_TYPE_PAGE_TRANSITION_DIRECTION, ret);
}

static PyObject *
_wrap_poppler_page_transition__get_duration(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerPageTransition)->duration;
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_page_transition__get_angle(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerPageTransition)->angle;
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_page_transition__get_scale(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerPageTransition)->scale;
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_page_transition__get_rectangular(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerPageTransition)->rectangular;
    return PyBool_FromLong(ret);

}

static const PyGetSetDef poppler_page_transition_getsets[] = {
    { "type", (getter)_wrap_poppler_page_transition__get_type, (setter)0 },
    { "alignment", (getter)_wrap_poppler_page_transition__get_alignment, (setter)0 },
    { "direction", (getter)_wrap_poppler_page_transition__get_direction, (setter)0 },
    { "duration", (getter)_wrap_poppler_page_transition__get_duration, (setter)0 },
    { "angle", (getter)_wrap_poppler_page_transition__get_angle, (setter)0 },
    { "scale", (getter)_wrap_poppler_page_transition__get_scale, (setter)0 },
    { "rectangular", (getter)_wrap_poppler_page_transition__get_rectangular, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerPageTransition_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.PageTransition",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_page_transition_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_page_transition_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerLinkMapping ----------- */

static int
_wrap_poppler_link_mapping_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.LinkMapping.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_LINK_MAPPING;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_link_mapping_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerLinkMapping object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

static PyObject *
_wrap_poppler_link_mapping__get_area(PyObject *self, void *closure)
{
    PopplerRectangle ret;

    ret = pyg_boxed_get(self, PopplerLinkMapping)->area;
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_RECTANGLE, &ret, TRUE, TRUE);
}

#line 513 "poppler.override"
static PyObject *
_wrap_poppler_link_mapping__get_action(PyGBoxed * self, void *closure)
{
    PopplerLinkMapping * lm = pyg_boxed_get(self, PopplerLinkMapping);

    if (lm)
    {
        return _poppler_action_to_poppler_action_typed(lm->action);
    }

    Py_INCREF(Py_None);/*TODO: Should we raise an exception in this case?*/
    return Py_None;
}
#line 642 "poppler.c"


static const PyGetSetDef poppler_link_mapping_getsets[] = {
    { "area", (getter)_wrap_poppler_link_mapping__get_area, (setter)0 },
    { "action", (getter)_wrap_poppler_link_mapping__get_action, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerLinkMapping_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.LinkMapping",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_link_mapping_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_link_mapping_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerRectangle ----------- */

static int
_wrap_poppler_rectangle_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.Rectangle.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_RECTANGLE;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_rectangle_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerRectangle object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

#line 412 "poppler.override"
static int
_wrap_poppler_rectangle__set_x1(PyGBoxed *self, PyObject *value, void *closure)
{
    double val;

    val = PyFloat_AsDouble(value);
    if (PyErr_Occurred())
        return -1;
    pyg_boxed_get(self, PopplerRectangle)->x1 = val;
    return 0;
}
#line 731 "poppler.c"


static PyObject *
_wrap_poppler_rectangle__get_x1(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerRectangle)->x1;
    return PyFloat_FromDouble(ret);
}

#line 438 "poppler.override"
static int
_wrap_poppler_rectangle__set_y1(PyGBoxed *self, PyObject *value, void *closure)
{
    double val;

    val = PyFloat_AsDouble(value);
    if (PyErr_Occurred())
        return -1;
    pyg_boxed_get(self, PopplerRectangle)->y1 = val;
    return 0;
}
#line 755 "poppler.c"


static PyObject *
_wrap_poppler_rectangle__get_y1(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerRectangle)->y1;
    return PyFloat_FromDouble(ret);
}

#line 425 "poppler.override"
static int
_wrap_poppler_rectangle__set_x2(PyGBoxed *self, PyObject *value, void *closure)
{
    double val;

    val = PyFloat_AsDouble(value);
    if (PyErr_Occurred())
        return -1;
    pyg_boxed_get(self, PopplerRectangle)->x2 = val;
    return 0;
}
#line 779 "poppler.c"


static PyObject *
_wrap_poppler_rectangle__get_x2(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerRectangle)->x2;
    return PyFloat_FromDouble(ret);
}

#line 451 "poppler.override"
static int
_wrap_poppler_rectangle__set_y2(PyGBoxed *self, PyObject *value, void *closure)
{
    double val;

    val = PyFloat_AsDouble(value);
    if (PyErr_Occurred())
        return -1;
    pyg_boxed_get(self, PopplerRectangle)->y2 = val;
    return 0;
}
#line 803 "poppler.c"


static PyObject *
_wrap_poppler_rectangle__get_y2(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerRectangle)->y2;
    return PyFloat_FromDouble(ret);
}

static const PyGetSetDef poppler_rectangle_getsets[] = {
    { "x1", (getter)_wrap_poppler_rectangle__get_x1, (setter)_wrap_poppler_rectangle__set_x1 },
    { "y1", (getter)_wrap_poppler_rectangle__get_y1, (setter)_wrap_poppler_rectangle__set_y1 },
    { "x2", (getter)_wrap_poppler_rectangle__get_x2, (setter)_wrap_poppler_rectangle__set_x2 },
    { "y2", (getter)_wrap_poppler_rectangle__get_y2, (setter)_wrap_poppler_rectangle__set_y2 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerRectangle_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Rectangle",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_rectangle_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_rectangle_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerColor ----------- */

static int
_wrap_poppler_color_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.Color.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_COLOR;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_color_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerColor object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

#line 464 "poppler.override"
static int
_wrap_poppler_color__set_red(PyGBoxed *self, PyObject *value, void *closure)
{
    guint16 val;

    val = PyInt_AsLong(value);
    if (PyErr_Occurred())
        return -1;

    pyg_boxed_get(self, PopplerColor)->red = val;
    return 0;
}
#line 904 "poppler.c"


static PyObject *
_wrap_poppler_color__get_red(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerColor)->red;
    return PyInt_FromLong(ret);
}

#line 478 "poppler.override"
static int
_wrap_poppler_color__set_green(PyGBoxed *self, PyObject *value, void *closure)
{
    guint16 val;

    val = PyInt_AsLong(value);
    if (PyErr_Occurred())
        return -1;

    pyg_boxed_get(self, PopplerColor)->green = val;
    return 0;
}
#line 929 "poppler.c"


static PyObject *
_wrap_poppler_color__get_green(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerColor)->green;
    return PyInt_FromLong(ret);
}

#line 492 "poppler.override"
static int
_wrap_poppler_color__set_blue(PyGBoxed *self, PyObject *value, void *closure)
{
    guint16 val;

    val = PyInt_AsLong(value);
    if (PyErr_Occurred())
        return -1;

    pyg_boxed_get(self, PopplerColor)->blue = val;
    return 0;
}
#line 954 "poppler.c"


static PyObject *
_wrap_poppler_color__get_blue(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerColor)->blue;
    return PyInt_FromLong(ret);
}

static const PyGetSetDef poppler_color_getsets[] = {
    { "red", (getter)_wrap_poppler_color__get_red, (setter)_wrap_poppler_color__set_red },
    { "green", (getter)_wrap_poppler_color__get_green, (setter)_wrap_poppler_color__set_green },
    { "blue", (getter)_wrap_poppler_color__get_blue, (setter)_wrap_poppler_color__set_blue },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerColor_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Color",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_color_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_color_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAction ----------- */

static int
pygobject_no_constructor(PyObject *self, PyObject *args, PyObject *kwargs)
{
    gchar buf[512];

    g_snprintf(buf, sizeof(buf), "%s is an abstract widget", self->ob_type->tp_name);
    PyErr_SetString(PyExc_NotImplementedError, buf);
    return -1;
}

#line 506 "poppler.override"
static PyObject *
_wrap_poppler_action_get_typed_action(PyGBoxed *self)
{
    return _poppler_action_to_poppler_action_typed(pyg_boxed_get(self, PopplerAction));
}
#line 1038 "poppler.c"


static const PyMethodDef _PyPopplerAction_methods[] = {
    { "to_typed_action", (PyCFunction)_wrap_poppler_action_get_typed_action, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

static PyObject *
_wrap_poppler_action__get_type(PyObject *self, void *closure)
{
    gint ret;

    ret = pyg_boxed_get(self, PopplerAction)->type;
    return pyg_enum_from_gtype(POPPLER_TYPE_ACTION_TYPE, ret);
}

static const PyGetSetDef poppler_action_getsets[] = {
    { "type", (getter)_wrap_poppler_action__get_type, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerAction_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Action",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerAction_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerActionAny ----------- */

static PyObject *
_wrap_poppler_action_any__get_title(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionAny)->title;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyGetSetDef poppler_action_any_getsets[] = {
    { "title", (getter)_wrap_poppler_action_any__get_title, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerActionAny_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ActionAny",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_any_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerActionGotoDest ----------- */

static PyObject *
_wrap_poppler_action_goto_dest__get_title(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionGotoDest)->title;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_action_goto_dest__get_dest(PyObject *self, void *closure)
{
    PopplerDest *ret;

    ret = pyg_boxed_get(self, PopplerActionGotoDest)->dest;
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_DEST, ret, TRUE, TRUE);
}

static const PyGetSetDef poppler_action_goto_dest_getsets[] = {
    { "title", (getter)_wrap_poppler_action_goto_dest__get_title, (setter)0 },
    { "dest", (getter)_wrap_poppler_action_goto_dest__get_dest, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerActionGotoDest_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ActionGotoDest",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_goto_dest_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerActionGotoRemote ----------- */

static PyObject *
_wrap_poppler_action_goto_remote__get_title(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionGotoRemote)->title;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_action_goto_remote__get_file_name(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionGotoRemote)->file_name;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_action_goto_remote__get_dest(PyObject *self, void *closure)
{
    PopplerDest *ret;

    ret = pyg_boxed_get(self, PopplerActionGotoRemote)->dest;
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_DEST, ret, TRUE, TRUE);
}

static const PyGetSetDef poppler_action_goto_remote_getsets[] = {
    { "title", (getter)_wrap_poppler_action_goto_remote__get_title, (setter)0 },
    { "file_name", (getter)_wrap_poppler_action_goto_remote__get_file_name, (setter)0 },
    { "dest", (getter)_wrap_poppler_action_goto_remote__get_dest, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerActionGotoRemote_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ActionGotoRemote",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_goto_remote_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerActionLaunch ----------- */

static PyObject *
_wrap_poppler_action_launch__get_title(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionLaunch)->title;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_action_launch__get_file_name(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionLaunch)->file_name;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_action_launch__get_params(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionLaunch)->params;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyGetSetDef poppler_action_launch_getsets[] = {
    { "title", (getter)_wrap_poppler_action_launch__get_title, (setter)0 },
    { "file_name", (getter)_wrap_poppler_action_launch__get_file_name, (setter)0 },
    { "params", (getter)_wrap_poppler_action_launch__get_params, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerActionLaunch_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ActionLaunch",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_launch_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerActionUri ----------- */

static PyObject *
_wrap_poppler_action_uri__get_title(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionUri)->title;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_action_uri__get_uri(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionUri)->uri;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyGetSetDef poppler_action_uri_getsets[] = {
    { "title", (getter)_wrap_poppler_action_uri__get_title, (setter)0 },
    { "uri", (getter)_wrap_poppler_action_uri__get_uri, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerActionUri_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ActionUri",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_uri_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerActionNamed ----------- */

static PyObject *
_wrap_poppler_action_named__get_title(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionNamed)->title;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_action_named__get_named_dest(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionNamed)->named_dest;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyGetSetDef poppler_action_named_getsets[] = {
    { "title", (getter)_wrap_poppler_action_named__get_title, (setter)0 },
    { "named_dest", (getter)_wrap_poppler_action_named__get_named_dest, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerActionNamed_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ActionNamed",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_named_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerActionMovie ----------- */

static PyObject *
_wrap_poppler_action_movie__get_title(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerActionMovie)->title;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyGetSetDef poppler_action_movie_getsets[] = {
    { "title", (getter)_wrap_poppler_action_movie__get_title, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerActionMovie_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.ActionMovie",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_action_movie_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerDest ----------- */

static PyObject *
_wrap_poppler_dest__get_type(PyObject *self, void *closure)
{
    gint ret;

    ret = pyg_boxed_get(self, PopplerDest)->type;
    return pyg_enum_from_gtype(POPPLER_TYPE_DEST_TYPE, ret);
}

static PyObject *
_wrap_poppler_dest__get_page_num(PyObject *self, void *closure)
{
    int ret;

    ret = pyg_boxed_get(self, PopplerDest)->page_num;
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_dest__get_left(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerDest)->left;
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_dest__get_bottom(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerDest)->bottom;
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_dest__get_right(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerDest)->right;
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_dest__get_top(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerDest)->top;
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_dest__get_zoom(PyObject *self, void *closure)
{
    double ret;

    ret = pyg_boxed_get(self, PopplerDest)->zoom;
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_dest__get_named_dest(PyObject *self, void *closure)
{
    const gchar *ret;

    ret = pyg_boxed_get(self, PopplerDest)->named_dest;
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_dest__get_change_left(PyObject *self, void *closure)
{
    guint ret;

    ret = pyg_boxed_get(self, PopplerDest)->change_left;
    return PyLong_FromUnsignedLong(ret);
}

static PyObject *
_wrap_poppler_dest__get_change_top(PyObject *self, void *closure)
{
    guint ret;

    ret = pyg_boxed_get(self, PopplerDest)->change_top;
    return PyLong_FromUnsignedLong(ret);
}

static PyObject *
_wrap_poppler_dest__get_change_zoom(PyObject *self, void *closure)
{
    guint ret;

    ret = pyg_boxed_get(self, PopplerDest)->change_zoom;
    return PyLong_FromUnsignedLong(ret);
}

static const PyGetSetDef poppler_dest_getsets[] = {
    { "type", (getter)_wrap_poppler_dest__get_type, (setter)0 },
    { "page_num", (getter)_wrap_poppler_dest__get_page_num, (setter)0 },
    { "left", (getter)_wrap_poppler_dest__get_left, (setter)0 },
    { "bottom", (getter)_wrap_poppler_dest__get_bottom, (setter)0 },
    { "right", (getter)_wrap_poppler_dest__get_right, (setter)0 },
    { "top", (getter)_wrap_poppler_dest__get_top, (setter)0 },
    { "zoom", (getter)_wrap_poppler_dest__get_zoom, (setter)0 },
    { "named_dest", (getter)_wrap_poppler_dest__get_named_dest, (setter)0 },
    { "change_left", (getter)_wrap_poppler_dest__get_change_left, (setter)0 },
    { "change_top", (getter)_wrap_poppler_dest__get_change_top, (setter)0 },
    { "change_zoom", (getter)_wrap_poppler_dest__get_change_zoom, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerDest_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Dest",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_dest_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerFontsIter ----------- */

static PyObject *
_wrap_poppler_fonts_iter_get_name(PyObject *self)
{
    const gchar *ret;

    
    ret = poppler_fonts_iter_get_name(pyg_boxed_get(self, PopplerFontsIter));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_fonts_iter_get_full_name(PyObject *self)
{
    const gchar *ret;

    
    ret = poppler_fonts_iter_get_full_name(pyg_boxed_get(self, PopplerFontsIter));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_fonts_iter_get_file_name(PyObject *self)
{
    const gchar *ret;

    
    ret = poppler_fonts_iter_get_file_name(pyg_boxed_get(self, PopplerFontsIter));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_fonts_iter_get_font_type(PyObject *self)
{
    gint ret;

    
    ret = poppler_fonts_iter_get_font_type(pyg_boxed_get(self, PopplerFontsIter));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_FONT_TYPE, ret);
}

static PyObject *
_wrap_poppler_fonts_iter_is_embedded(PyObject *self)
{
    int ret;

    
    ret = poppler_fonts_iter_is_embedded(pyg_boxed_get(self, PopplerFontsIter));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_fonts_iter_is_subset(PyObject *self)
{
    int ret;

    
    ret = poppler_fonts_iter_is_subset(pyg_boxed_get(self, PopplerFontsIter));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_fonts_iter_next(PyObject *self)
{
    int ret;

    
    ret = poppler_fonts_iter_next(pyg_boxed_get(self, PopplerFontsIter));
    
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyPopplerFontsIter_methods[] = {
    { "get_name", (PyCFunction)_wrap_poppler_fonts_iter_get_name, METH_NOARGS,
      NULL },
    { "get_full_name", (PyCFunction)_wrap_poppler_fonts_iter_get_full_name, METH_NOARGS,
      NULL },
    { "get_file_name", (PyCFunction)_wrap_poppler_fonts_iter_get_file_name, METH_NOARGS,
      NULL },
    { "get_font_type", (PyCFunction)_wrap_poppler_fonts_iter_get_font_type, METH_NOARGS,
      NULL },
    { "is_embedded", (PyCFunction)_wrap_poppler_fonts_iter_is_embedded, METH_NOARGS,
      NULL },
    { "is_subset", (PyCFunction)_wrap_poppler_fonts_iter_is_subset, METH_NOARGS,
      NULL },
    { "next", (PyCFunction)_wrap_poppler_fonts_iter_next, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerFontsIter_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.FontsIter",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerFontsIter_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)pygobject_no_constructor,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerIndexIter ----------- */

static int
_wrap_poppler_index_iter_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "document", NULL };
    PyGObject *document;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Poppler.IndexIter.__init__", kwlist, &PyPopplerDocument_Type, &document))
        return -1;
    self->gtype = POPPLER_TYPE_INDEX_ITER;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_index_iter_new(POPPLER_DOCUMENT(document->obj));

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerIndexIter object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

static PyObject *
_wrap_poppler_index_iter_get_child(PyObject *self)
{
    PopplerIndexIter *ret;

    
    ret = poppler_index_iter_get_child(pyg_boxed_get(self, PopplerIndexIter));
    
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_INDEX_ITER, ret, TRUE, TRUE);
}

static PyObject *
_wrap_poppler_index_iter_is_open(PyObject *self)
{
    int ret;

    
    ret = poppler_index_iter_is_open(pyg_boxed_get(self, PopplerIndexIter));
    
    return PyBool_FromLong(ret);

}

#line 528 "poppler.override"
static PyObject *
_wrap_poppler_index_iter_get_action(PyGBoxed *self)
{
    PopplerIndexIter * it = pyg_boxed_get(self, PopplerIndexIter);

    if (it)
    {
        return _poppler_action_to_poppler_action_typed(poppler_index_iter_get_action(it));
    }

    Py_INCREF(Py_None);/*TODO: Should we raise an exception in this case?*/
    return Py_None;
}
#line 2039 "poppler.c"


static PyObject *
_wrap_poppler_index_iter_next(PyObject *self)
{
    int ret;

    
    ret = poppler_index_iter_next(pyg_boxed_get(self, PopplerIndexIter));
    
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyPopplerIndexIter_methods[] = {
    { "get_child", (PyCFunction)_wrap_poppler_index_iter_get_child, METH_NOARGS,
      NULL },
    { "is_open", (PyCFunction)_wrap_poppler_index_iter_is_open, METH_NOARGS,
      NULL },
    { "get_action", (PyCFunction)_wrap_poppler_index_iter_get_action, METH_NOARGS,
      NULL },
    { "next", (PyCFunction)_wrap_poppler_index_iter_next, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerIndexIter_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.IndexIter",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerIndexIter_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_index_iter_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAnnotCalloutLine ----------- */

static int
_wrap_poppler_annot_callout_line_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.AnnotCalloutLine.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_ANNOT_CALLOUT_LINE;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_annot_callout_line_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerAnnotCalloutLine object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotCalloutLine_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.AnnotCalloutLine",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_annot_callout_line_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAnnotMapping ----------- */

static int
_wrap_poppler_annot_mapping_new(PyGBoxed *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,":Poppler.AnnotMapping.__init__", kwlist))
        return -1;
    self->gtype = POPPLER_TYPE_ANNOT_MAPPING;
    self->free_on_dealloc = FALSE;
    self->boxed = poppler_annot_mapping_new();

    if (!self->boxed) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerAnnotMapping object");
        return -1;
    }
    self->free_on_dealloc = TRUE;
    return 0;
}

static PyObject *
_wrap_poppler_annot_mapping__get_area(PyObject *self, void *closure)
{
    PopplerRectangle ret;

    ret = pyg_boxed_get(self, PopplerAnnotMapping)->area;
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_RECTANGLE, &ret, TRUE, TRUE);
}

static PyObject *
_wrap_poppler_annot_mapping__get_annot(PyObject *self, void *closure)
{
    PopplerAnnot *ret;

    ret = pyg_boxed_get(self, PopplerAnnotMapping)->annot;
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static const PyGetSetDef poppler_annot_mapping_getsets[] = {
    { "area", (getter)_wrap_poppler_annot_mapping__get_area, (setter)0 },
    { "annot", (getter)_wrap_poppler_annot_mapping__get_annot, (setter)0 },
    { NULL, (getter)0, (setter)0 },
};

PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotMapping_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.AnnotMapping",                   /* tp_name */
    sizeof(PyGBoxed),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)poppler_annot_mapping_getsets,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_poppler_annot_mapping_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAnnot ----------- */

static PyObject *
_wrap_poppler_annot_get_annot_type(PyGObject *self)
{
    gint ret;

    
    ret = poppler_annot_get_annot_type(POPPLER_ANNOT(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_ANNOT_TYPE, ret);
}

static PyObject *
_wrap_poppler_annot_get_contents(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_annot_get_contents(POPPLER_ANNOT(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_annot_set_contents(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "contents", NULL };
    char *contents;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Poppler.Annot.set_contents", kwlist, &contents))
        return NULL;
    
    poppler_annot_set_contents(POPPLER_ANNOT(self->obj), contents);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_annot_get_name(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_annot_get_name(POPPLER_ANNOT(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_annot_get_modified(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_annot_get_modified(POPPLER_ANNOT(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_annot_get_flags(PyGObject *self)
{
    guint ret;

    
    ret = poppler_annot_get_flags(POPPLER_ANNOT(self->obj));
    
    return pyg_flags_from_gtype(POPPLER_TYPE_ANNOT_FLAG, ret);
}

static PyObject *
_wrap_poppler_annot_get_color(PyGObject *self)
{
    PopplerColor *ret;

    
    ret = poppler_annot_get_color(POPPLER_ANNOT(self->obj));
    
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_COLOR, ret, TRUE, TRUE);
}

static const PyMethodDef _PyPopplerAnnot_methods[] = {
    { "get_annot_type", (PyCFunction)_wrap_poppler_annot_get_annot_type, METH_NOARGS,
      NULL },
    { "get_contents", (PyCFunction)_wrap_poppler_annot_get_contents, METH_NOARGS,
      NULL },
    { "set_contents", (PyCFunction)_wrap_poppler_annot_set_contents, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_name", (PyCFunction)_wrap_poppler_annot_get_name, METH_NOARGS,
      NULL },
    { "get_modified", (PyCFunction)_wrap_poppler_annot_get_modified, METH_NOARGS,
      NULL },
    { "get_flags", (PyCFunction)_wrap_poppler_annot_get_flags, METH_NOARGS,
      NULL },
    { "get_color", (PyCFunction)_wrap_poppler_annot_get_color, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerAnnot_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Annot",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerAnnot_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAnnotMarkup ----------- */

static PyObject *
_wrap_poppler_annot_markup_get_label(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_annot_markup_get_label(POPPLER_ANNOT_MARKUP(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_annot_markup_has_popup(PyGObject *self)
{
    int ret;

    
    ret = poppler_annot_markup_has_popup(POPPLER_ANNOT_MARKUP(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_annot_markup_get_popup_is_open(PyGObject *self)
{
    int ret;

    
    ret = poppler_annot_markup_get_popup_is_open(POPPLER_ANNOT_MARKUP(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_annot_markup_get_popup_rectangle(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "poppler_rect", NULL };
    PyObject *py_poppler_rect;
    int ret;
    PopplerRectangle *poppler_rect = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:Poppler.AnnotMarkup.get_popup_rectangle", kwlist, &py_poppler_rect))
        return NULL;
    if (pyg_boxed_check(py_poppler_rect, POPPLER_TYPE_RECTANGLE))
        poppler_rect = pyg_boxed_get(py_poppler_rect, PopplerRectangle);
    else {
        PyErr_SetString(PyExc_TypeError, "poppler_rect should be a PopplerRectangle");
        return NULL;
    }
    
    ret = poppler_annot_markup_get_popup_rectangle(POPPLER_ANNOT_MARKUP(self->obj), poppler_rect);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_annot_markup_get_opacity(PyGObject *self)
{
    double ret;

    
    ret = poppler_annot_markup_get_opacity(POPPLER_ANNOT_MARKUP(self->obj));
    
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_annot_markup_get_subject(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_annot_markup_get_subject(POPPLER_ANNOT_MARKUP(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_annot_markup_get_reply_to(PyGObject *self)
{
    gint ret;

    
    ret = poppler_annot_markup_get_reply_to(POPPLER_ANNOT_MARKUP(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_ANNOT_MARKUP_REPLY_TYPE, ret);
}

static PyObject *
_wrap_poppler_annot_markup_get_external_data(PyGObject *self)
{
    gint ret;

    
    ret = poppler_annot_markup_get_external_data(POPPLER_ANNOT_MARKUP(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_ANNOT_EXTERNAL_DATA_TYPE, ret);
}

static const PyMethodDef _PyPopplerAnnotMarkup_methods[] = {
    { "get_label", (PyCFunction)_wrap_poppler_annot_markup_get_label, METH_NOARGS,
      NULL },
    { "has_popup", (PyCFunction)_wrap_poppler_annot_markup_has_popup, METH_NOARGS,
      NULL },
    { "get_popup_is_open", (PyCFunction)_wrap_poppler_annot_markup_get_popup_is_open, METH_NOARGS,
      NULL },
    { "get_popup_rectangle", (PyCFunction)_wrap_poppler_annot_markup_get_popup_rectangle, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_opacity", (PyCFunction)_wrap_poppler_annot_markup_get_opacity, METH_NOARGS,
      NULL },
    { "get_subject", (PyCFunction)_wrap_poppler_annot_markup_get_subject, METH_NOARGS,
      NULL },
    { "get_reply_to", (PyCFunction)_wrap_poppler_annot_markup_get_reply_to, METH_NOARGS,
      NULL },
    { "get_external_data", (PyCFunction)_wrap_poppler_annot_markup_get_external_data, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotMarkup_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.AnnotMarkup",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerAnnotMarkup_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAnnotText ----------- */

static PyObject *
_wrap_poppler_annot_text_get_is_open(PyGObject *self)
{
    int ret;

    
    ret = poppler_annot_text_get_is_open(POPPLER_ANNOT_TEXT(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_annot_text_get_icon(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_annot_text_get_icon(POPPLER_ANNOT_TEXT(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_annot_text_get_state(PyGObject *self)
{
    gint ret;

    
    ret = poppler_annot_text_get_state(POPPLER_ANNOT_TEXT(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_ANNOT_TEXT_STATE, ret);
}

static const PyMethodDef _PyPopplerAnnotText_methods[] = {
    { "get_is_open", (PyCFunction)_wrap_poppler_annot_text_get_is_open, METH_NOARGS,
      NULL },
    { "get_icon", (PyCFunction)_wrap_poppler_annot_text_get_icon, METH_NOARGS,
      NULL },
    { "get_state", (PyCFunction)_wrap_poppler_annot_text_get_state, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotText_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.AnnotText",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerAnnotText_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAnnotFreeText ----------- */

static PyObject *
_wrap_poppler_annot_free_text_get_quadding(PyGObject *self)
{
    gint ret;

    
    ret = poppler_annot_free_text_get_quadding(POPPLER_ANNOT_FREE_TEXT(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_ANNOT_FREE_TEXT_QUADDING, ret);
}

static PyObject *
_wrap_poppler_annot_free_text_get_callout_line(PyGObject *self)
{
    PopplerAnnotCalloutLine *ret;

    
    ret = poppler_annot_free_text_get_callout_line(POPPLER_ANNOT_FREE_TEXT(self->obj));
    
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_ANNOT_CALLOUT_LINE, ret, TRUE, TRUE);
}

static const PyMethodDef _PyPopplerAnnotFreeText_methods[] = {
    { "get_quadding", (PyCFunction)_wrap_poppler_annot_free_text_get_quadding, METH_NOARGS,
      NULL },
    { "get_callout_line", (PyCFunction)_wrap_poppler_annot_free_text_get_callout_line, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerAnnotFreeText_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.AnnotFreeText",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerAnnotFreeText_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerDocument ----------- */

static PyObject *
_wrap_poppler_document_save(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uri", NULL };
    char *uri;
    int ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Poppler.Document.save", kwlist, &uri))
        return NULL;
    
    ret = poppler_document_save(POPPLER_DOCUMENT(self->obj), uri, &error);
    
    if (pyg_error_check(&error))
        return NULL;
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_document_get_n_pages(PyGObject *self)
{
    int ret;

    
    ret = poppler_document_get_n_pages(POPPLER_DOCUMENT(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_document_get_page(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "index", NULL };
    int index;
    PyObject *py_ret;
    PopplerPage *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.Document.get_page", kwlist, &index))
        return NULL;
    
    ret = poppler_document_get_page(POPPLER_DOCUMENT(self->obj), index);
    
    py_ret = pygobject_new((GObject *)ret);
    if (ret != NULL)
        g_object_unref(ret);
    return py_ret;
}

static PyObject *
_wrap_poppler_document_get_page_by_label(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "label", NULL };
    char *label;
    PyObject *py_ret;
    PopplerPage *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Poppler.Document.get_page_by_label", kwlist, &label))
        return NULL;
    
    ret = poppler_document_get_page_by_label(POPPLER_DOCUMENT(self->obj), label);
    
    py_ret = pygobject_new((GObject *)ret);
    if (ret != NULL)
        g_object_unref(ret);
    return py_ret;
}

static PyObject *
_wrap_poppler_document_has_attachments(PyGObject *self)
{
    int ret;

    
    ret = poppler_document_has_attachments(POPPLER_DOCUMENT(self->obj));
    
    return PyBool_FromLong(ret);

}

#line 256 "poppler.override"
static PyObject *
_wrap_poppler_document_get_attachments(PyGObject *self)
{
    GList           *item_list;
    PyObject        *ret;

    item_list = poppler_document_get_attachments(POPPLER_DOCUMENT(self->obj));
    ret = _glist_to_pylist_objs(item_list);
    g_list_free(item_list);
    return ret;
}
#line 2898 "poppler.c"


static PyObject *
_wrap_poppler_document_find_dest(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "link_name", NULL };
    char *link_name;
    PopplerDest *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Poppler.Document.find_dest", kwlist, &link_name))
        return NULL;
    
    ret = poppler_document_find_dest(POPPLER_DOCUMENT(self->obj), link_name);
    
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_DEST, ret, FALSE, TRUE);
}

static PyObject *
_wrap_poppler_document_get_form_field(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "id", NULL };
    int id;
    PyObject *py_ret;
    PopplerFormField *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.Document.get_form_field", kwlist, &id))
        return NULL;
    
    ret = poppler_document_get_form_field(POPPLER_DOCUMENT(self->obj), id);
    
    py_ret = pygobject_new((GObject *)ret);
    if (ret != NULL)
        g_object_unref(ret);
    return py_ret;
}

static const PyMethodDef _PyPopplerDocument_methods[] = {
    { "save", (PyCFunction)_wrap_poppler_document_save, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_n_pages", (PyCFunction)_wrap_poppler_document_get_n_pages, METH_NOARGS,
      NULL },
    { "get_page", (PyCFunction)_wrap_poppler_document_get_page, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_page_by_label", (PyCFunction)_wrap_poppler_document_get_page_by_label, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "has_attachments", (PyCFunction)_wrap_poppler_document_has_attachments, METH_NOARGS,
      NULL },
    { "get_attachments", (PyCFunction)_wrap_poppler_document_get_attachments, METH_NOARGS,
      NULL },
    { "find_dest", (PyCFunction)_wrap_poppler_document_find_dest, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_form_field", (PyCFunction)_wrap_poppler_document_get_form_field, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerDocument_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Document",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerDocument_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerLayer ----------- */

static PyObject *
_wrap_poppler_layer_get_title(PyGObject *self)
{
    const gchar *ret;

    
    ret = poppler_layer_get_title(POPPLER_LAYER(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_layer_is_visible(PyGObject *self)
{
    int ret;

    
    ret = poppler_layer_is_visible(POPPLER_LAYER(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_layer_show(PyGObject *self)
{
    
    poppler_layer_show(POPPLER_LAYER(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_layer_hide(PyGObject *self)
{
    
    poppler_layer_hide(POPPLER_LAYER(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_layer_is_parent(PyGObject *self)
{
    int ret;

    
    ret = poppler_layer_is_parent(POPPLER_LAYER(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_layer_get_radio_button_group_id(PyGObject *self)
{
    int ret;

    
    ret = poppler_layer_get_radio_button_group_id(POPPLER_LAYER(self->obj));
    
    return PyInt_FromLong(ret);
}

static const PyMethodDef _PyPopplerLayer_methods[] = {
    { "get_title", (PyCFunction)_wrap_poppler_layer_get_title, METH_NOARGS,
      NULL },
    { "is_visible", (PyCFunction)_wrap_poppler_layer_is_visible, METH_NOARGS,
      NULL },
    { "show", (PyCFunction)_wrap_poppler_layer_show, METH_NOARGS,
      NULL },
    { "hide", (PyCFunction)_wrap_poppler_layer_hide, METH_NOARGS,
      NULL },
    { "is_parent", (PyCFunction)_wrap_poppler_layer_is_parent, METH_NOARGS,
      NULL },
    { "get_radio_button_group_id", (PyCFunction)_wrap_poppler_layer_get_radio_button_group_id, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerLayer_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Layer",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerLayer_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerPage ----------- */

static PyObject *
_wrap_poppler_page_render(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "cairo", NULL };
    PycairoContext *cairo;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Poppler.Page.render", kwlist, &PycairoContext_Type, &cairo))
        return NULL;
    pyg_begin_allow_threads;
    poppler_page_render(POPPLER_PAGE(self->obj), cairo->ctx);
    pyg_end_allow_threads;
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_page_render_for_printing(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "cairo", NULL };
    PycairoContext *cairo;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Poppler.Page.render_for_printing", kwlist, &PycairoContext_Type, &cairo))
        return NULL;
    pyg_begin_allow_threads;
    poppler_page_render_for_printing(POPPLER_PAGE(self->obj), cairo->ctx);
    pyg_end_allow_threads;
    Py_INCREF(Py_None);
    return Py_None;
}

#line 543 "poppler.override"
static PyObject *
_wrap_poppler_page_get_thumbnail(PyGObject *self,
                                 PyObject *args,
                                 PyObject *kwargs)
{
    cairo_surface_t * surface;

    surface = poppler_page_get_thumbnail(POPPLER_PAGE(self->obj));

#if PYCAIRO_VERSION_HEX >= 0x1010600
    return PycairoSurface_FromSurface(surface, NULL);
#else
    return PycairoSurface_FromSurface(surface, NULL, NULL);
#endif
}
#line 3185 "poppler.c"


static PyObject *
_wrap_poppler_page_render_selection(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "cairo", "selection", "old_selection", "style", "glyph_color", "background_color", NULL };
    PyObject *py_selection, *py_old_selection, *py_style = NULL, *py_glyph_color, *py_background_color;
    PopplerColor *glyph_color = NULL, *background_color = NULL;
    PopplerSelectionStyle style;
    PycairoContext *cairo;
    PopplerRectangle *selection = NULL, *old_selection = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!OOOOO:Poppler.Page.render_selection", kwlist, &PycairoContext_Type, &cairo, &py_selection, &py_old_selection, &py_style, &py_glyph_color, &py_background_color))
        return NULL;
    if (pyg_boxed_check(py_selection, POPPLER_TYPE_RECTANGLE))
        selection = pyg_boxed_get(py_selection, PopplerRectangle);
    else {
        PyErr_SetString(PyExc_TypeError, "selection should be a PopplerRectangle");
        return NULL;
    }
    if (pyg_boxed_check(py_old_selection, POPPLER_TYPE_RECTANGLE))
        old_selection = pyg_boxed_get(py_old_selection, PopplerRectangle);
    else {
        PyErr_SetString(PyExc_TypeError, "old_selection should be a PopplerRectangle");
        return NULL;
    }
    if (pyg_enum_get_value(POPPLER_TYPE_SELECTION_STYLE, py_style, (gpointer)&style))
        return NULL;
    if (pyg_boxed_check(py_glyph_color, POPPLER_TYPE_COLOR))
        glyph_color = pyg_boxed_get(py_glyph_color, PopplerColor);
    else {
        PyErr_SetString(PyExc_TypeError, "glyph_color should be a PopplerColor");
        return NULL;
    }
    if (pyg_boxed_check(py_background_color, POPPLER_TYPE_COLOR))
        background_color = pyg_boxed_get(py_background_color, PopplerColor);
    else {
        PyErr_SetString(PyExc_TypeError, "background_color should be a PopplerColor");
        return NULL;
    }
    pyg_begin_allow_threads;
    poppler_page_render_selection(POPPLER_PAGE(self->obj), cairo->ctx, selection, old_selection, style, glyph_color, background_color);
    pyg_end_allow_threads;
    Py_INCREF(Py_None);
    return Py_None;
}

#line 291 "poppler.override"
static PyObject *
_wrap_poppler_page_get_size(PyGObject *self)
{
    double      width;
    double      height;

    poppler_page_get_size(POPPLER_PAGE(self->obj), &width, &height);

    return Py_BuildValue("dd", width, height);
}
#line 3244 "poppler.c"


static PyObject *
_wrap_poppler_page_get_index(PyGObject *self)
{
    int ret;

    
    ret = poppler_page_get_index(POPPLER_PAGE(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_page_get_duration(PyGObject *self)
{
    double ret;

    
    ret = poppler_page_get_duration(POPPLER_PAGE(self->obj));
    
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_page_get_transition(PyGObject *self)
{
    PopplerPageTransition *ret;

    
    ret = poppler_page_get_transition(POPPLER_PAGE(self->obj));
    
    /* pyg_boxed_new handles NULL checking */
    return pyg_boxed_new(POPPLER_TYPE_PAGE_TRANSITION, ret, TRUE, TRUE);
}

#line 323 "poppler.override"
static PyObject *
_wrap_poppler_page_get_thumbnail_size(PyGObject *self)
{
    int                 width, height;

    poppler_page_get_thumbnail_size (POPPLER_PAGE(self->obj), &width, &height);

    return Py_BuildValue("ii", width, height);
}
#line 3291 "poppler.c"


#line 269 "poppler.override"
static PyObject *
_wrap_poppler_page_find_text(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char     *kwlist[] = { "text", NULL };
    const gchar     *text;
    GList           *item_list;
    PyObject        *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     "s",
                                     kwlist,
                                     &text)) {
        return NULL;
    }

    item_list = poppler_page_find_text(POPPLER_PAGE(self->obj), text);
    ret = _glist_to_pylist_boxed(item_list, POPPLER_TYPE_RECTANGLE);
    g_list_free(item_list);
    return ret;
}
#line 3315 "poppler.c"


static PyObject *
_wrap_poppler_page_render_to_ps(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "ps_file", NULL };
    PyGObject *ps_file;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Poppler.Page.render_to_ps", kwlist, &PyPopplerPSFile_Type, &ps_file))
        return NULL;
    pyg_begin_allow_threads;
    poppler_page_render_to_ps(POPPLER_PAGE(self->obj), POPPLER_PS_FILE(ps_file->obj));
    pyg_end_allow_threads;
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_page_get_text(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_page_get_text(POPPLER_PAGE(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_page_get_selected_text(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "style", "rect", NULL };
    PyObject *py_style = NULL, *py_rect;
    gchar *ret;
    PopplerSelectionStyle style;
    PopplerRectangle *rect = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"OO:Poppler.Page.get_selected_text", kwlist, &py_style, &py_rect))
        return NULL;
    if (pyg_enum_get_value(POPPLER_TYPE_SELECTION_STYLE, py_style, (gpointer)&style))
        return NULL;
    if (pyg_boxed_check(py_rect, POPPLER_TYPE_RECTANGLE))
        rect = pyg_boxed_get(py_rect, PopplerRectangle);
    else {
        PyErr_SetString(PyExc_TypeError, "rect should be a PopplerRectangle");
        return NULL;
    }
    
    ret = poppler_page_get_selected_text(POPPLER_PAGE(self->obj), style, rect);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

#line 386 "poppler.override"
static PyObject *
_wrap_poppler_page_get_selection_region(PyGObject *self,
                                        PyObject *args,
                                        PyObject *kwargs)
{
    static char             *kwlist[] = { "scale", "style", "selection", NULL };
    double                  scale;
    PopplerSelectionStyle   style;
    PopplerRectangle        *selection;
    GList                   *item_list;
    PyObject                *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     "diO:Page.get_selection_region", kwlist,
                                     &scale, &style, &selection)) {
        return NULL;
    }

    item_list = poppler_page_get_selection_region(POPPLER_PAGE(self->obj),
                                                  scale, style, selection);
    ret = _glist_to_pylist_boxed(item_list, POPPLER_TYPE_RECTANGLE);
    g_list_free(item_list);
    return ret;
}
#line 3406 "poppler.c"


#line 334 "poppler.override"
static PyObject *
_wrap_poppler_page_get_link_mapping(PyGObject *self)
{
    GList           *item_list;
    PyObject        *ret;

    item_list = poppler_page_get_link_mapping(POPPLER_PAGE(self->obj));
    ret = _glist_to_pylist_boxed(item_list, POPPLER_TYPE_LINK_MAPPING);
    poppler_page_free_link_mapping(item_list);
    return ret;
}
#line 3421 "poppler.c"


#line 347 "poppler.override"
static PyObject *
_wrap_poppler_page_get_image_mapping(PyGObject *self)
{
    GList           *item_list;
    PyObject        *ret;

    item_list = poppler_page_get_image_mapping(POPPLER_PAGE(self->obj));
    ret = _glist_to_pylist_boxed(item_list, POPPLER_TYPE_IMAGE_MAPPING);
    poppler_page_free_image_mapping(item_list);
    return ret;
}
#line 3436 "poppler.c"


#line 560 "poppler.override"
static PyObject *
_wrap_poppler_page_get_image(PyGObject *self,
                             PyObject *args,
                             PyObject *kwargs)
{
    static char     *kwlist[] = { "image_id", NULL };
    gint            image_id;
    cairo_surface_t *surface;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     "i:Page.get_image", kwlist,
                                     &image_id)) {
        return NULL;
    }

    surface = poppler_page_get_image(POPPLER_PAGE(self->obj), image_id);

#if PYCAIRO_VERSION_HEX >= 0x1010600
    return PycairoSurface_FromSurface(surface, NULL);
#else
    return PycairoSurface_FromSurface(surface, NULL, NULL);
#endif
}
#line 3463 "poppler.c"


#line 360 "poppler.override"
static PyObject *
_wrap_poppler_page_get_form_field_mapping(PyGObject *self)
{
    GList           *item_list;
    PyObject        *ret;

    item_list = poppler_page_get_form_field_mapping(POPPLER_PAGE(self->obj));
    ret = _glist_to_pylist_boxed(item_list, POPPLER_TYPE_FORM_FIELD_MAPPING);
    poppler_page_free_form_field_mapping(item_list);
    return ret;
}
#line 3478 "poppler.c"


#line 373 "poppler.override"
static PyObject *
_wrap_poppler_page_get_annot_mapping(PyGObject *self)
{
    GList           *item_list;
    PyObject        *ret;

    item_list = poppler_page_get_annot_mapping(POPPLER_PAGE(self->obj));
    ret = _glist_to_pylist_boxed(item_list, POPPLER_TYPE_ANNOT_MAPPING);
    poppler_page_free_annot_mapping(item_list);
    return ret;
}
#line 3493 "poppler.c"


static PyObject *
_wrap_poppler_page_get_crop_box(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "rect", NULL };
    PyObject *py_rect;
    PopplerRectangle *rect = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O:Poppler.Page.get_crop_box", kwlist, &py_rect))
        return NULL;
    if (pyg_boxed_check(py_rect, POPPLER_TYPE_RECTANGLE))
        rect = pyg_boxed_get(py_rect, PopplerRectangle);
    else {
        PyErr_SetString(PyExc_TypeError, "rect should be a PopplerRectangle");
        return NULL;
    }
    
    poppler_page_get_crop_box(POPPLER_PAGE(self->obj), rect);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyPopplerPage_methods[] = {
    { "render", (PyCFunction)_wrap_poppler_page_render, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "render_for_printing", (PyCFunction)_wrap_poppler_page_render_for_printing, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_thumbnail", (PyCFunction)_wrap_poppler_page_get_thumbnail, METH_NOARGS,
      NULL },
    { "render_selection", (PyCFunction)_wrap_poppler_page_render_selection, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_size", (PyCFunction)_wrap_poppler_page_get_size, METH_NOARGS,
      NULL },
    { "get_index", (PyCFunction)_wrap_poppler_page_get_index, METH_NOARGS,
      NULL },
    { "get_duration", (PyCFunction)_wrap_poppler_page_get_duration, METH_NOARGS,
      NULL },
    { "get_transition", (PyCFunction)_wrap_poppler_page_get_transition, METH_NOARGS,
      NULL },
    { "get_thumbnail_size", (PyCFunction)_wrap_poppler_page_get_thumbnail_size, METH_NOARGS,
      NULL },
    { "find_text", (PyCFunction)_wrap_poppler_page_find_text, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "render_to_ps", (PyCFunction)_wrap_poppler_page_render_to_ps, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_text", (PyCFunction)_wrap_poppler_page_get_text, METH_NOARGS,
      NULL },
    { "get_selected_text", (PyCFunction)_wrap_poppler_page_get_selected_text, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_selection_region", (PyCFunction)_wrap_poppler_page_get_selection_region, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_link_mapping", (PyCFunction)_wrap_poppler_page_get_link_mapping, METH_NOARGS,
      NULL },
    { "get_image_mapping", (PyCFunction)_wrap_poppler_page_get_image_mapping, METH_NOARGS,
      NULL },
    { "get_image", (PyCFunction)_wrap_poppler_page_get_image, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_form_field_mapping", (PyCFunction)_wrap_poppler_page_get_form_field_mapping, METH_NOARGS,
      NULL },
    { "get_annot_mapping", (PyCFunction)_wrap_poppler_page_get_annot_mapping, METH_NOARGS,
      NULL },
    { "get_crop_box", (PyCFunction)_wrap_poppler_page_get_crop_box, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerPage_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Page",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerPage_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerPSFile ----------- */

static PyObject *
_wrap_poppler_ps_file_set_paper_size(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "width", "height", NULL };
    double width, height;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"dd:Poppler.PSFile.set_paper_size", kwlist, &width, &height))
        return NULL;
    
    poppler_ps_file_set_paper_size(POPPLER_PS_FILE(self->obj), width, height);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_ps_file_set_duplex(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "duplex", NULL };
    int duplex;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.PSFile.set_duplex", kwlist, &duplex))
        return NULL;
    
    poppler_ps_file_set_duplex(POPPLER_PS_FILE(self->obj), duplex);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyPopplerPSFile_methods[] = {
    { "set_paper_size", (PyCFunction)_wrap_poppler_ps_file_set_paper_size, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_duplex", (PyCFunction)_wrap_poppler_ps_file_set_duplex, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerPSFile_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.PSFile",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerPSFile_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerAttachment ----------- */

static PyObject *
_wrap_poppler_attachment_save(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "filename", NULL };
    char *filename;
    int ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Poppler.Attachment.save", kwlist, &filename))
        return NULL;
    
    ret = poppler_attachment_save(POPPLER_ATTACHMENT(self->obj), filename, &error);
    
    if (pyg_error_check(&error))
        return NULL;
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyPopplerAttachment_methods[] = {
    { "save", (PyCFunction)_wrap_poppler_attachment_save, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerAttachment_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.Attachment",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerAttachment_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerFormField ----------- */

static PyObject *
_wrap_poppler_form_field_get_field_type(PyGObject *self)
{
    gint ret;

    
    ret = poppler_form_field_get_field_type(POPPLER_FORM_FIELD(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_FORM_FIELD_TYPE, ret);
}

static PyObject *
_wrap_poppler_form_field_get_id(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_get_id(POPPLER_FORM_FIELD(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_form_field_get_font_size(PyGObject *self)
{
    double ret;

    
    ret = poppler_form_field_get_font_size(POPPLER_FORM_FIELD(self->obj));
    
    return PyFloat_FromDouble(ret);
}

static PyObject *
_wrap_poppler_form_field_is_read_only(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_is_read_only(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_button_get_button_type(PyGObject *self)
{
    gint ret;

    
    ret = poppler_form_field_button_get_button_type(POPPLER_FORM_FIELD(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_FORM_BUTTON_TYPE, ret);
}

static PyObject *
_wrap_poppler_form_field_button_get_state(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_button_get_state(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_button_set_state(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "state", NULL };
    int state;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.FormField.button_set_state", kwlist, &state))
        return NULL;
    
    poppler_form_field_button_set_state(POPPLER_FORM_FIELD(self->obj), state);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_text_get_text_type(PyGObject *self)
{
    gint ret;

    
    ret = poppler_form_field_text_get_text_type(POPPLER_FORM_FIELD(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_FORM_TEXT_TYPE, ret);
}

static PyObject *
_wrap_poppler_form_field_text_get_text(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_form_field_text_get_text(POPPLER_FORM_FIELD(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_text_set_text(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Poppler.FormField.text_set_text", kwlist, &text))
        return NULL;
    
    poppler_form_field_text_set_text(POPPLER_FORM_FIELD(self->obj), text);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_get_partial_name(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_form_field_get_partial_name(POPPLER_FORM_FIELD(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_get_mapping_name(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_form_field_get_mapping_name(POPPLER_FORM_FIELD(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_get_name(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_form_field_get_name(POPPLER_FORM_FIELD(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_text_get_max_len(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_text_get_max_len(POPPLER_FORM_FIELD(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_form_field_text_do_spell_check(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_text_do_spell_check(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_text_do_scroll(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_text_do_scroll(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_text_is_rich_text(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_text_is_rich_text(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_text_is_password(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_text_is_password(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_choice_get_choice_type(PyGObject *self)
{
    gint ret;

    
    ret = poppler_form_field_choice_get_choice_type(POPPLER_FORM_FIELD(self->obj));
    
    return pyg_enum_from_gtype(POPPLER_TYPE_FORM_CHOICE_TYPE, ret);
}

static PyObject *
_wrap_poppler_form_field_choice_is_editable(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_choice_is_editable(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_choice_can_select_multiple(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_choice_can_select_multiple(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_choice_do_spell_check(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_choice_do_spell_check(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_choice_commit_on_change(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_choice_commit_on_change(POPPLER_FORM_FIELD(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_choice_get_n_items(PyGObject *self)
{
    int ret;

    
    ret = poppler_form_field_choice_get_n_items(POPPLER_FORM_FIELD(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_poppler_form_field_choice_get_item(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "index", NULL };
    int index;
    gchar *ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.FormField.choice_get_item", kwlist, &index))
        return NULL;
    
    ret = poppler_form_field_choice_get_item(POPPLER_FORM_FIELD(self->obj), index);
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_choice_is_item_selected(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "index", NULL };
    int index, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.FormField.choice_is_item_selected", kwlist, &index))
        return NULL;
    
    ret = poppler_form_field_choice_is_item_selected(POPPLER_FORM_FIELD(self->obj), index);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_poppler_form_field_choice_select_item(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "index", NULL };
    int index;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.FormField.choice_select_item", kwlist, &index))
        return NULL;
    
    poppler_form_field_choice_select_item(POPPLER_FORM_FIELD(self->obj), index);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_choice_unselect_all(PyGObject *self)
{
    
    poppler_form_field_choice_unselect_all(POPPLER_FORM_FIELD(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_choice_toggle_item(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "index", NULL };
    int index;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:Poppler.FormField.choice_toggle_item", kwlist, &index))
        return NULL;
    
    poppler_form_field_choice_toggle_item(POPPLER_FORM_FIELD(self->obj), index);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_choice_set_text(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "text", NULL };
    char *text;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:Poppler.FormField.choice_set_text", kwlist, &text))
        return NULL;
    
    poppler_form_field_choice_set_text(POPPLER_FORM_FIELD(self->obj), text);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_poppler_form_field_choice_get_text(PyGObject *self)
{
    gchar *ret;

    
    ret = poppler_form_field_choice_get_text(POPPLER_FORM_FIELD(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static const PyMethodDef _PyPopplerFormField_methods[] = {
    { "get_field_type", (PyCFunction)_wrap_poppler_form_field_get_field_type, METH_NOARGS,
      NULL },
    { "get_id", (PyCFunction)_wrap_poppler_form_field_get_id, METH_NOARGS,
      NULL },
    { "get_font_size", (PyCFunction)_wrap_poppler_form_field_get_font_size, METH_NOARGS,
      NULL },
    { "is_read_only", (PyCFunction)_wrap_poppler_form_field_is_read_only, METH_NOARGS,
      NULL },
    { "button_get_button_type", (PyCFunction)_wrap_poppler_form_field_button_get_button_type, METH_NOARGS,
      NULL },
    { "button_get_state", (PyCFunction)_wrap_poppler_form_field_button_get_state, METH_NOARGS,
      NULL },
    { "button_set_state", (PyCFunction)_wrap_poppler_form_field_button_set_state, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "text_get_text_type", (PyCFunction)_wrap_poppler_form_field_text_get_text_type, METH_NOARGS,
      NULL },
    { "text_get_text", (PyCFunction)_wrap_poppler_form_field_text_get_text, METH_NOARGS,
      NULL },
    { "text_set_text", (PyCFunction)_wrap_poppler_form_field_text_set_text, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_partial_name", (PyCFunction)_wrap_poppler_form_field_get_partial_name, METH_NOARGS,
      NULL },
    { "get_mapping_name", (PyCFunction)_wrap_poppler_form_field_get_mapping_name, METH_NOARGS,
      NULL },
    { "get_name", (PyCFunction)_wrap_poppler_form_field_get_name, METH_NOARGS,
      NULL },
    { "text_get_max_len", (PyCFunction)_wrap_poppler_form_field_text_get_max_len, METH_NOARGS,
      NULL },
    { "text_do_spell_check", (PyCFunction)_wrap_poppler_form_field_text_do_spell_check, METH_NOARGS,
      NULL },
    { "text_do_scroll", (PyCFunction)_wrap_poppler_form_field_text_do_scroll, METH_NOARGS,
      NULL },
    { "text_is_rich_text", (PyCFunction)_wrap_poppler_form_field_text_is_rich_text, METH_NOARGS,
      NULL },
    { "text_is_password", (PyCFunction)_wrap_poppler_form_field_text_is_password, METH_NOARGS,
      NULL },
    { "choice_get_choice_type", (PyCFunction)_wrap_poppler_form_field_choice_get_choice_type, METH_NOARGS,
      NULL },
    { "choice_is_editable", (PyCFunction)_wrap_poppler_form_field_choice_is_editable, METH_NOARGS,
      NULL },
    { "choice_can_select_multiple", (PyCFunction)_wrap_poppler_form_field_choice_can_select_multiple, METH_NOARGS,
      NULL },
    { "choice_do_spell_check", (PyCFunction)_wrap_poppler_form_field_choice_do_spell_check, METH_NOARGS,
      NULL },
    { "choice_commit_on_change", (PyCFunction)_wrap_poppler_form_field_choice_commit_on_change, METH_NOARGS,
      NULL },
    { "choice_get_n_items", (PyCFunction)_wrap_poppler_form_field_choice_get_n_items, METH_NOARGS,
      NULL },
    { "choice_get_item", (PyCFunction)_wrap_poppler_form_field_choice_get_item, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "choice_is_item_selected", (PyCFunction)_wrap_poppler_form_field_choice_is_item_selected, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "choice_select_item", (PyCFunction)_wrap_poppler_form_field_choice_select_item, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "choice_unselect_all", (PyCFunction)_wrap_poppler_form_field_choice_unselect_all, METH_NOARGS,
      NULL },
    { "choice_toggle_item", (PyCFunction)_wrap_poppler_form_field_choice_toggle_item, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "choice_set_text", (PyCFunction)_wrap_poppler_form_field_choice_set_text, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "choice_get_text", (PyCFunction)_wrap_poppler_form_field_choice_get_text, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerFormField_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.FormField",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerFormField_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- PopplerFontInfo ----------- */

static int
_wrap_poppler_font_info_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "document", NULL };
    PyGObject *document;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:Poppler.FontInfo.__init__", kwlist, &PyPopplerDocument_Type, &document))
        return -1;
    self->obj = (GObject *)poppler_font_info_new(POPPLER_DOCUMENT(document->obj));

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create PopplerFontInfo object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

#line 303 "poppler.override"
static PyObject *
_wrap_poppler_font_info_scan(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char         *kwlist[] = { "n_pages", NULL };
    int                 n_pages;
    PopplerFontsIter    *fonts_iter;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     "i",
                                     kwlist,
                                     &n_pages)) {
        return NULL;
    }

    poppler_font_info_scan (POPPLER_FONT_INFO(self->obj), n_pages, &fonts_iter);

    return pyg_boxed_new(POPPLER_TYPE_FONTS_ITER, fonts_iter, TRUE, TRUE);
}
#line 4338 "poppler.c"


static const PyMethodDef _PyPopplerFontInfo_methods[] = {
    { "scan", (PyCFunction)_wrap_poppler_font_info_scan, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyPopplerFontInfo_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "poppler.FontInfo",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyPopplerFontInfo_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_poppler_font_info_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_poppler_document_new_from_file(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uri", "password", NULL };
    char *uri, *password;
    PyObject *py_ret;
    PopplerDocument *ret;
    GError *error = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sz:document_new_from_file", kwlist, &uri, &password))
        return NULL;
    
    ret = poppler_document_new_from_file(uri, password, &error);
    
    if (pyg_error_check(&error))
        return NULL;
    py_ret = pygobject_new((GObject *)ret);
    if (ret != NULL)
        g_object_unref(ret);
    return py_ret;
}

static PyObject *
_wrap_poppler_document_new_from_data(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "data", "length", "password", NULL };
    char *data, *password;
    int length;
    PopplerDocument *ret;
    GError *error = NULL;
    PyObject *py_ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"sis:document_new_from_data", kwlist, &data, &length, &password))
        return NULL;
    
    ret = poppler_document_new_from_data(data, length, password, &error);
    
    if (pyg_error_check(&error))
        return NULL;
    py_ret = pygobject_new((GObject *)ret);
    if (ret != NULL)
        g_object_unref(ret);
    return py_ret;
}

static PyObject *
_wrap_poppler_get_backend(PyObject *self)
{
    gint ret;

    
    ret = poppler_get_backend();
    
    return pyg_enum_from_gtype(POPPLER_TYPE_BACKEND, ret);
}

static PyObject *
_wrap_poppler_get_version(PyObject *self)
{
    const gchar *ret;

    
    ret = poppler_get_version();
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

const PyMethodDef py_poppler_functions[] = {
    { "document_new_from_file", (PyCFunction)_wrap_poppler_document_new_from_file, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "document_new_from_data", (PyCFunction)_wrap_poppler_document_new_from_data, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_backend", (PyCFunction)_wrap_poppler_get_backend, METH_NOARGS,
      NULL },
    { "get_version", (PyCFunction)_wrap_poppler_get_version, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
py_poppler_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "ActionType", strip_prefix, POPPLER_TYPE_ACTION_TYPE);
  pyg_enum_add(module, "DestType", strip_prefix, POPPLER_TYPE_DEST_TYPE);
  pyg_enum_add(module, "AnnotType", strip_prefix, POPPLER_TYPE_ANNOT_TYPE);
  pyg_flags_add(module, "AnnotFlag", strip_prefix, POPPLER_TYPE_ANNOT_FLAG);
  pyg_enum_add(module, "AnnotMarkupReplyType", strip_prefix, POPPLER_TYPE_ANNOT_MARKUP_REPLY_TYPE);
  pyg_enum_add(module, "AnnotExternalDataType", strip_prefix, POPPLER_TYPE_ANNOT_EXTERNAL_DATA_TYPE);
  pyg_enum_add(module, "AnnotTextState", strip_prefix, POPPLER_TYPE_ANNOT_TEXT_STATE);
  pyg_enum_add(module, "AnnotFreeTextQuadding", strip_prefix, POPPLER_TYPE_ANNOT_FREE_TEXT_QUADDING);
  pyg_enum_add(module, "PageLayout", strip_prefix, POPPLER_TYPE_PAGE_LAYOUT);
  pyg_enum_add(module, "PageMode", strip_prefix, POPPLER_TYPE_PAGE_MODE);
  pyg_enum_add(module, "FontType", strip_prefix, POPPLER_TYPE_FONT_TYPE);
  pyg_flags_add(module, "ViewerPreferences", strip_prefix, POPPLER_TYPE_VIEWER_PREFERENCES);
  pyg_flags_add(module, "Permissions", strip_prefix, POPPLER_TYPE_PERMISSIONS);
  pyg_enum_add(module, "FormFieldType", strip_prefix, POPPLER_TYPE_FORM_FIELD_TYPE);
  pyg_enum_add(module, "FormButtonType", strip_prefix, POPPLER_TYPE_FORM_BUTTON_TYPE);
  pyg_enum_add(module, "FormTextType", strip_prefix, POPPLER_TYPE_FORM_TEXT_TYPE);
  pyg_enum_add(module, "FormChoiceType", strip_prefix, POPPLER_TYPE_FORM_CHOICE_TYPE);
  pyg_enum_add(module, "Error", strip_prefix, POPPLER_TYPE_ERROR);
  // 2018/05/24 poppler.c:4504:53: error: use of undeclared identifier 'POPPLER_TYPE_ORIENTATION'
  // pyg_enum_add(module, "Orientation", strip_prefix, POPPLER_TYPE_ORIENTATION);
  pyg_enum_add(module, "PageTransitionType", strip_prefix, POPPLER_TYPE_PAGE_TRANSITION_TYPE);
  pyg_enum_add(module, "PageTransitionAlignment", strip_prefix, POPPLER_TYPE_PAGE_TRANSITION_ALIGNMENT);
  pyg_enum_add(module, "PageTransitionDirection", strip_prefix, POPPLER_TYPE_PAGE_TRANSITION_DIRECTION);
  pyg_enum_add(module, "SelectionStyle", strip_prefix, POPPLER_TYPE_SELECTION_STYLE);
  pyg_enum_add(module, "Backend", strip_prefix, POPPLER_TYPE_BACKEND);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
py_poppler_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        _PyGObject_Type = (PyTypeObject *)PyObject_GetAttrString(module, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return ;
    }


#line 237 "poppler.override"


#line 4539 "poppler.c"
    pyg_register_boxed(d, "FormFieldMapping", POPPLER_TYPE_FORM_FIELD_MAPPING, &PyPopplerFormFieldMapping_Type);
    pyg_register_boxed(d, "ImageMapping", POPPLER_TYPE_IMAGE_MAPPING, &PyPopplerImageMapping_Type);
    pyg_register_boxed(d, "PageTransition", POPPLER_TYPE_PAGE_TRANSITION, &PyPopplerPageTransition_Type);
    pyg_register_boxed(d, "LinkMapping", POPPLER_TYPE_LINK_MAPPING, &PyPopplerLinkMapping_Type);
    pyg_register_boxed(d, "Rectangle", POPPLER_TYPE_RECTANGLE, &PyPopplerRectangle_Type);
    pyg_register_boxed(d, "Color", POPPLER_TYPE_COLOR, &PyPopplerColor_Type);
    pyg_register_boxed(d, "Action", POPPLER_TYPE_ACTION, &PyPopplerAction_Type);
    pyg_register_boxed(d, "ActionAny", POPPLER_TYPE_ACTION_ANY, &PyPopplerActionAny_Type);
    pyg_register_boxed(d, "ActionGotoDest", POPPLER_TYPE_ACTION_GOTO_DEST, &PyPopplerActionGotoDest_Type);
    pyg_register_boxed(d, "ActionGotoRemote", POPPLER_TYPE_ACTION_GOTO_REMOTE, &PyPopplerActionGotoRemote_Type);
    pyg_register_boxed(d, "ActionLaunch", POPPLER_TYPE_ACTION_LAUNCH, &PyPopplerActionLaunch_Type);
    pyg_register_boxed(d, "ActionUri", POPPLER_TYPE_ACTION_URI, &PyPopplerActionUri_Type);
    pyg_register_boxed(d, "ActionNamed", POPPLER_TYPE_ACTION_NAMED, &PyPopplerActionNamed_Type);
    pyg_register_boxed(d, "ActionMovie", POPPLER_TYPE_ACTION_MOVIE, &PyPopplerActionMovie_Type);
    pyg_register_boxed(d, "Dest", POPPLER_TYPE_DEST, &PyPopplerDest_Type);
    pyg_register_boxed(d, "FontsIter", POPPLER_TYPE_FONTS_ITER, &PyPopplerFontsIter_Type);
    pyg_register_boxed(d, "IndexIter", POPPLER_TYPE_INDEX_ITER, &PyPopplerIndexIter_Type);
    pyg_register_boxed(d, "AnnotCalloutLine", POPPLER_TYPE_ANNOT_CALLOUT_LINE, &PyPopplerAnnotCalloutLine_Type);
    pyg_register_boxed(d, "AnnotMapping", POPPLER_TYPE_ANNOT_MAPPING, &PyPopplerAnnotMapping_Type);
    pygobject_register_class(d, "PopplerAnnot", POPPLER_TYPE_ANNOT, &PyPopplerAnnot_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_ANNOT);
    pygobject_register_class(d, "PopplerAnnotMarkup", POPPLER_TYPE_ANNOT_MARKUP, &PyPopplerAnnotMarkup_Type, Py_BuildValue("(O)", &PyPopplerAnnot_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_ANNOT_MARKUP);
    pygobject_register_class(d, "PopplerAnnotText", POPPLER_TYPE_ANNOT_TEXT, &PyPopplerAnnotText_Type, Py_BuildValue("(O)", &PyPopplerAnnotMarkup_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_ANNOT_TEXT);
    pygobject_register_class(d, "PopplerAnnotFreeText", POPPLER_TYPE_ANNOT_FREE_TEXT, &PyPopplerAnnotFreeText_Type, Py_BuildValue("(O)", &PyPopplerAnnotMarkup_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_ANNOT_FREE_TEXT);
    pygobject_register_class(d, "PopplerDocument", POPPLER_TYPE_DOCUMENT, &PyPopplerDocument_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_DOCUMENT);
    pygobject_register_class(d, "PopplerLayer", POPPLER_TYPE_LAYER, &PyPopplerLayer_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_LAYER);
    pygobject_register_class(d, "PopplerPage", POPPLER_TYPE_PAGE, &PyPopplerPage_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_PAGE);
    pygobject_register_class(d, "PopplerPSFile", POPPLER_TYPE_PS_FILE, &PyPopplerPSFile_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_PS_FILE);
    pygobject_register_class(d, "PopplerAttachment", POPPLER_TYPE_ATTACHMENT, &PyPopplerAttachment_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_ATTACHMENT);
    pygobject_register_class(d, "PopplerFormField", POPPLER_TYPE_FORM_FIELD, &PyPopplerFormField_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(POPPLER_TYPE_FORM_FIELD);
    pygobject_register_class(d, "PopplerFontInfo", POPPLER_TYPE_FONT_INFO, &PyPopplerFontInfo_Type, Py_BuildValue("(O)", &PyGObject_Type));
}
