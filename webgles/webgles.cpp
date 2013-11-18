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

#include "webgles.h"
client::Array* WebGLProgramArray;

client::WebGLProgram* webGLESLookupWebGLProgram(int objId)
{
	return static_cast<client::WebGLProgram*>((*WebGLProgramArray)[objId-1]);
}

client::Array* WebGLShaderArray;

client::WebGLShader* webGLESLookupWebGLShader(int objId)
{
	return static_cast<client::WebGLShader*>((*WebGLShaderArray)[objId-1]);
}

client::Array* WebGLBufferArray;

client::WebGLBuffer* webGLESLookupWebGLBuffer(int objId)
{
	return static_cast<client::WebGLBuffer*>((*WebGLBufferArray)[objId-1]);
}

client::Array* WebGLFramebufferArray;

client::WebGLFramebuffer* webGLESLookupWebGLFramebuffer(int objId)
{
	return static_cast<client::WebGLFramebuffer*>((*WebGLFramebufferArray)[objId-1]);
}

client::Array* WebGLRenderbufferArray;

client::WebGLRenderbuffer* webGLESLookupWebGLRenderbuffer(int objId)
{
	return static_cast<client::WebGLRenderbuffer*>((*WebGLRenderbufferArray)[objId-1]);
}

client::Array* WebGLTextureArray;

client::WebGLTexture* webGLESLookupWebGLTexture(int objId)
{
	return static_cast<client::WebGLTexture*>((*WebGLTextureArray)[objId-1]);
}

client::Array* WebGLUniformLocationArray;

client::WebGLUniformLocation* webGLESLookupWebGLUniformLocation(int objId)
{
	return static_cast<client::WebGLUniformLocation*>((*WebGLUniformLocationArray)[objId-1]);
}

void webGLESLookupArrayInit() {
	WebGLProgramArray = new client::Array();
	WebGLShaderArray = new client::Array();
	WebGLBufferArray = new client::Array();
	WebGLFramebufferArray = new client::Array();
	WebGLRenderbufferArray = new client::Array();
	WebGLTextureArray = new client::Array();
	WebGLUniformLocationArray = new client::Array();
}

void glActiveTexture(unsigned int texture)
{
	return webGLES->activeTexture(texture);
}

void glAttachShader(unsigned int program, unsigned int shader)
{
	return webGLES->attachShader(webGLESLookupWebGLProgram(program),webGLESLookupWebGLShader(shader));
}

void glBindAttribLocation(unsigned int program, unsigned int index, const char* name)
{
	return webGLES->bindAttribLocation(webGLESLookupWebGLProgram(program),index,name);
}

void glBindBuffer(unsigned int target, unsigned int buffer)
{
	return webGLES->bindBuffer(target,webGLESLookupWebGLBuffer(buffer));
}

void glBindFramebuffer(unsigned int target, unsigned int framebuffer)
{
	return webGLES->bindFramebuffer(target,webGLESLookupWebGLFramebuffer(framebuffer));
}

void glBindRenderbuffer(unsigned int target, unsigned int renderbuffer)
{
	return webGLES->bindRenderbuffer(target,webGLESLookupWebGLRenderbuffer(renderbuffer));
}

void glBindTexture(unsigned int target, unsigned int texture)
{
	return webGLES->bindTexture(target,webGLESLookupWebGLTexture(texture));
}

void glBlendColor(float red, float green, float blue, float alpha)
{
	return webGLES->blendColor(red,green,blue,alpha);
}

void glBlendEquation(unsigned int mode)
{
	return webGLES->blendEquation(mode);
}

void glBlendEquationSeparate(unsigned int modeRGB, unsigned int modeAlpha)
{
	return webGLES->blendEquationSeparate(modeRGB,modeAlpha);
}

void glBlendFunc(unsigned int sfactor, unsigned int dfactor)
{
	return webGLES->blendFunc(sfactor,dfactor);
}

