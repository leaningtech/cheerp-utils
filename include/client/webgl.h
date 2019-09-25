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

#ifndef __CHEERP_WEBGL
#define __CHEERP_WEBGL

#include <cheerp/types.h>

namespace [[cheerp::genericjs]] client
{

class WebGLObject : public Object
{
public: 

};

class WebGLBuffer : public WebGLObject
{
public: 

};

class WebGLFramebuffer : public WebGLObject
{
public: 

};

class WebGLProgram : public WebGLObject
{
public: 

};

class WebGLRenderbuffer : public WebGLObject
{
public: 

};

class WebGLShader : public WebGLObject
{
public: 

};

class WebGLTexture : public WebGLObject
{
public: 

};

class WebGLUniformLocation : public Object
{
public: 

};

class WebGLActiveInfo : public Object
{
public: 
    double get_size();
    void set_size(double);
    double get_type();
    void set_type(double);
    String* get_name();
};

class WebGLShaderPrecisionFormat : public Object
{
public: 
    double get_rangeMin();
    void set_rangeMin(double);
    double get_rangeMax();
    void set_rangeMax(double);
    double get_precision();
    void set_precision(double);

};

class WebGLContextAttributes: public Object
{
public: 
    bool get_alpha();
    void set_alpha(bool);
    bool get_depth();
    void set_depth(bool);
    bool get_stencil();
    void set_stencil(bool);
    bool get_antialias();
    void set_antialias(bool);
    bool get_premultipliedAlpha();
    void set_premultipliedAlpha(bool);
    bool get_preserveDrawingBuffer();
    void set_preserveDrawingBuffer(bool);

};

class WebGLRenderingContext: public Object
{
public: 
    int get_DEPTH_BUFFER_BIT();
    int get_STENCIL_BUFFER_BIT();
    int get_COLOR_BUFFER_BIT();
    double get_POINTS();
    void set_POINTS(double);
    double get_LINES();
    void set_LINES(double);
    double get_LINE_LOOP();
    void set_LINE_LOOP(double);
    double get_LINE_STRIP();
    void set_LINE_STRIP(double);
    double get_TRIANGLES();
    void set_TRIANGLES(double);
    double get_TRIANGLE_STRIP();
    void set_TRIANGLE_STRIP(double);
    double get_TRIANGLE_FAN();
    void set_TRIANGLE_FAN(double);
    double get_ZERO();
    void set_ZERO(double);
    double get_ONE();
    void set_ONE(double);
    double get_SRC_COLOR();
    void set_SRC_COLOR(double);
    double get_ONE_MINUS_SRC_COLOR();
    void set_ONE_MINUS_SRC_COLOR(double);
    double get_SRC_ALPHA();
    void set_SRC_ALPHA(double);
    double get_ONE_MINUS_SRC_ALPHA();
    void set_ONE_MINUS_SRC_ALPHA(double);
    double get_DST_ALPHA();
    void set_DST_ALPHA(double);
    double get_ONE_MINUS_DST_ALPHA();
    void set_ONE_MINUS_DST_ALPHA(double);
    double get_DST_COLOR();
    void set_DST_COLOR(double);
    double get_ONE_MINUS_DST_COLOR();
    void set_ONE_MINUS_DST_COLOR(double);
    double get_SRC_ALPHA_SATURATE();
    void set_SRC_ALPHA_SATURATE(double);
    double get_FUNC_ADD();
    void set_FUNC_ADD(double);
    double get_BLEND_EQUATION();
    void set_BLEND_EQUATION(double);
    double get_BLEND_EQUATION_RGB();
    void set_BLEND_EQUATION_RGB(double);
    double get_BLEND_EQUATION_ALPHA();
    void set_BLEND_EQUATION_ALPHA(double);
    double get_FUNC_SUBTRACT();
    void set_FUNC_SUBTRACT(double);
    double get_FUNC_REVERSE_SUBTRACT();
    void set_FUNC_REVERSE_SUBTRACT(double);
    double get_BLEND_DST_RGB();
    void set_BLEND_DST_RGB(double);
    double get_BLEND_SRC_RGB();
    void set_BLEND_SRC_RGB(double);
    double get_BLEND_DST_ALPHA();
    void set_BLEND_DST_ALPHA(double);
    double get_BLEND_SRC_ALPHA();
    void set_BLEND_SRC_ALPHA(double);
    double get_CONSTANT_COLOR();
    void set_CONSTANT_COLOR(double);
    double get_ONE_MINUS_CONSTANT_COLOR();
    void set_ONE_MINUS_CONSTANT_COLOR(double);
    double get_CONSTANT_ALPHA();
    void set_CONSTANT_ALPHA(double);
    double get_ONE_MINUS_CONSTANT_ALPHA();
    void set_ONE_MINUS_CONSTANT_ALPHA(double);
    double get_BLEND_COLOR();
    void set_BLEND_COLOR(double);
    double get_ARRAY_BUFFER();
    void set_ARRAY_BUFFER(double);
    double get_ELEMENT_ARRAY_BUFFER();
    void set_ELEMENT_ARRAY_BUFFER(double);
    double get_ARRAY_BUFFER_BINDING();
    void set_ARRAY_BUFFER_BINDING(double);
    double get_ELEMENT_ARRAY_BUFFER_BINDING();
    void set_ELEMENT_ARRAY_BUFFER_BINDING(double);
    double get_STREAM_DRAW();
    void set_STREAM_DRAW(double);
    double get_STATIC_DRAW();
    void set_STATIC_DRAW(double);
    double get_DYNAMIC_DRAW();
    void set_DYNAMIC_DRAW(double);
    double get_BUFFER_SIZE();
    void set_BUFFER_SIZE(double);
    double get_BUFFER_USAGE();
    void set_BUFFER_USAGE(double);
    double get_CURRENT_VERTEX_ATTRIB();
    void set_CURRENT_VERTEX_ATTRIB(double);
    double get_FRONT();
    void set_FRONT(double);
    double get_BACK();
    void set_BACK(double);
    double get_FRONT_AND_BACK();
    void set_FRONT_AND_BACK(double);
    double get_CULL_FACE();
    void set_CULL_FACE(double);
    double get_BLEND();
    void set_BLEND(double);
    double get_DITHER();
    void set_DITHER(double);
    double get_STENCIL_TEST();
    void set_STENCIL_TEST(double);
    double get_DEPTH_TEST();
    void set_DEPTH_TEST(double);
    double get_SCISSOR_TEST();
    void set_SCISSOR_TEST(double);
    double get_POLYGON_OFFSET_FILL();
    void set_POLYGON_OFFSET_FILL(double);
    double get_SAMPLE_ALPHA_TO_COVERAGE();
    void set_SAMPLE_ALPHA_TO_COVERAGE(double);
    double get_SAMPLE_COVERAGE();
    void set_SAMPLE_COVERAGE(double);
    double get_NO_ERROR();
    void set_NO_ERROR(double);
    double get_INVALID_ENUM();
    void set_INVALID_ENUM(double);
    double get_INVALID_VALUE();
    void set_INVALID_VALUE(double);
    double get_INVALID_OPERATION();
    void set_INVALID_OPERATION(double);
    double get_OUT_OF_MEMORY();
    void set_OUT_OF_MEMORY(double);
    double get_CW();
    void set_CW(double);
    double get_CCW();
    void set_CCW(double);
    double get_LINE_WIDTH();
    void set_LINE_WIDTH(double);
    double get_ALIASED_POINT_SIZE_RANGE();
    void set_ALIASED_POINT_SIZE_RANGE(double);
    double get_ALIASED_LINE_WIDTH_RANGE();
    void set_ALIASED_LINE_WIDTH_RANGE(double);
    double get_CULL_FACE_MODE();
    void set_CULL_FACE_MODE(double);
    double get_FRONT_FACE();
    void set_FRONT_FACE(double);
    double get_DEPTH_RANGE();
    void set_DEPTH_RANGE(double);
    double get_DEPTH_WRITEMASK();
    void set_DEPTH_WRITEMASK(double);
    double get_DEPTH_CLEAR_VALUE();
    void set_DEPTH_CLEAR_VALUE(double);
    double get_DEPTH_FUNC();
    void set_DEPTH_FUNC(double);
    double get_STENCIL_CLEAR_VALUE();
    void set_STENCIL_CLEAR_VALUE(double);
    double get_STENCIL_FUNC();
    void set_STENCIL_FUNC(double);
    double get_STENCIL_FAIL();
    void set_STENCIL_FAIL(double);
    double get_STENCIL_PASS_DEPTH_FAIL();
    void set_STENCIL_PASS_DEPTH_FAIL(double);
    double get_STENCIL_PASS_DEPTH_PASS();
    void set_STENCIL_PASS_DEPTH_PASS(double);
    double get_STENCIL_REF();
    void set_STENCIL_REF(double);
    double get_STENCIL_VALUE_MASK();
    void set_STENCIL_VALUE_MASK(double);
    double get_STENCIL_WRITEMASK();
    void set_STENCIL_WRITEMASK(double);
    double get_STENCIL_BACK_FUNC();
    void set_STENCIL_BACK_FUNC(double);
    double get_STENCIL_BACK_FAIL();
    void set_STENCIL_BACK_FAIL(double);
    double get_STENCIL_BACK_PASS_DEPTH_FAIL();
    void set_STENCIL_BACK_PASS_DEPTH_FAIL(double);
    double get_STENCIL_BACK_PASS_DEPTH_PASS();
    void set_STENCIL_BACK_PASS_DEPTH_PASS(double);
    double get_STENCIL_BACK_REF();
    void set_STENCIL_BACK_REF(double);
    double get_STENCIL_BACK_VALUE_MASK();
    void set_STENCIL_BACK_VALUE_MASK(double);
    double get_STENCIL_BACK_WRITEMASK();
    void set_STENCIL_BACK_WRITEMASK(double);
    double get_VIEWPORT();
    void set_VIEWPORT(double);
    double get_SCISSOR_BOX();
    void set_SCISSOR_BOX(double);
    double get_COLOR_CLEAR_VALUE();
    void set_COLOR_CLEAR_VALUE(double);
    double get_COLOR_WRITEMASK();
    void set_COLOR_WRITEMASK(double);
    double get_UNPACK_ALIGNMENT();
    void set_UNPACK_ALIGNMENT(double);
    double get_PACK_ALIGNMENT();
    void set_PACK_ALIGNMENT(double);
    double get_MAX_TEXTURE_SIZE();
    void set_MAX_TEXTURE_SIZE(double);
    double get_MAX_VIEWPORT_DIMS();
    void set_MAX_VIEWPORT_DIMS(double);
    double get_SUBPIXEL_BITS();
    void set_SUBPIXEL_BITS(double);
    double get_RED_BITS();
    void set_RED_BITS(double);
    double get_GREEN_BITS();
    void set_GREEN_BITS(double);
    double get_BLUE_BITS();
    void set_BLUE_BITS(double);
    double get_ALPHA_BITS();
    void set_ALPHA_BITS(double);
    double get_DEPTH_BITS();
    void set_DEPTH_BITS(double);
    double get_STENCIL_BITS();
    void set_STENCIL_BITS(double);
    double get_POLYGON_OFFSET_UNITS();
    void set_POLYGON_OFFSET_UNITS(double);
    double get_POLYGON_OFFSET_FACTOR();
    void set_POLYGON_OFFSET_FACTOR(double);
    double get_TEXTURE_BINDING_2D();
    void set_TEXTURE_BINDING_2D(double);
    double get_SAMPLE_BUFFERS();
    void set_SAMPLE_BUFFERS(double);
    double get_SAMPLES();
    void set_SAMPLES(double);
    double get_SAMPLE_COVERAGE_VALUE();
    void set_SAMPLE_COVERAGE_VALUE(double);
    double get_SAMPLE_COVERAGE_INVERT();
    void set_SAMPLE_COVERAGE_INVERT(double);
    double get_COMPRESSED_TEXTURE_FORMATS();
    void set_COMPRESSED_TEXTURE_FORMATS(double);
    double get_DONT_CARE();
    void set_DONT_CARE(double);
    double get_FASTEST();
    void set_FASTEST(double);
    double get_NICEST();
    void set_NICEST(double);
    double get_GENERATE_MIPMAP_HINT();
    void set_GENERATE_MIPMAP_HINT(double);
    double get_BYTE();
    void set_BYTE(double);
    double get_UNSIGNED_BYTE();
    void set_UNSIGNED_BYTE(double);
    double get_SHORT();
    void set_SHORT(double);
    double get_UNSIGNED_SHORT();
    void set_UNSIGNED_SHORT(double);
    double get_INT();
    void set_INT(double);
    double get_UNSIGNED_INT();
    void set_UNSIGNED_INT(double);
    double get_FLOAT();
    void set_FLOAT(double);
    double get_DEPTH_COMPONENT();
    void set_DEPTH_COMPONENT(double);
    double get_ALPHA();
    void set_ALPHA(double);
    double get_RGB();
    void set_RGB(double);
    double get_RGBA();
    void set_RGBA(double);
    double get_LUMINANCE();
    void set_LUMINANCE(double);
    double get_LUMINANCE_ALPHA();
    void set_LUMINANCE_ALPHA(double);
    double get_UNSIGNED_SHORT_4_4_4_4();
    void set_UNSIGNED_SHORT_4_4_4_4(double);
    double get_UNSIGNED_SHORT_5_5_5_1();
    void set_UNSIGNED_SHORT_5_5_5_1(double);
    double get_UNSIGNED_SHORT_5_6_5();
    void set_UNSIGNED_SHORT_5_6_5(double);
    double get_FRAGMENT_SHADER();
    void set_FRAGMENT_SHADER(double);
    double get_VERTEX_SHADER();
    void set_VERTEX_SHADER(double);
    double get_MAX_VERTEX_ATTRIBS();
    void set_MAX_VERTEX_ATTRIBS(double);
    double get_MAX_VERTEX_UNIFORM_VECTORS();
    void set_MAX_VERTEX_UNIFORM_VECTORS(double);
    double get_MAX_VARYING_VECTORS();
    void set_MAX_VARYING_VECTORS(double);
    double get_MAX_COMBINED_TEXTURE_IMAGE_UNITS();
    void set_MAX_COMBINED_TEXTURE_IMAGE_UNITS(double);
    double get_MAX_VERTEX_TEXTURE_IMAGE_UNITS();
    void set_MAX_VERTEX_TEXTURE_IMAGE_UNITS(double);
    double get_MAX_TEXTURE_IMAGE_UNITS();
    void set_MAX_TEXTURE_IMAGE_UNITS(double);
    double get_MAX_FRAGMENT_UNIFORM_VECTORS();
    void set_MAX_FRAGMENT_UNIFORM_VECTORS(double);
    double get_SHADER_TYPE();
    void set_SHADER_TYPE(double);
    double get_DELETE_STATUS();
    void set_DELETE_STATUS(double);
    double get_LINK_STATUS();
    void set_LINK_STATUS(double);
    double get_VALIDATE_STATUS();
    void set_VALIDATE_STATUS(double);
    double get_ATTACHED_SHADERS();
    void set_ATTACHED_SHADERS(double);
    double get_ACTIVE_UNIFORMS();
    void set_ACTIVE_UNIFORMS(double);
    double get_ACTIVE_ATTRIBUTES();
    void set_ACTIVE_ATTRIBUTES(double);
    double get_SHADING_LANGUAGE_VERSION();
    void set_SHADING_LANGUAGE_VERSION(double);
    double get_CURRENT_PROGRAM();
    void set_CURRENT_PROGRAM(double);
    double get_NEVER();
    void set_NEVER(double);
    double get_LESS();
    void set_LESS(double);
    double get_EQUAL();
    void set_EQUAL(double);
    double get_LEQUAL();
    void set_LEQUAL(double);
    double get_GREATER();
    void set_GREATER(double);
    double get_NOTEQUAL();
    void set_NOTEQUAL(double);
    double get_GEQUAL();
    void set_GEQUAL(double);
    double get_ALWAYS();
    void set_ALWAYS(double);
    double get_KEEP();
    void set_KEEP(double);
    double get_REPLACE();
    void set_REPLACE(double);
    double get_INCR();
    void set_INCR(double);
    double get_DECR();
    void set_DECR(double);
    double get_INVERT();
    void set_INVERT(double);
    double get_INCR_WRAP();
    void set_INCR_WRAP(double);
    double get_DECR_WRAP();
    void set_DECR_WRAP(double);
    double get_VENDOR();
    void set_VENDOR(double);
    double get_RENDERER();
    void set_RENDERER(double);
    double get_VERSION();
    void set_VERSION(double);
    double get_NEAREST();
    void set_NEAREST(double);
    double get_LINEAR();
    void set_LINEAR(double);
    double get_NEAREST_MIPMAP_NEAREST();
    void set_NEAREST_MIPMAP_NEAREST(double);
    double get_LINEAR_MIPMAP_NEAREST();
    void set_LINEAR_MIPMAP_NEAREST(double);
    double get_NEAREST_MIPMAP_LINEAR();
    void set_NEAREST_MIPMAP_LINEAR(double);
    double get_LINEAR_MIPMAP_LINEAR();
    void set_LINEAR_MIPMAP_LINEAR(double);
    double get_TEXTURE_MAG_FILTER();
    void set_TEXTURE_MAG_FILTER(double);
    double get_TEXTURE_MIN_FILTER();
    void set_TEXTURE_MIN_FILTER(double);
    double get_TEXTURE_WRAP_S();
    void set_TEXTURE_WRAP_S(double);
    double get_TEXTURE_WRAP_T();
    void set_TEXTURE_WRAP_T(double);
    double get_TEXTURE_2D();
    void set_TEXTURE_2D(double);
    double get_TEXTURE();
    void set_TEXTURE(double);
    double get_TEXTURE_CUBE_MAP();
    void set_TEXTURE_CUBE_MAP(double);
    double get_TEXTURE_BINDING_CUBE_MAP();
    void set_TEXTURE_BINDING_CUBE_MAP(double);
    double get_TEXTURE_CUBE_MAP_POSITIVE_X();
    void set_TEXTURE_CUBE_MAP_POSITIVE_X(double);
    double get_TEXTURE_CUBE_MAP_NEGATIVE_X();
    void set_TEXTURE_CUBE_MAP_NEGATIVE_X(double);
    double get_TEXTURE_CUBE_MAP_POSITIVE_Y();
    void set_TEXTURE_CUBE_MAP_POSITIVE_Y(double);
    double get_TEXTURE_CUBE_MAP_NEGATIVE_Y();
    void set_TEXTURE_CUBE_MAP_NEGATIVE_Y(double);
    double get_TEXTURE_CUBE_MAP_POSITIVE_Z();
    void set_TEXTURE_CUBE_MAP_POSITIVE_Z(double);
    double get_TEXTURE_CUBE_MAP_NEGATIVE_Z();
    void set_TEXTURE_CUBE_MAP_NEGATIVE_Z(double);
    double get_MAX_CUBE_MAP_TEXTURE_SIZE();
    void set_MAX_CUBE_MAP_TEXTURE_SIZE(double);
    double get_TEXTURE0();
    void set_TEXTURE0(double);
    double get_TEXTURE1();
    void set_TEXTURE1(double);
    double get_TEXTURE2();
    void set_TEXTURE2(double);
    double get_TEXTURE3();
    void set_TEXTURE3(double);
    double get_TEXTURE4();
    void set_TEXTURE4(double);
    double get_TEXTURE5();
    void set_TEXTURE5(double);
    double get_TEXTURE6();
    void set_TEXTURE6(double);
    double get_TEXTURE7();
    void set_TEXTURE7(double);
    double get_TEXTURE8();
    void set_TEXTURE8(double);
    double get_TEXTURE9();
    void set_TEXTURE9(double);
    double get_TEXTURE10();
    void set_TEXTURE10(double);
    double get_TEXTURE11();
    void set_TEXTURE11(double);
    double get_TEXTURE12();
    void set_TEXTURE12(double);
    double get_TEXTURE13();
    void set_TEXTURE13(double);
    double get_TEXTURE14();
    void set_TEXTURE14(double);
    double get_TEXTURE15();
    void set_TEXTURE15(double);
    double get_TEXTURE16();
    void set_TEXTURE16(double);
    double get_TEXTURE17();
    void set_TEXTURE17(double);
    double get_TEXTURE18();
    void set_TEXTURE18(double);
    double get_TEXTURE19();
    void set_TEXTURE19(double);
    double get_TEXTURE20();
    void set_TEXTURE20(double);
    double get_TEXTURE21();
    void set_TEXTURE21(double);
    double get_TEXTURE22();
    void set_TEXTURE22(double);
    double get_TEXTURE23();
    void set_TEXTURE23(double);
    double get_TEXTURE24();
    void set_TEXTURE24(double);
    double get_TEXTURE25();
    void set_TEXTURE25(double);
    double get_TEXTURE26();
    void set_TEXTURE26(double);
    double get_TEXTURE27();
    void set_TEXTURE27(double);
    double get_TEXTURE28();
    void set_TEXTURE28(double);
    double get_TEXTURE29();
    void set_TEXTURE29(double);
    double get_TEXTURE30();
    void set_TEXTURE30(double);
    double get_TEXTURE31();
    void set_TEXTURE31(double);
    double get_ACTIVE_TEXTURE();
    void set_ACTIVE_TEXTURE(double);
    double get_REPEAT();
    void set_REPEAT(double);
    double get_CLAMP_TO_EDGE();
    void set_CLAMP_TO_EDGE(double);
    double get_MIRRORED_REPEAT();
    void set_MIRRORED_REPEAT(double);
    double get_FLOAT_VEC2();
    void set_FLOAT_VEC2(double);
    double get_FLOAT_VEC3();
    void set_FLOAT_VEC3(double);
    double get_FLOAT_VEC4();
    void set_FLOAT_VEC4(double);
    double get_INT_VEC2();
    void set_INT_VEC2(double);
    double get_INT_VEC3();
    void set_INT_VEC3(double);
    double get_INT_VEC4();
    void set_INT_VEC4(double);
    double get_BOOL();
    void set_BOOL(double);
    double get_BOOL_VEC2();
    void set_BOOL_VEC2(double);
    double get_BOOL_VEC3();
    void set_BOOL_VEC3(double);
    double get_BOOL_VEC4();
    void set_BOOL_VEC4(double);
    double get_FLOAT_MAT2();
    void set_FLOAT_MAT2(double);
    double get_FLOAT_MAT3();
    void set_FLOAT_MAT3(double);
    double get_FLOAT_MAT4();
    void set_FLOAT_MAT4(double);
    double get_SAMPLER_2D();
    void set_SAMPLER_2D(double);
    double get_SAMPLER_CUBE();
    void set_SAMPLER_CUBE(double);
    double get_VERTEX_ATTRIB_ARRAY_ENABLED();
    void set_VERTEX_ATTRIB_ARRAY_ENABLED(double);
    double get_VERTEX_ATTRIB_ARRAY_SIZE();
    void set_VERTEX_ATTRIB_ARRAY_SIZE(double);
    double get_VERTEX_ATTRIB_ARRAY_STRIDE();
    void set_VERTEX_ATTRIB_ARRAY_STRIDE(double);
    double get_VERTEX_ATTRIB_ARRAY_TYPE();
    void set_VERTEX_ATTRIB_ARRAY_TYPE(double);
    double get_VERTEX_ATTRIB_ARRAY_NORMALIZED();
    void set_VERTEX_ATTRIB_ARRAY_NORMALIZED(double);
    double get_VERTEX_ATTRIB_ARRAY_POINTER();
    void set_VERTEX_ATTRIB_ARRAY_POINTER(double);
    double get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING();
    void set_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING(double);
    double get_COMPILE_STATUS();
    void set_COMPILE_STATUS(double);
    double get_LOW_FLOAT();
    void set_LOW_FLOAT(double);
    double get_MEDIUM_FLOAT();
    void set_MEDIUM_FLOAT(double);
    double get_HIGH_FLOAT();
    void set_HIGH_FLOAT(double);
    double get_LOW_INT();
    void set_LOW_INT(double);
    double get_MEDIUM_INT();
    void set_MEDIUM_INT(double);
    double get_HIGH_INT();
    void set_HIGH_INT(double);
    double get_FRAMEBUFFER();
    void set_FRAMEBUFFER(double);
    double get_RENDERBUFFER();
    void set_RENDERBUFFER(double);
    double get_RGBA4();
    void set_RGBA4(double);
    double get_RGB5_A1();
    void set_RGB5_A1(double);
    double get_RGB565();
    void set_RGB565(double);
    double get_DEPTH_COMPONENT16();
    void set_DEPTH_COMPONENT16(double);
    double get_STENCIL_INDEX();
    void set_STENCIL_INDEX(double);
    double get_STENCIL_INDEX8();
    void set_STENCIL_INDEX8(double);
    double get_DEPTH_STENCIL();
    void set_DEPTH_STENCIL(double);
    double get_RENDERBUFFER_WIDTH();
    void set_RENDERBUFFER_WIDTH(double);
    double get_RENDERBUFFER_HEIGHT();
    void set_RENDERBUFFER_HEIGHT(double);
    double get_RENDERBUFFER_INTERNAL_FORMAT();
    void set_RENDERBUFFER_INTERNAL_FORMAT(double);
    double get_RENDERBUFFER_RED_SIZE();
    void set_RENDERBUFFER_RED_SIZE(double);
    double get_RENDERBUFFER_GREEN_SIZE();
    void set_RENDERBUFFER_GREEN_SIZE(double);
    double get_RENDERBUFFER_BLUE_SIZE();
    void set_RENDERBUFFER_BLUE_SIZE(double);
    double get_RENDERBUFFER_ALPHA_SIZE();
    void set_RENDERBUFFER_ALPHA_SIZE(double);
    double get_RENDERBUFFER_DEPTH_SIZE();
    void set_RENDERBUFFER_DEPTH_SIZE(double);
    double get_RENDERBUFFER_STENCIL_SIZE();
    void set_RENDERBUFFER_STENCIL_SIZE(double);
    double get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE();
    void set_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE(double);
    double get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME();
    void set_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME(double);
    double get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL();
    void set_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL(double);
    double get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE();
    void set_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE(double);
    double get_COLOR_ATTACHMENT0();
    void set_COLOR_ATTACHMENT0(double);
    double get_DEPTH_ATTACHMENT();
    void set_DEPTH_ATTACHMENT(double);
    double get_STENCIL_ATTACHMENT();
    void set_STENCIL_ATTACHMENT(double);
    double get_DEPTH_STENCIL_ATTACHMENT();
    void set_DEPTH_STENCIL_ATTACHMENT(double);
    double get_NONE();
    void set_NONE(double);
    double get_FRAMEBUFFER_COMPLETE();
    void set_FRAMEBUFFER_COMPLETE(double);
    double get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT();
    void set_FRAMEBUFFER_INCOMPLETE_ATTACHMENT(double);
    double get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT();
    void set_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT(double);
    double get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS();
    void set_FRAMEBUFFER_INCOMPLETE_DIMENSIONS(double);
    double get_FRAMEBUFFER_UNSUPPORTED();
    void set_FRAMEBUFFER_UNSUPPORTED(double);
    double get_FRAMEBUFFER_BINDING();
    void set_FRAMEBUFFER_BINDING(double);
    double get_RENDERBUFFER_BINDING();
    void set_RENDERBUFFER_BINDING(double);
    double get_MAX_RENDERBUFFER_SIZE();
    void set_MAX_RENDERBUFFER_SIZE(double);
    double get_INVALID_FRAMEBUFFER_OPERATION();
    void set_INVALID_FRAMEBUFFER_OPERATION(double);
    double get_UNPACK_FLIP_Y_WEBGL();
    void set_UNPACK_FLIP_Y_WEBGL(double);
    double get_UNPACK_PREMULTIPLY_ALPHA_WEBGL();
    void set_UNPACK_PREMULTIPLY_ALPHA_WEBGL(double);
    double get_CONTEXT_LOST_WEBGL();
    void set_CONTEXT_LOST_WEBGL(double);
    double get_UNPACK_COLORSPACE_CONVERSION_WEBGL();
    void set_UNPACK_COLORSPACE_CONVERSION_WEBGL(double);
    double get_BROWSER_DEFAULT_WEBGL();
    void set_BROWSER_DEFAULT_WEBGL(double);
    HTMLCanvasElement* get_canvas();
    void set_canvas(HTMLCanvasElement*);
    double get_drawingBufferWidth();
    void set_drawingBufferWidth(double);
    double get_drawingBufferHeight();
    void set_drawingBufferHeight(double);
    WebGLContextAttributes* getContextAttributes();
    bool isContextLost();
    const TArray<String>* getSupportedExtensions();
    Object* getExtension(const String&);
    void activeTexture(double);
    void attachShader(WebGLProgram*, WebGLShader*);
    void bindAttribLocation(WebGLProgram*, double, const String&);
    void bindBuffer(double, WebGLBuffer*);
    void bindFramebuffer(double, WebGLFramebuffer*);
    void bindRenderbuffer(double, WebGLRenderbuffer*);
    void bindTexture(double, WebGLTexture*);
    void blendColor(double, double, double, double);
    void blendEquation(double);
    void blendEquationSeparate(double, double);
    void blendFunc(double, double);
    void blendFuncSeparate(double, double, double, double);
    void bufferData(double, double, double);
    void bufferData(double, const ArrayBufferView*, double);
    //void bufferData(double, ArrayBuffer*, double);
    void bufferSubData(double, double, const ArrayBufferView*);
    //void bufferSubData(double, double, ArrayBuffer*);
    double checkFramebufferStatus(double);
    void clear(double);
    void clearColor(double, double, double, double);
    void clearDepth(double);
    void clearStencil(double);
    void colorMask(bool, bool, bool, bool);
    void compileShader(WebGLShader*);
    //void compressedTexImage2D(double, double, double, double, double, double, ArrayBufferView*);
    //void compressedTexSubImage2D(double, double, double, double, double, double, double, ArrayBufferView*);
    void copyTexImage2D(double, double, double, double, double, double, double, double);
    void copyTexSubImage2D(double, double, double, double, double, double, double, double);
    WebGLBuffer* createBuffer();
    WebGLFramebuffer* createFramebuffer();
    WebGLProgram* createProgram();
    WebGLRenderbuffer* createRenderbuffer();
    WebGLShader* createShader(double);
    WebGLTexture* createTexture();
    void cullFace(double);
    void deleteBuffer(WebGLBuffer*);
    void deleteFramebuffer(WebGLFramebuffer*);
    void deleteProgram(WebGLProgram*);
    void deleteRenderbuffer(WebGLRenderbuffer*);
    void deleteShader(WebGLShader*);
    void deleteTexture(WebGLTexture*);
    void depthFunc(double);
    void depthMask(bool);
    void depthRange(double, double);
    void detachShader(WebGLProgram*, WebGLShader*);
    void disable(double);
    void disableVertexAttribArray(double);
    void drawArrays(double, double, double);
    void drawElements(double, double, double, double);
    void enable(double);
    void enableVertexAttribArray(double);
    void finish();
    void flush();
    void framebufferRenderbuffer(double, double, double, WebGLRenderbuffer*);
    void framebufferTexture2D(double, double, double, WebGLTexture*, double);
    void frontFace(double);
    void generateMipmap(double);
    WebGLActiveInfo* getActiveAttrib(WebGLProgram*, double);
    WebGLActiveInfo* getActiveUniform(WebGLProgram*, double);
    TArray<WebGLShader>* getAttachedShaders(WebGLProgram*);
    double getAttribLocation(WebGLProgram*, const String&);
    Object* getBufferParameter(double, double);
    Object* getParameter(double);
    double getError();
    Object* getFramebufferAttachmentParameter(double, double, double);
    Object* getProgramParameter(WebGLProgram*, double);
    String* getProgramInfoLog(WebGLProgram*);
    Object* getRenderbufferParameter(double, double);
    Object* getShaderParameter(WebGLShader*, double);
    WebGLShaderPrecisionFormat* getShaderPrecisionFormat(double, double);
    String* getShaderInfoLog(WebGLShader*);
    String* getShaderSource(WebGLShader*);
    Object* getTexParameter(double, double);
    Object* getUniform(WebGLProgram*, WebGLUniformLocation*);
    WebGLUniformLocation* getUniformLocation(WebGLProgram*, const String&);
    Object* getVertexAttrib(double, double);
    double getVertexAttribOffset(double, double);
    void hint(double, double);
    bool isBuffer(WebGLBuffer*);
    bool isEnabled(double);
    bool isFramebuffer(WebGLFramebuffer*);
    bool isProgram(WebGLProgram*);
    bool isRenderbuffer(WebGLRenderbuffer*);
    bool isShader(WebGLShader*);
    bool isTexture(WebGLTexture*);
    void lineWidth(double);
    void linkProgram(WebGLProgram*);
    void pixelStorei(double, double);
    void polygonOffset(double, double);
    void readPixels(int, int, int, int, int, int, ArrayBufferView*);
    void renderbufferStorage(double, double, double, double);
    void sampleCoverage(double, bool);
    void scissor(double, double, double, double);
    void shaderSource(WebGLShader*, const String&);
    void stencilFunc(double, double, double);
    void stencilFuncSeparate(double, double, double, double);
    void stencilMask(double);
    void stencilMaskSeparate(double, double);
    void stencilOp(double, double, double);
    void stencilOpSeparate(double, double, double, double);
    void texImage2D(int, int, int, int, int, int, int, int, ArrayBufferView*);
    //void texImage2D(int, int, int, int, int, ImageData*);
    void texImage2D(int, int, int, int, int, HTMLImageElement*);
    void texImage2D(int, int, int, int, int, HTMLCanvasElement*);
    void texImage2D(int, int, int, int, int, HTMLVideoElement*);
    void texParameterf(double, double, double);
    void texParameteri(double, double, double);
    void texSubImage2D(double, double, double, double, double, double, double, double, ArrayBufferView*);
    //void texSubImage2D(double, double, double, double, double, double, ImageData*);
    //void texSubImage2D(double, double, double, double, double, double, HTMLImageElement*);
    void texSubImage2D(double, double, double, double, double, double, HTMLCanvasElement*);
    //void texSubImage2D(double, double, double, double, double, double, HTMLVideoElement*);
    void uniform1f(WebGLUniformLocation*, double);
    void uniform1fv(WebGLUniformLocation*, const Float32Array&);
    void uniform1i(WebGLUniformLocation*, int);
    void uniform1iv(WebGLUniformLocation*, const Int32Array&);
    void uniform2f(WebGLUniformLocation*, double, double);
    void uniform2fv(WebGLUniformLocation*, const Float32Array&);
    void uniform2i(WebGLUniformLocation*, int, int);
    void uniform2iv(WebGLUniformLocation*, const Int32Array&);
    void uniform3f(WebGLUniformLocation*, double, double, double);
    void uniform3fv(WebGLUniformLocation*, const Float32Array&);
    void uniform3i(WebGLUniformLocation*, int, int, int);
    void uniform3iv(WebGLUniformLocation*, const Int32Array&);
    void uniform4f(WebGLUniformLocation*, double, double, double, double);
    void uniform4fv(WebGLUniformLocation*, const Float32Array&);
    void uniform4i(WebGLUniformLocation*, int, int, int, int);
    void uniform4iv(WebGLUniformLocation*, const Int32Array&);
    void uniformMatrix2fv(WebGLUniformLocation*, bool, const Float32Array&);
    void uniformMatrix3fv(WebGLUniformLocation*, bool, const Float32Array&);
    void uniformMatrix4fv(WebGLUniformLocation*, bool, const Float32Array&);
    void useProgram(WebGLProgram*);
    void validateProgram(WebGLProgram*);
    void vertexAttrib1f(double, double);
    void vertexAttrib1fv(double, float*);
    void vertexAttrib1fv(double, double*);
    void vertexAttrib2f(double, double, double);
    void vertexAttrib2fv(double, float*);
    void vertexAttrib2fv(double, double*);
    void vertexAttrib3f(double, double, double, double);
    void vertexAttrib3fv(double, float*);
    void vertexAttrib3fv(double, double*);
    void vertexAttrib4f(double, double, double, double, double);
    void vertexAttrib4fv(double, float*);
    void vertexAttrib4fv(double, double*);
    void vertexAttribPointer(double, double, double, bool, double, double);
    void viewport(double, double, double, double);

};

class WebGLVertexArrayOES : public WebGLObject
{
public:

};

class OESVertexArrayObject: public Object
{
public:
    int get_VERTEX_ARRAY_BINDING_OES();
    void bindVertexArrayOES(WebGLVertexArrayOES*);
    WebGLVertexArrayOES* createVertexArrayOES();
    void deleteVertexArrayOES(WebGLVertexArrayOES*);
    bool isVertexArrayOES(WebGLVertexArrayOES*);

};

};
#endif
