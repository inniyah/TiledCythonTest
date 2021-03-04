/* Generated by Cython 0.29.21 */

#ifndef __PYX_HAVE__graphics
#define __PYX_HAVE__graphics

#include "Python.h"
struct PyRectObject;
struct PyColorObject;
struct PyBlendModeObject;
struct PyImageObject;
struct PyTextureObject;
struct PyRenderStatesObject;
struct PyDrawableObject;
struct PyTransformableDrawableObject;
struct PySpriteObject;
struct PyShapeObject;
struct PyConvexShapeObject;
struct PyRenderTargetObject;

/* "graphics.pyx":65
 * 
 * 
 * cdef public class Rect[type PyRectType, object PyRectObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.Rect[NumericObject] *p_this
 * 
 */
struct PyRectObject {
  PyObject_HEAD
  sf::Rect<NumericObject>  *p_this;
};

/* "graphics.pyx":187
 *     return sf.IntRect(l, t, w, h)
 * 
 * cdef public class Color [type PyColorType, object PyColorObject]:             # <<<<<<<<<<<<<<
 *     BLACK = Color(0, 0, 0)
 *     WHITE = Color(255, 255, 255)
 */
struct PyColorObject {
  PyObject_HEAD
  sf::Color *p_this;
};

/* "graphics.pyx":385
 *     SUBTRACT = sf.blendmode.Subtract
 * 
 * cdef public class BlendMode[type PyBlendModeType, object PyBlendModeObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.BlendMode *p_this
 * 
 */
struct PyBlendModeObject {
  PyObject_HEAD
  sf::BlendMode *p_this;
};

/* "graphics.pyx":465
 * BLEND_NONE = wrap_blendmode(<sf.BlendMode*>&sf.BlendNone)
 * 
 * cdef public class Image[type PyImageType, object PyImageObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.Image *p_this
 * 
 */
struct PyImageObject {
  PyObject_HEAD
  sf::Image *p_this;
};

/* "graphics.pyx":603
 *     PIXELS = sf.texture.Pixels
 * 
 * cdef public class Texture[type PyTextureType, object PyTextureObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.Texture *p_this
 *     cdef bint delete_this
 */
struct PyTextureObject {
  PyObject_HEAD
  sf::Texture *p_this;
  int delete_this;
  PyObject *__weakref__;
};

/* "graphics.pyx":1105
 * 
 * 
 * cdef public class RenderStates[type PyRenderStatesType, object PyRenderStatesObject]:             # <<<<<<<<<<<<<<
 *     DEFAULT = wrap_renderstates(<sf.RenderStates*>&sf.renderstates.Default, False)
 * 
 */
struct PyRenderStatesObject {
  PyObject_HEAD
  sf::RenderStates *p_this;
  int delete_this;
  struct __pyx_obj_8graphics_Transform *m_transform;
  struct PyTextureObject *m_texture;
  struct __pyx_obj_8graphics_Shader *m_shader;
};

/* "graphics.pyx":1185
 *     return r
 * 
 * cdef public class Drawable[type PyDrawableType, object PyDrawableObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.Drawable *p_drawable
 * 
 */
struct PyDrawableObject {
  PyObject_HEAD
  sf::Drawable *p_drawable;
};

/* "graphics.pyx":1268
 *     return r
 * 
 * cdef public class TransformableDrawable(Drawable)[type PyTransformableDrawableType, object PyTransformableDrawableObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.Transformable *p_transformable
 * 
 */
struct PyTransformableDrawableObject {
  struct PyDrawableObject __pyx_base;
  sf::Transformable *p_transformable;
};

/* "graphics.pyx":1332
 * 
 * 
 * cdef public class Sprite(TransformableDrawable)[type PySpriteType, object PySpriteObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.Sprite *p_this
 *     cdef Texture    m_texture
 */
struct PySpriteObject {
  struct PyTransformableDrawableObject __pyx_base;
  sf::Sprite *p_this;
  struct PyTextureObject *m_texture;
};

/* "graphics.pyx":1481
 * 
 * 
 * cdef public class Shape(TransformableDrawable)[type PyShapeType, object PyShapeObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.Shape *p_shape
 *     cdef Texture   m_texture
 */
struct PyShapeObject {
  struct PyTransformableDrawableObject __pyx_base;
  sf::Shape *p_shape;
  struct PyTextureObject *m_texture;
};

/* "graphics.pyx":1589
 *             self.p_this.setPointCount(count)
 * 
 * cdef public class ConvexShape(Shape)[type PyConvexShapeType, object PyConvexShapeObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.ConvexShape *p_this
 * 
 */
struct PyConvexShapeObject {
  struct PyShapeObject __pyx_base;
  sf::ConvexShape *p_this;
};

/* "graphics.pyx":1867
 * 
 * 
 * cdef public class RenderTarget[type PyRenderTargetType, object PyRenderTargetObject]:             # <<<<<<<<<<<<<<
 *     cdef sf.RenderTarget *p_rendertarget
 * 
 */
struct PyRenderTargetObject {
  PyObject_HEAD
  sf::RenderTarget *p_rendertarget;
};

#ifndef __PYX_HAVE_API__graphics

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyRectType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyColorType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyBlendModeType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyImageType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyTextureType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyRenderStatesType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyDrawableType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyTransformableDrawableType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PySpriteType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyShapeType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyConvexShapeType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyRenderTargetType;

#endif /* !__PYX_HAVE_API__graphics */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initgraphics(void);
#else
PyMODINIT_FUNC PyInit_graphics(void);
#endif

#endif /* !__PYX_HAVE__graphics */