void glBlendFuncSeparate(unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)
{
	return webGLES->blendFuncSeparate(srcRGB,dstRGB,srcAlpha,dstAlpha);
}

void glBufferData (GLenum target, GLsizeiptr size, const void* data, GLenum usage)
{
	if(data==NULL) webGLES->bufferData(target, size, usage);
	else webGLES->bufferData(target, BufferForPointer(data, size), usage);
}

void glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void* data)
{
	webGLES->bufferSubData(target, offset, BufferForPointer(data, size));
}

unsigned int glCheckFramebufferStatus(unsigned int target)
{
	return webGLES->checkFramebufferStatus(target);
}

void glClear(unsigned int mask)
{
	return webGLES->clear(mask);
}

void glClearColor(float red, float green, float blue, float alpha)
{
	return webGLES->clearColor(red,green,blue,alpha);
}

void glClearDepth(float depth)
{
	return webGLES->clearDepth(depth);
}

void glClearStencil(int s)
{
	return webGLES->clearStencil(s);
}

void glColorMask(bool red, bool green, bool blue, bool alpha)
{
	return webGLES->colorMask(red,green,blue,alpha);
}

void glCompileShader(unsigned int shader)
{
	return webGLES->compileShader(webGLESLookupWebGLShader(shader));
}

void glCopyTexImage2D(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border)
{
	return webGLES->copyTexImage2D(target,level,internalformat,x,y,width,height,border);
}

void glCopyTexSubImage2D(unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height)
{
	return webGLES->copyTexSubImage2D(target,level,xoffset,yoffset,x,y,width,height);
}

void glGenBuffers (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		client::WebGLBuffer* obj=webGLES->createBuffer();
		int index=WebGLBufferArray->indexOf(NULL);
		if(index>=0) { (*WebGLBufferArray)[index] = obj; objs[i]=index+1; }
		else { index=WebGLBufferArray->push(obj); objs[i]=index; }
	}
}

void glGenFramebuffers (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		client::WebGLFramebuffer* obj=webGLES->createFramebuffer();
		int index=WebGLFramebufferArray->indexOf(NULL);
		if(index>=0) { (*WebGLFramebufferArray)[index] = obj; objs[i]=index+1; }
		else { index=WebGLFramebufferArray->push(obj); objs[i]=index; }
	}
}

GLuint glCreateProgram ()
{
	client::WebGLProgram* obj=webGLES->createProgram();
	int index=WebGLProgramArray->indexOf(NULL);
	if(index>=0) { (*WebGLProgramArray)[index] = obj; return index+1; }
	else { index=WebGLProgramArray->push(obj); return index; }
}

void glGenRenderbuffers (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		client::WebGLRenderbuffer* obj=webGLES->createRenderbuffer();
		int index=WebGLRenderbufferArray->indexOf(NULL);
		if(index>=0) { (*WebGLRenderbufferArray)[index] = obj; objs[i]=index+1; }
		else { index=WebGLRenderbufferArray->push(obj); objs[i]=index; }
	}
}

GLuint glCreateShader (GLenum shaderType)
{
	client::WebGLShader* obj=webGLES->createShader(shaderType);
	int index=WebGLShaderArray->indexOf(NULL);
	if(index>=0) { (*WebGLShaderArray)[index] = obj; return index+1; }
	else { index=WebGLShaderArray->push(obj); return index; }
}

void glGenTextures (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		client::WebGLTexture* obj=webGLES->createTexture();
		int index=WebGLTextureArray->indexOf(NULL);
		if(index>=0) { (*WebGLTextureArray)[index] = obj; objs[i]=index+1; }
		else { index=WebGLTextureArray->push(obj); objs[i]=index; }
	}
}

void glCullFace(unsigned int mode)
{
	return webGLES->cullFace(mode);
}

void glDeleteBuffers (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		int index=objs[i]-1;
		client::WebGLBuffer* obj=static_cast<client::WebGLBuffer*>((*WebGLBufferArray)[index]);
		webGLES->deleteBuffer(obj);
		(*WebGLBufferArray)[index]=NULL;
	}
}

