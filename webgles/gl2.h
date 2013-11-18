/****************************************************************
 *
 * Copyright (C) 2013 Alessandro Pignotti <alessandro@leaningtech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 ***************************************************************/

#ifndef _GL2_H_
#define _GL2_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned int	GLenum;
typedef bool	GLboolean;
typedef unsigned int	GLbitfield;
typedef char	GLbyte;
typedef short	GLshort;
typedef int	GLint;
typedef int	GLsizei;
typedef int	GLintptr;
typedef int	GLsizeiptr;
typedef unsigned char	GLubyte;
typedef unsigned short	GLushort;
typedef unsigned int	GLuint;
typedef float	GLfloat;
typedef float	GLclampf;
#define GL_DEPTH_BUFFER_BIT	0x0100
#define GL_STENCIL_BUFFER_BIT	0x0400
#define GL_COLOR_BUFFER_BIT	0x4000
#define GL_POINTS	0x0000
#define GL_LINES	0x0001
#define GL_LINE_LOOP	0x0002
#define GL_LINE_STRIP	0x0003
#define GL_TRIANGLES	0x0004
#define GL_TRIANGLE_STRIP	0x0005
#define GL_TRIANGLE_FAN	0x0006
#define GL_ZERO	0x0000
#define GL_ONE	0x0001
#define GL_SRC_COLOR	0x0300
#define GL_ONE_MINUS_SRC_COLOR	0x0301
#define GL_SRC_ALPHA	0x0302
#define GL_ONE_MINUS_SRC_ALPHA	0x0303
#define GL_DST_ALPHA	0x0304
#define GL_ONE_MINUS_DST_ALPHA	0x0305
#define GL_DST_COLOR	0x0306
#define GL_ONE_MINUS_DST_COLOR	0x0307
#define GL_SRC_ALPHA_SATURATE	0x0308
#define GL_FUNC_ADD	0x8006
#define GL_BLEND_EQUATION	0x8009
#define GL_BLEND_EQUATION_RGB	0x8009
#define GL_BLEND_EQUATION_ALPHA	0x883d
#define GL_FUNC_SUBTRACT	0x800a
#define GL_FUNC_REVERSE_SUBTRACT	0x800b
#define GL_BLEND_DST_RGB	0x80c8
#define GL_BLEND_SRC_RGB	0x80c9
#define GL_BLEND_DST_ALPHA	0x80ca
#define GL_BLEND_SRC_ALPHA	0x80cb
#define GL_CONSTANT_COLOR	0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR	0x8002
#define GL_CONSTANT_ALPHA	0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA	0x8004
#define GL_BLEND_COLOR	0x8005
#define GL_ARRAY_BUFFER	0x8892
#define GL_ELEMENT_ARRAY_BUFFER	0x8893
#define GL_ARRAY_BUFFER_BINDING	0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING	0x8895
#define GL_STREAM_DRAW	0x88e0
#define GL_STATIC_DRAW	0x88e4
#define GL_DYNAMIC_DRAW	0x88e8
#define GL_BUFFER_SIZE	0x8764
#define GL_BUFFER_USAGE	0x8765
#define GL_CURRENT_VERTEX_ATTRIB	0x8626
#define GL_FRONT	0x0404
#define GL_BACK	0x0405
#define GL_FRONT_AND_BACK	0x0408
#define GL_TEXTURE_2D	0x0de1
#define GL_CULL_FACE	0x0b44
#define GL_BLEND	0x0be2
#define GL_DITHER	0x0bd0
#define GL_STENCIL_TEST	0x0b90
#define GL_DEPTH_TEST	0x0b71
#define GL_SCISSOR_TEST	0x0c11
#define GL_POLYGON_OFFSET_FILL	0x8037
#define GL_SAMPLE_ALPHA_TO_COVERAGE	0x809e
#define GL_SAMPLE_COVERAGE	0x80a0
#define GL_NO_ERROR	0x0000
#define GL_INVALID_ENUM	0x0500
#define GL_INVALID_VALUE	0x0501
#define GL_INVALID_OPERATION	0x0502
#define GL_OUT_OF_MEMORY	0x0505
#define GL_CW	0x0900
#define GL_CCW	0x0901
#define GL_LINE_WIDTH	0x0b21
#define GL_ALIASED_POINT_SIZE_RANGE	0x846d
#define GL_ALIASED_LINE_WIDTH_RANGE	0x846e
#define GL_CULL_FACE_MODE	0x0b45
#define GL_FRONT_FACE	0x0b46
#define GL_DEPTH_RANGE	0x0b70
#define GL_DEPTH_WRITEMASK	0x0b72
#define GL_DEPTH_CLEAR_VALUE	0x0b73
#define GL_DEPTH_FUNC	0x0b74
#define GL_STENCIL_CLEAR_VALUE	0x0b91
#define GL_STENCIL_FUNC	0x0b92
#define GL_STENCIL_FAIL	0x0b94
#define GL_STENCIL_PASS_DEPTH_FAIL	0x0b95
#define GL_STENCIL_PASS_DEPTH_PASS	0x0b96
#define GL_STENCIL_REF	0x0b97
#define GL_STENCIL_VALUE_MASK	0x0b93
#define GL_STENCIL_WRITEMASK	0x0b98
#define GL_STENCIL_BACK_FUNC	0x8800
#define GL_STENCIL_BACK_FAIL	0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL	0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS	0x8803
#define GL_STENCIL_BACK_REF	0x8ca3
#define GL_STENCIL_BACK_VALUE_MASK	0x8ca4
#define GL_STENCIL_BACK_WRITEMASK	0x8ca5
#define GL_VIEWPORT	0x0ba2
#define GL_SCISSOR_BOX	0x0c10
#define GL_COLOR_CLEAR_VALUE	0x0c22
#define GL_COLOR_WRITEMASK	0x0c23
#define GL_UNPACK_ALIGNMENT	0x0cf5
#define GL_PACK_ALIGNMENT	0x0d05
#define GL_MAX_TEXTURE_SIZE	0x0d33
#define GL_MAX_VIEWPORT_DIMS	0x0d3a
#define GL_SUBPIXEL_BITS	0x0d50
#define GL_RED_BITS	0x0d52
#define GL_GREEN_BITS	0x0d53
#define GL_BLUE_BITS	0x0d54
#define GL_ALPHA_BITS	0x0d55
#define GL_DEPTH_BITS	0x0d56
#define GL_STENCIL_BITS	0x0d57
#define GL_POLYGON_OFFSET_UNITS	0x2a00
#define GL_POLYGON_OFFSET_FACTOR	0x8038
#define GL_TEXTURE_BINDING_2D	0x8069
#define GL_SAMPLE_BUFFERS	0x80a8
#define GL_SAMPLES	0x80a9
#define GL_SAMPLE_COVERAGE_VALUE	0x80aa
#define GL_SAMPLE_COVERAGE_INVERT	0x80ab
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS	0x86a2
#define GL_COMPRESSED_TEXTURE_FORMATS	0x86a3
#define GL_DONT_CARE	0x1100
#define GL_FASTEST	0x1101
#define GL_NICEST	0x1102
#define GL_GENERATE_MIPMAP_HINT	0x8192
#define GL_BYTE	0x1400
#define GL_UNSIGNED_BYTE	0x1401
#define GL_SHORT	0x1402
#define GL_UNSIGNED_SHORT	0x1403
#define GL_INT	0x1404
#define GL_UNSIGNED_INT	0x1405
#define GL_FLOAT	0x1406
#define GL_DEPTH_COMPONENT	0x1902
#define GL_ALPHA	0x1906
#define GL_RGB	0x1907
#define GL_RGBA	0x1908
#define GL_LUMINANCE	0x1909
#define GL_LUMINANCE_ALPHA	0x190a
#define GL_UNSIGNED_SHORT_4_4_4_4	0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1	0x8034
#define GL_UNSIGNED_SHORT_5_6_5	0x8363
#define GL_FRAGMENT_SHADER	0x8b30
#define GL_VERTEX_SHADER	0x8b31
#define GL_MAX_VERTEX_ATTRIBS	0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS	0x8dfb
#define GL_MAX_VARYING_VECTORS	0x8dfc
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS	0x8b4d
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS	0x8b4c
#define GL_MAX_TEXTURE_IMAGE_UNITS	0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS	0x8dfd
#define GL_SHADER_TYPE	0x8b4f
#define GL_DELETE_STATUS	0x8b80
#define GL_LINK_STATUS	0x8b82
#define GL_VALIDATE_STATUS	0x8b83
#define GL_ATTACHED_SHADERS	0x8b85
#define GL_ACTIVE_UNIFORMS	0x8b86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH	0x8b87
#define GL_ACTIVE_ATTRIBUTES	0x8b89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH	0x8b8a
#define GL_SHADING_LANGUAGE_VERSION	0x8b8c
#define GL_CURRENT_PROGRAM	0x8b8d
#define GL_NEVER	0x0200
#define GL_LESS	0x0201
#define GL_EQUAL	0x0202
#define GL_LEQUAL	0x0203
#define GL_GREATER	0x0204
#define GL_NOTEQUAL	0x0205
#define GL_GEQUAL	0x0206
#define GL_ALWAYS	0x0207
#define GL_KEEP	0x1e00
#define GL_REPLACE	0x1e01
#define GL_INCR	0x1e02
#define GL_DECR	0x1e03
#define GL_INVERT	0x150a
#define GL_INCR_WRAP	0x8507
#define GL_DECR_WRAP	0x8508
#define GL_VENDOR	0x1f00
#define GL_RENDERER	0x1f01
#define GL_VERSION	0x1f02
#define GL_NEAREST	0x2600
#define GL_LINEAR	0x2601
#define GL_NEAREST_MIPMAP_NEAREST	0x2700
#define GL_LINEAR_MIPMAP_NEAREST	0x2701
#define GL_NEAREST_MIPMAP_LINEAR	0x2702
#define GL_LINEAR_MIPMAP_LINEAR	0x2703
#define GL_TEXTURE_MAG_FILTER	0x2800
#define GL_TEXTURE_MIN_FILTER	0x2801
#define GL_TEXTURE_WRAP_S	0x2802
#define GL_TEXTURE_WRAP_T	0x2803
#define GL_TEXTURE	0x1702
#define GL_TEXTURE_CUBE_MAP	0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP	0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X	0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X	0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y	0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y	0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z	0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z	0x851a
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE	0x851c
#define GL_TEXTURE0	0x84c0
#define GL_TEXTURE1	0x84c1
#define GL_TEXTURE2	0x84c2
#define GL_TEXTURE3	0x84c3
#define GL_TEXTURE4	0x84c4
#define GL_TEXTURE5	0x84c5
#define GL_TEXTURE6	0x84c6
#define GL_TEXTURE7	0x84c7
#define GL_TEXTURE8	0x84c8
#define GL_TEXTURE9	0x84c9
#define GL_TEXTURE10	0x84ca
#define GL_TEXTURE11	0x84cb
#define GL_TEXTURE12	0x84cc
#define GL_TEXTURE13	0x84cd
#define GL_TEXTURE14	0x84ce
#define GL_TEXTURE15	0x84cf
#define GL_TEXTURE16	0x84d0
#define GL_TEXTURE17	0x84d1
#define GL_TEXTURE18	0x84d2
#define GL_TEXTURE19	0x84d3
#define GL_TEXTURE20	0x84d4
#define GL_TEXTURE21	0x84d5
#define GL_TEXTURE22	0x84d6
#define GL_TEXTURE23	0x84d7
#define GL_TEXTURE24	0x84d8
#define GL_TEXTURE25	0x84d9
#define GL_TEXTURE26	0x84da
#define GL_TEXTURE27	0x84db
#define GL_TEXTURE28	0x84dc
#define GL_TEXTURE29	0x84dd
#define GL_TEXTURE30	0x84de
#define GL_TEXTURE31	0x84df
#define GL_ACTIVE_TEXTURE	0x84e0
#define GL_REPEAT	0x2901
#define GL_CLAMP_TO_EDGE	0x812f
#define GL_MIRRORED_REPEAT	0x8370
#define GL_FLOAT_VEC2	0x8b50
#define GL_FLOAT_VEC3	0x8b51
#define GL_FLOAT_VEC4	0x8b52
#define GL_INT_VEC2	0x8b53
#define GL_INT_VEC3	0x8b54
#define GL_INT_VEC4	0x8b55
#define GL_BOOL	0x8b56
#define GL_BOOL_VEC2	0x8b57
#define GL_BOOL_VEC3	0x8b58
#define GL_BOOL_VEC4	0x8b59
#define GL_FLOAT_MAT2	0x8b5a
#define GL_FLOAT_MAT3	0x8b5b
#define GL_FLOAT_MAT4	0x8b5c
#define GL_SAMPLER_2D	0x8b5e
#define GL_SAMPLER_CUBE	0x8b60
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED	0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE	0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE	0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE	0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED	0x886a
#define GL_VERTEX_ATTRIB_ARRAY_POINTER	0x8645
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING	0x889f
#define GL_COMPILE_STATUS	0x8b81
#define GL_INFO_LOG_LENGTH	0x8b84
#define GL_SHADER_SOURCE_LENGTH	0x8b88
#define GL_LOW_FLOAT	0x8df0
#define GL_MEDIUM_FLOAT	0x8df1
#define GL_HIGH_FLOAT	0x8df2
#define GL_LOW_INT	0x8df3
#define GL_MEDIUM_INT	0x8df4
#define GL_HIGH_INT	0x8df5
#define GL_FRAMEBUFFER	0x8d40
#define GL_RENDERBUFFER	0x8d41
#define GL_RGBA4	0x8056
#define GL_RGB5_A1	0x8057
#define GL_RGB565	0x8d62
#define GL_DEPTH_COMPONENT16	0x81a5
#define GL_STENCIL_INDEX	0x1901
#define GL_STENCIL_INDEX8	0x8d48
#define GL_DEPTH_STENCIL	0x84f9
#define GL_RENDERBUFFER_WIDTH	0x8d42
#define GL_RENDERBUFFER_HEIGHT	0x8d43
#define GL_RENDERBUFFER_INTERNAL_FORMAT	0x8d44
#define GL_RENDERBUFFER_RED_SIZE	0x8d50
#define GL_RENDERBUFFER_GREEN_SIZE	0x8d51
#define GL_RENDERBUFFER_BLUE_SIZE	0x8d52
#define GL_RENDERBUFFER_ALPHA_SIZE	0x8d53
#define GL_RENDERBUFFER_DEPTH_SIZE	0x8d54
#define GL_RENDERBUFFER_STENCIL_SIZE	0x8d55
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE	0x8cd0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME	0x8cd1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL	0x8cd2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE	0x8cd3
#define GL_COLOR_ATTACHMENT0	0x8ce0
#define GL_DEPTH_ATTACHMENT	0x8d00
#define GL_STENCIL_ATTACHMENT	0x8d20
#define GL_DEPTH_STENCIL_ATTACHMENT	0x821a
#define GL_NONE	0x0000
#define GL_FRAMEBUFFER_COMPLETE	0x8cd5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT	0x8cd6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT	0x8cd7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS	0x8cd9
#define GL_FRAMEBUFFER_UNSUPPORTED	0x8cdd
#define GL_FRAMEBUFFER_BINDING	0x8ca6
#define GL_RENDERBUFFER_BINDING	0x8ca7
#define GL_MAX_RENDERBUFFER_SIZE	0x84e8
#define GL_INVALID_FRAMEBUFFER_OPERATION	0x0506
#define GL_UNPACK_FLIP_Y_WEBGL	0x9240
#define GL_UNPACK_PREMULTIPLY_ALPHA_WEBGL	0x9241
#define GL_CONTEXT_LOST_WEBGL	0x9242
#define GL_UNPACK_COLORSPACE_CONVERSION_WEBGL	0x9243
#define GL_BROWSER_DEFAULT_WEBGL	0x9244
void glActiveTexture(unsigned int texture);
void glAttachShader(unsigned int program, unsigned int shader);
void glBindAttribLocation(unsigned int program, unsigned int index, const char* name);
void glBindBuffer(unsigned int target, unsigned int buffer);
void glBindFramebuffer(unsigned int target, unsigned int framebuffer);
void glBindRenderbuffer(unsigned int target, unsigned int renderbuffer);
void glBindTexture(unsigned int target, unsigned int texture);
void glBlendColor(float red, float green, float blue, float alpha);
void glBlendEquation(unsigned int mode);
void glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha);
void glBlendFunc(unsigned int sfactor, unsigned int dfactor);
void glBlendFuncSeparate(unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha);
void glBufferData (GLenum target, GLsizeiptr size, const void* data, GLenum usage);
void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
unsigned int glCheckFramebufferStatus(unsigned int target);
void glClear(unsigned int mask);
void glClearColor(float red, float green, float blue, float alpha);
void glClearDepth(float depth);
void glClearStencil(int s);
void glColorMask(bool red, bool green, bool blue, bool alpha);
void glCompileShader(unsigned int shader);
void glCopyTexImage2D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border);
void glCopyTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height);
void glGenBuffers (GLsizei n, GLuint* objs);
void glGenFramebuffers (GLsizei n, GLuint* objs);
GLuint glCreateProgram ();
void glGenRenderbuffers (GLsizei n, GLuint* objs);
GLuint glCreateShader (GLenum shaderType);
void glGenTextures (GLsizei n, GLuint* objs);
void glCullFace(unsigned int mode);
void glDeleteBuffers (GLsizei n, GLuint* objs);
void glDeleteFramebuffers (GLsizei n, GLuint* objs);
void glDeleteProgram(unsigned int program);
void glDeleteRenderbuffers (GLsizei n, GLuint* objs);
void glDeleteShader(unsigned int shader);
void glDeleteTextures (GLsizei n, GLuint* objs);
void glDepthFunc(unsigned int func);
void glDepthMask(bool flag);
void glDepthRange(float zNear, float zFar);
void glDetachShader(unsigned int program, unsigned int shader);
void glDisable(unsigned int cap);
void glDisableVertexAttribArray(unsigned int index);
void glDrawArrays(unsigned int mode, int first, int count);
void glDrawElements(unsigned int mode, int count, unsigned int type, int offset);
void glEnable(unsigned int cap);
void glEnableVertexAttribArray(unsigned int index);
void glFinish();
void glFlush();
void glFramebufferRenderbuffer(unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer);
void glFramebufferTexture2D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level);
void glFrontFace(unsigned int mode);
void glGenerateMipmap(unsigned int target);
int glGetAttribLocation(unsigned int program, const char* name);
unsigned int glGetError();
GLint glGetUniformLocation (GLuint program, const char* name);
int glGetVertexAttribOffset(unsigned int index, unsigned int pname);
void glHint(unsigned int target, unsigned int mode);
bool glIsBuffer(unsigned int buffer);
bool glIsEnabled(unsigned int cap);
bool glIsFramebuffer(unsigned int framebuffer);
bool glIsProgram(unsigned int program);
bool glIsRenderbuffer(unsigned int renderbuffer);
bool glIsShader(unsigned int shader);
bool glIsTexture(unsigned int texture);
void glLineWidth(float width);
void glLinkProgram(unsigned int program);
void glPixelStorei(unsigned int pname, int param);
void glPolygonOffset(float factor, float units);
void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* data);
void glRenderbufferStorage(unsigned int target, unsigned int internalformat, int width, int height);
void glSampleCoverage(float value, bool invert);
void glScissor(int x, int y, int width, int height);
void glShaderSource (GLuint shader, GLsizei count, const char* const *string, const GLint* length);
void glStencilFunc(unsigned int func, int ref, unsigned int mask);
void glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask);
void glStencilMask(unsigned int mask);
void glStencilMaskSeparate(unsigned int face, unsigned int mask);
void glStencilOp(unsigned int fail, unsigned int zfail, unsigned int zpass);
void glStencilOpSeparate(unsigned int face, unsigned int fail, unsigned int zfail, unsigned int zpass);
void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* data);
void glTexParameterf(unsigned int target, unsigned int pname, float param);
void glTexParameteri(unsigned int target, unsigned int pname, int param);
void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* data);
void glUniform1f(unsigned int location, float x);
void glUniform1fv (GLint location, GLsizei count, const GLfloat* value);
void glUniform1i(unsigned int location, int x);
void glUniform1iv (GLint location, GLsizei count, const GLint* value);
void glUniform2f(unsigned int location, float x, float y);
void glUniform2fv (GLint location, GLsizei count, const GLfloat* value);
void glUniform2i(unsigned int location, int x, int y);
void glUniform2iv (GLint location, GLsizei count, const GLint* value);
void glUniform3f(unsigned int location, float x, float y, float z);
void glUniform3fv (GLint location, GLsizei count, const GLfloat* value);
void glUniform3i(unsigned int location, int x, int y, int z);
void glUniform3iv (GLint location, GLsizei count, const GLint* value);
void glUniform4f(unsigned int location, float x, float y, float z, float w);
void glUniform4fv (GLint location, GLsizei count, const GLfloat* value);
void glUniform4i(unsigned int location, int x, int y, int z, int w);
void glUniform4iv (GLint location, GLsizei count, const GLint* value);
void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
void glUseProgram(unsigned int program);
void glValidateProgram(unsigned int program);
void glVertexAttrib1f(unsigned int indx, float x);
void glVertexAttrib1fv (GLuint index, const GLfloat* v);
void glVertexAttrib2f(unsigned int indx, float x, float y);
void glVertexAttrib2fv (GLuint index, const GLfloat* v);
void glVertexAttrib3f(unsigned int indx, float x, float y, float z);
void glVertexAttrib3fv (GLuint index, const GLfloat* v);
void glVertexAttrib4f(unsigned int indx, float x, float y, float z, float w);
void glVertexAttrib4fv (GLuint index, const GLfloat* v);
void glVertexAttribPointer(unsigned int indx, int size, unsigned int type, bool normalized, int stride, int offset);
void glViewport(int x, int y, int width, int height);
#ifdef __cplusplus
}
#endif
#endif