void glDeleteFramebuffers (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		int index=objs[i]-1;
		client::WebGLFramebuffer* obj=static_cast<client::WebGLFramebuffer*>((*WebGLFramebufferArray)[index]);
		webGLES->deleteFramebuffer(obj);
		(*WebGLFramebufferArray)[index]=NULL;
	}
}

void glDeleteProgram(unsigned int program)
{
	return webGLES->deleteProgram(webGLESLookupWebGLProgram(program));
}

void glDeleteRenderbuffers (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		int index=objs[i]-1;
		client::WebGLRenderbuffer* obj=static_cast<client::WebGLRenderbuffer*>((*WebGLRenderbufferArray)[index]);
		webGLES->deleteRenderbuffer(obj);
		(*WebGLRenderbufferArray)[index]=NULL;
	}
}

void glDeleteShader(unsigned int shader)
{
	return webGLES->deleteShader(webGLESLookupWebGLShader(shader));
}

void glDeleteTextures (GLsizei n, GLuint* objs)
{
	for(GLsizei i=0;i<n;i++) {
		int index=objs[i]-1;
		client::WebGLTexture* obj=static_cast<client::WebGLTexture*>((*WebGLTextureArray)[index]);
		webGLES->deleteTexture(obj);
		(*WebGLTextureArray)[index]=NULL;
	}
}

void glDepthFunc(unsigned int func)
{
	return webGLES->depthFunc(func);
}

void glDepthMask(bool flag)
{
	return webGLES->depthMask(flag);
}

void glDepthRange(float zNear, float zFar)
{
	return webGLES->depthRange(zNear,zFar);
}

void glDetachShader(unsigned int program, unsigned int shader)
{
	return webGLES->detachShader(webGLESLookupWebGLProgram(program),webGLESLookupWebGLShader(shader));
}

void glDisable(unsigned int cap)
{
	return webGLES->disable(cap);
}

void glDisableVertexAttribArray(unsigned int index)
{
	return webGLES->disableVertexAttribArray(index);
}

void glDrawArrays(unsigned int mode, int first, int count)
{
	return webGLES->drawArrays(mode,first,count);
}

void glDrawElements(unsigned int mode, int count, unsigned int type, int offset)
{
	return webGLES->drawElements(mode,count,type,offset);
}

void glEnable(unsigned int cap)
{
	return webGLES->enable(cap);
}

void glEnableVertexAttribArray(unsigned int index)
{
	return webGLES->enableVertexAttribArray(index);
}

void glFinish()
{
	return webGLES->finish();
}

void glFlush()
{
	return webGLES->flush();
}

void glFramebufferRenderbuffer(unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer)
{
	return webGLES->framebufferRenderbuffer(target,attachment,renderbuffertarget,webGLESLookupWebGLRenderbuffer(renderbuffer));
}

void glFramebufferTexture2D(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level)
{
	return webGLES->framebufferTexture2D(target,attachment,textarget,webGLESLookupWebGLTexture(texture),level);
}

void glFrontFace(unsigned int mode)
{
	return webGLES->frontFace(mode);
}

void glGenerateMipmap(unsigned int target)
{
	return webGLES->generateMipmap(target);
}

int glGetAttribLocation(unsigned int program, const char* name)
{
	return webGLES->getAttribLocation(webGLESLookupWebGLProgram(program),name);
}

unsigned int glGetError()
{
	return webGLES->getError();
}

GLint glGetUniformLocation (GLuint program, const char* name)
{
	client::WebGLUniformLocation* obj=webGLES->getUniformLocation(webGLESLookupWebGLProgram(program), name);
	int index=WebGLUniformLocationArray->indexOf(obj);
	if(index>=0) { return index+1; }
	else { index=WebGLUniformLocationArray->push(obj); return index; }
}

int glGetVertexAttribOffset(unsigned int index, unsigned int pname)
{
	return webGLES->getVertexAttribOffset(index,pname);
}

void glHint(unsigned int target, unsigned int mode)
{
	return webGLES->hint(target,mode);
}

bool glIsBuffer(unsigned int buffer)
{
	return webGLES->isBuffer(webGLESLookupWebGLBuffer(buffer));
}

bool glIsEnabled(unsigned int cap)
{
	return webGLES->isEnabled(cap);
}

bool glIsFramebuffer(unsigned int framebuffer)
{
	return webGLES->isFramebuffer(webGLESLookupWebGLFramebuffer(framebuffer));
}

bool glIsProgram(unsigned int program)
{
	return webGLES->isProgram(webGLESLookupWebGLProgram(program));
}

bool glIsRenderbuffer(unsigned int renderbuffer)
{
	return webGLES->isRenderbuffer(webGLESLookupWebGLRenderbuffer(renderbuffer));
}

bool glIsShader(unsigned int shader)
{
	return webGLES->isShader(webGLESLookupWebGLShader(shader));
}

bool glIsTexture(unsigned int texture)
{
	return webGLES->isTexture(webGLESLookupWebGLTexture(texture));
}

void glLineWidth(float width)
{
	return webGLES->lineWidth(width);
}

void glLinkProgram(unsigned int program)
{
	return webGLES->linkProgram(webGLESLookupWebGLProgram(program));
}

void glPixelStorei(unsigned int pname, int param)
{
	return webGLES->pixelStorei(pname,param);
}

void glPolygonOffset(float factor, float units)
{
	return webGLES->polygonOffset(factor,units);
}

void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* data)
{
	webGLES->readPixels(x, y, width, height, format, type, BufferForPointer(data));
}

void glRenderbufferStorage(unsigned int target, unsigned int internalformat, int width, int height)
{
	return webGLES->renderbufferStorage(target,internalformat,width,height);
}

void glSampleCoverage(float value, bool invert)
{
	return webGLES->sampleCoverage(value,invert);
}

void glScissor(int x, int y, int width, int height)
{
	return webGLES->scissor(x,y,width,height);
}

void glStencilFunc(unsigned int func, int ref, unsigned int mask)
{
	return webGLES->stencilFunc(func,ref,mask);
}

void glStencilFuncSeparate(unsigned int face, unsigned int func, int ref, unsigned int mask)
{
	return webGLES->stencilFuncSeparate(face,func,ref,mask);
}

void glStencilMask(unsigned int mask)
{
	return webGLES->stencilMask(mask);
}

void glStencilMaskSeparate(unsigned int face, unsigned int mask)
{
	return webGLES->stencilMaskSeparate(face,mask);
}

void glStencilOp(unsigned int fail, unsigned int zfail, unsigned int zpass)
{
	return webGLES->stencilOp(fail,zfail,zpass);
}

void glStencilOpSeparate(unsigned int face, unsigned int fail, unsigned int zfail, unsigned int zpass)
{
	return webGLES->stencilOpSeparate(face,fail,zfail,zpass);
}

void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* data)
{
	webGLES->texImage2D(target, level, internalformat, width, height, border, format, type, data?BufferForPointer(data):NULL);
}

void glTexParameterf(unsigned int target, unsigned int pname, float param)
{
	return webGLES->texParameterf(target,pname,param);
}

void glTexParameteri(unsigned int target, unsigned int pname, int param)
{
	return webGLES->texParameteri(target,pname,param);
}

void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* data)
{
	webGLES->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, BufferForPointer(data));
}

void glUniform1f(unsigned int location, float x)
{
	return webGLES->uniform1f(webGLESLookupWebGLUniformLocation(location),x);
}

void glUniform1fv (GLint location, GLsizei count, const GLfloat* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform1fv(webGLESLookupWebGLUniformLocation(location), client::Float32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLfloat)));
}

void glUniform1i(unsigned int location, int x)
{
	return webGLES->uniform1i(webGLESLookupWebGLUniformLocation(location),x);
}

void glUniform1iv (GLint location, GLsizei count, const GLint* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform1iv(webGLESLookupWebGLUniformLocation(location), client::Int32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLint)));
}

void glUniform2f(unsigned int location, float x, float y)
{
	return webGLES->uniform2f(webGLESLookupWebGLUniformLocation(location),x,y);
}

void glUniform2fv (GLint location, GLsizei count, const GLfloat* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform2fv(webGLESLookupWebGLUniformLocation(location), client::Float32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLfloat)));
}

void glUniform2i(unsigned int location, int x, int y)
{
	return webGLES->uniform2i(webGLESLookupWebGLUniformLocation(location),x,y);
}

void glUniform2iv (GLint location, GLsizei count, const GLint* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform2iv(webGLESLookupWebGLUniformLocation(location), client::Int32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLint)));
}

void glUniform3f(unsigned int location, float x, float y, float z)
{
	return webGLES->uniform3f(webGLESLookupWebGLUniformLocation(location),x,y,z);
}

void glUniform3fv (GLint location, GLsizei count, const GLfloat* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform3fv(webGLESLookupWebGLUniformLocation(location), client::Float32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLfloat)));
}

void glUniform3i(unsigned int location, int x, int y, int z)
{
	return webGLES->uniform3i(webGLESLookupWebGLUniformLocation(location),x,y,z);
}

void glUniform3iv (GLint location, GLsizei count, const GLint* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform3iv(webGLESLookupWebGLUniformLocation(location), client::Int32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLint)));
}

void glUniform4f(unsigned int location, float x, float y, float z, float w)
{
	return webGLES->uniform4f(webGLESLookupWebGLUniformLocation(location),x,y,z,w);
}

void glUniform4fv (GLint location, GLsizei count, const GLfloat* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform4fv(webGLESLookupWebGLUniformLocation(location), client::Float32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLfloat)));
}

void glUniform4i(unsigned int location, int x, int y, int z, int w)
{
	return webGLES->uniform4i(webGLESLookupWebGLUniformLocation(location),x,y,z,w);
}

void glUniform4iv (GLint location, GLsizei count, const GLint* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniform4iv(webGLESLookupWebGLUniformLocation(location), client::Int32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLint)));
}

void glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniformMatrix2fv(webGLESLookupWebGLUniformLocation(location), transpose, client::Float32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLfloat)));
}

void glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniformMatrix3fv(webGLESLookupWebGLUniformLocation(location), transpose, client::Float32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLfloat)));
}

void glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	client::ArrayBufferView* buf=BufferForPointer(value);
	webGLES->uniformMatrix4fv(webGLESLookupWebGLUniformLocation(location), transpose, client::Float32Array(buf->get_buffer(), buf->get_byteOffset(), buf->get_byteLength()/sizeof(GLfloat)));
}

void glUseProgram(unsigned int program)
{
	return webGLES->useProgram(webGLESLookupWebGLProgram(program));
}

void glValidateProgram(unsigned int program)
{
	return webGLES->validateProgram(webGLESLookupWebGLProgram(program));
}

void glVertexAttrib1f(unsigned int indx, float x)
{
	return webGLES->vertexAttrib1f(indx,x);
}

void glVertexAttrib2f(unsigned int indx, float x, float y)
{
	return webGLES->vertexAttrib2f(indx,x,y);
}

void glVertexAttrib3f(unsigned int indx, float x, float y, float z)
{
	return webGLES->vertexAttrib3f(indx,x,y,z);
}

void glVertexAttrib4f(unsigned int indx, float x, float y, float z, float w)
{
	return webGLES->vertexAttrib4f(indx,x,y,z,w);
}

void glVertexAttribPointer(unsigned int indx, int size, unsigned int type, bool normalized, int stride, int offset)
{
	return webGLES->vertexAttribPointer(indx,size,type,normalized,stride,offset);
}

void glViewport(int x, int y, int width, int height)
{
	return webGLES->viewport(x,y,width,height);
}

