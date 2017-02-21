﻿#include <blik.h>
#include "OpenGLES_Functions.h"

#if defined(BLIK_PLATFORM_NATIVE) & BLIK_ANDROID

	// GL_ES_VERSION_2_0
	GL_APICALL void (* GL_APIENTRY glActiveTexture) (GLenum texture) = nullptr;
	GL_APICALL void (* GL_APIENTRY glAttachShader) (GLuint program, GLuint shader) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindAttribLocation) (GLuint program, GLuint index, const GLchar *name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindBuffer) (GLenum target, GLuint buffer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindFramebuffer) (GLenum target, GLuint framebuffer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindRenderbuffer) (GLenum target, GLuint renderbuffer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindTexture) (GLenum target, GLuint texture) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBlendColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBlendEquation) (GLenum mode) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBlendEquationSeparate) (GLenum modeRGB, GLenum modeAlpha) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBlendFunc) (GLenum sfactor, GLenum dfactor) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBlendFuncSeparate) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBufferData) (GLenum target, GLsizeiptr size, const void *data, GLenum usage) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBufferSubData) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data) = nullptr;
	GL_APICALL GLenum (* GL_APIENTRY glCheckFramebufferStatus) (GLenum target) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClear) (GLbitfield mask) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClearColor) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClearDepthf) (GLfloat d) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClearStencil) (GLint s) = nullptr;
	GL_APICALL void (* GL_APIENTRY glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCompileShader) (GLuint shader) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCompressedTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCompressedTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCopyTexImage2D) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	GL_APICALL GLuint (* GL_APIENTRY glCreateProgram) (void) = nullptr;
	GL_APICALL GLuint (* GL_APIENTRY glCreateShader) (GLenum type) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCullFace) (GLenum mode) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteBuffers) (GLsizei n, const GLuint *buffers) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteFramebuffers) (GLsizei n, const GLuint *framebuffers) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteProgram) (GLuint program) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteRenderbuffers) (GLsizei n, const GLuint *renderbuffers) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteShader) (GLuint shader) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteTextures) (GLsizei n, const GLuint *textures) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDepthFunc) (GLenum func) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDepthMask) (GLboolean flag) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDepthRangef) (GLfloat n, GLfloat f) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDetachShader) (GLuint program, GLuint shader) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDisable) (GLenum cap) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDisableVertexAttribArray) (GLuint index) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDrawArrays) (GLenum mode, GLint first, GLsizei count) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDrawElements) (GLenum mode, GLsizei count, GLenum type, const void *indices) = nullptr;
	GL_APICALL void (* GL_APIENTRY glEnable) (GLenum cap) = nullptr;
	GL_APICALL void (* GL_APIENTRY glEnableVertexAttribArray) (GLuint index) = nullptr;
	GL_APICALL void (* GL_APIENTRY glFinish) (void) = nullptr;
	GL_APICALL void (* GL_APIENTRY glFlush) (void) = nullptr;
	GL_APICALL void (* GL_APIENTRY glFramebufferRenderbuffer) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glFramebufferTexture2D) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = nullptr;
	GL_APICALL void (* GL_APIENTRY glFrontFace) (GLenum mode) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenBuffers) (GLsizei n, GLuint *buffers) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenerateMipmap) (GLenum target) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenFramebuffers) (GLsizei n, GLuint *framebuffers) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenRenderbuffers) (GLsizei n, GLuint *renderbuffers) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenTextures) (GLsizei n, GLuint *textures) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetActiveAttrib) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetActiveUniform) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetAttachedShaders) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) = nullptr;
	GL_APICALL GLint (* GL_APIENTRY glGetAttribLocation) (GLuint program, const GLchar *name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetBooleanv) (GLenum pname, GLboolean *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetBufferParameteriv) (GLenum target, GLenum pname, GLint *params) = nullptr;
	GL_APICALL GLenum (* GL_APIENTRY glGetError) (void) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetFloatv) (GLenum pname, GLfloat *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetFramebufferAttachmentParameteriv) (GLenum target, GLenum attachment, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetIntegerv) (GLenum pname, GLint *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetProgramiv) (GLuint program, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetProgramInfoLog) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetRenderbufferParameteriv) (GLenum target, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetShaderiv) (GLuint shader, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetShaderInfoLog) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetShaderPrecisionFormat) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetShaderSource) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) = nullptr;
	GL_APICALL const GLubyte *(* GL_APIENTRY glGetString) (GLenum name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetTexParameteriv) (GLenum target, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetUniformfv) (GLuint program, GLint location, GLfloat *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetUniformiv) (GLuint program, GLint location, GLint *params) = nullptr;
	GL_APICALL GLint (* GL_APIENTRY glGetUniformLocation) (GLuint program, const GLchar *name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetVertexAttribfv) (GLuint index, GLenum pname, GLfloat *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetVertexAttribiv) (GLuint index, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetVertexAttribPointerv) (GLuint index, GLenum pname, void **pointer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glHint) (GLenum target, GLenum mode) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsBuffer) (GLuint buffer) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsEnabled) (GLenum cap) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsFramebuffer) (GLuint framebuffer) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsProgram) (GLuint program) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsRenderbuffer) (GLuint renderbuffer) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsShader) (GLuint shader) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsTexture) (GLuint texture) = nullptr;
	GL_APICALL void (* GL_APIENTRY glLineWidth) (GLfloat width) = nullptr;
	GL_APICALL void (* GL_APIENTRY glLinkProgram) (GLuint program) = nullptr;
	GL_APICALL void (* GL_APIENTRY glPixelStorei) (GLenum pname, GLint param) = nullptr;
	GL_APICALL void (* GL_APIENTRY glPolygonOffset) (GLfloat factor, GLfloat units) = nullptr;
	GL_APICALL void (* GL_APIENTRY glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels) = nullptr;
	GL_APICALL void (* GL_APIENTRY glReleaseShaderCompiler) (void) = nullptr;
	GL_APICALL void (* GL_APIENTRY glRenderbufferStorage) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	GL_APICALL void (* GL_APIENTRY glSampleCoverage) (GLfloat value, GLboolean invert) = nullptr;
	GL_APICALL void (* GL_APIENTRY glScissor) (GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	GL_APICALL void (* GL_APIENTRY glShaderBinary) (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length) = nullptr;
	GL_APICALL void (* GL_APIENTRY glShaderSource) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) = nullptr;
	GL_APICALL void (* GL_APIENTRY glStencilFunc) (GLenum func, GLint ref, GLuint mask) = nullptr;
	GL_APICALL void (* GL_APIENTRY glStencilFuncSeparate) (GLenum face, GLenum func, GLint ref, GLuint mask) = nullptr;
	GL_APICALL void (* GL_APIENTRY glStencilMask) (GLuint mask) = nullptr;
	GL_APICALL void (* GL_APIENTRY glStencilMaskSeparate) (GLenum face, GLuint mask) = nullptr;
	GL_APICALL void (* GL_APIENTRY glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass) = nullptr;
	GL_APICALL void (* GL_APIENTRY glStencilOpSeparate) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexParameterf) (GLenum target, GLenum pname, GLfloat param) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexParameterfv) (GLenum target, GLenum pname, const GLfloat *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexParameteri) (GLenum target, GLenum pname, GLint param) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexParameteriv) (GLenum target, GLenum pname, const GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform1f) (GLint location, GLfloat v0) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform1fv) (GLint location, GLsizei count, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform1i) (GLint location, GLint v0) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform1iv) (GLint location, GLsizei count, const GLint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform2f) (GLint location, GLfloat v0, GLfloat v1) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform2fv) (GLint location, GLsizei count, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform2i) (GLint location, GLint v0, GLint v1) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform2iv) (GLint location, GLsizei count, const GLint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform3f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform3fv) (GLint location, GLsizei count, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform3i) (GLint location, GLint v0, GLint v1, GLint v2) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform3iv) (GLint location, GLsizei count, const GLint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform4f) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform4fv) (GLint location, GLsizei count, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform4i) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform4iv) (GLint location, GLsizei count, const GLint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUseProgram) (GLuint program) = nullptr;
	GL_APICALL void (* GL_APIENTRY glValidateProgram) (GLuint program) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib1f) (GLuint index, GLfloat x) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib1fv) (GLuint index, const GLfloat *v) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib2f) (GLuint index, GLfloat x, GLfloat y) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib2fv) (GLuint index, const GLfloat *v) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib3f) (GLuint index, GLfloat x, GLfloat y, GLfloat z) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib3fv) (GLuint index, const GLfloat *v) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib4f) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttrib4fv) (GLuint index, const GLfloat *v) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttribPointer) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glViewport) (GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;



	// GL_ES_VERSION_3_0
	GL_APICALL void (* GL_APIENTRY glReadBuffer) (GLenum mode) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDrawRangeElements) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexImage3D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCopyTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCompressedTexImage3D) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCompressedTexSubImage3D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenQueries) (GLsizei n, GLuint *ids) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteQueries) (GLsizei n, const GLuint *ids) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsQuery) (GLuint id) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBeginQuery) (GLenum target, GLuint id) = nullptr;
	GL_APICALL void (* GL_APIENTRY glEndQuery) (GLenum target) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetQueryiv) (GLenum target, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetQueryObjectuiv) (GLuint id, GLenum pname, GLuint *params) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glUnmapBuffer) (GLenum target) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetBufferPointerv) (GLenum target, GLenum pname, void **params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDrawBuffers) (GLsizei n, const GLenum *bufs) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix2x3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix3x2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix2x4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix4x2fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix3x4fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformMatrix4x3fv) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBlitFramebuffer) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) = nullptr;
	GL_APICALL void (* GL_APIENTRY glRenderbufferStorageMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	GL_APICALL void (* GL_APIENTRY glFramebufferTextureLayer) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) = nullptr;
	GL_APICALL void *(* GL_APIENTRY glMapBufferRange) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) = nullptr;
	GL_APICALL void (* GL_APIENTRY glFlushMappedBufferRange) (GLenum target, GLintptr offset, GLsizeiptr length) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindVertexArray) (GLuint array) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteVertexArrays) (GLsizei n, const GLuint *arrays) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenVertexArrays) (GLsizei n, GLuint *arrays) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsVertexArray) (GLuint array) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetIntegeri_v) (GLenum target, GLuint index, GLint *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBeginTransformFeedback) (GLenum primitiveMode) = nullptr;
	GL_APICALL void (* GL_APIENTRY glEndTransformFeedback) (void) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindBufferRange) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindBufferBase) (GLenum target, GLuint index, GLuint buffer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTransformFeedbackVaryings) (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetTransformFeedbackVarying) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttribIPointer) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetVertexAttribIiv) (GLuint index, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetVertexAttribIuiv) (GLuint index, GLenum pname, GLuint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttribI4i) (GLuint index, GLint x, GLint y, GLint z, GLint w) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttribI4ui) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttribI4iv) (GLuint index, const GLint *v) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttribI4uiv) (GLuint index, const GLuint *v) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetUniformuiv) (GLuint program, GLint location, GLuint *params) = nullptr;
	GL_APICALL GLint (* GL_APIENTRY glGetFragDataLocation) (GLuint program, const GLchar *name) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform1ui) (GLint location, GLuint v0) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform2ui) (GLint location, GLuint v0, GLuint v1) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform3ui) (GLint location, GLuint v0, GLuint v1, GLuint v2) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform4ui) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform1uiv) (GLint location, GLsizei count, const GLuint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform2uiv) (GLint location, GLsizei count, const GLuint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform3uiv) (GLint location, GLsizei count, const GLuint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniform4uiv) (GLint location, GLsizei count, const GLuint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClearBufferiv) (GLenum buffer, GLint drawbuffer, const GLint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClearBufferuiv) (GLenum buffer, GLint drawbuffer, const GLuint *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClearBufferfv) (GLenum buffer, GLint drawbuffer, const GLfloat *value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glClearBufferfi) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) = nullptr;
	GL_APICALL const GLubyte *(* GL_APIENTRY glGetStringi) (GLenum name, GLuint index) = nullptr;
	GL_APICALL void (* GL_APIENTRY glCopyBufferSubData) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetUniformIndices) (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetActiveUniformsiv) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) = nullptr;
	GL_APICALL GLuint (* GL_APIENTRY glGetUniformBlockIndex) (GLuint program, const GLchar *uniformBlockName) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetActiveUniformBlockiv) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetActiveUniformBlockName) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) = nullptr;
	GL_APICALL void (* GL_APIENTRY glUniformBlockBinding) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDrawArraysInstanced) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDrawElementsInstanced) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) = nullptr;
	GL_APICALL GLsync (* GL_APIENTRY glFenceSync) (GLenum condition, GLbitfield flags) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsSync) (GLsync sync) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteSync) (GLsync sync) = nullptr;
	GL_APICALL GLenum (* GL_APIENTRY glClientWaitSync) (GLsync sync, GLbitfield flags, GLuint64 timeout) = nullptr;
	GL_APICALL void (* GL_APIENTRY glWaitSync) (GLsync sync, GLbitfield flags, GLuint64 timeout) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetInteger64v) (GLenum pname, GLint64 *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetSynciv) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetInteger64i_v) (GLenum target, GLuint index, GLint64 *data) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetBufferParameteri64v) (GLenum target, GLenum pname, GLint64 *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenSamplers) (GLsizei count, GLuint *samplers) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteSamplers) (GLsizei count, const GLuint *samplers) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsSampler) (GLuint sampler) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindSampler) (GLuint unit, GLuint sampler) = nullptr;
	GL_APICALL void (* GL_APIENTRY glSamplerParameteri) (GLuint sampler, GLenum pname, GLint param) = nullptr;
	GL_APICALL void (* GL_APIENTRY glSamplerParameteriv) (GLuint sampler, GLenum pname, const GLint *param) = nullptr;
	GL_APICALL void (* GL_APIENTRY glSamplerParameterf) (GLuint sampler, GLenum pname, GLfloat param) = nullptr;
	GL_APICALL void (* GL_APIENTRY glSamplerParameterfv) (GLuint sampler, GLenum pname, const GLfloat *param) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetSamplerParameteriv) (GLuint sampler, GLenum pname, GLint *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetSamplerParameterfv) (GLuint sampler, GLenum pname, GLfloat *params) = nullptr;
	GL_APICALL void (* GL_APIENTRY glVertexAttribDivisor) (GLuint index, GLuint divisor) = nullptr;
	GL_APICALL void (* GL_APIENTRY glBindTransformFeedback) (GLenum target, GLuint id) = nullptr;
	GL_APICALL void (* GL_APIENTRY glDeleteTransformFeedbacks) (GLsizei n, const GLuint *ids) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGenTransformFeedbacks) (GLsizei n, GLuint *ids) = nullptr;
	GL_APICALL GLboolean (* GL_APIENTRY glIsTransformFeedback) (GLuint id) = nullptr;
	GL_APICALL void (* GL_APIENTRY glPauseTransformFeedback) (void) = nullptr;
	GL_APICALL void (* GL_APIENTRY glResumeTransformFeedback) (void) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetProgramBinary) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) = nullptr;
	GL_APICALL void (* GL_APIENTRY glProgramBinary) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) = nullptr;
	GL_APICALL void (* GL_APIENTRY glProgramParameteri) (GLuint program, GLenum pname, GLint value) = nullptr;
	GL_APICALL void (* GL_APIENTRY glInvalidateFramebuffer) (GLenum target, GLsizei numAttachments, const GLenum *attachments) = nullptr;
	GL_APICALL void (* GL_APIENTRY glInvalidateSubFramebuffer) (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexStorage2D) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) = nullptr;
	GL_APICALL void (* GL_APIENTRY glTexStorage3D) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) = nullptr;
	GL_APICALL void (* GL_APIENTRY glGetInternalformativ) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) = nullptr;



	// GL_ES_VERSION_3_1
	//GL_APICALL void (* GL_APIENTRY glDispatchCompute) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glDispatchComputeIndirect) (GLintptr indirect) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glDrawArraysIndirect) (GLenum mode, const void *indirect) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glDrawElementsIndirect) (GLenum mode, GLenum type, const void *indirect) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glFramebufferParameteri) (GLenum target, GLenum pname, GLint param) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetFramebufferParameteriv) (GLenum target, GLenum pname, GLint *params) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetProgramInterfaceiv) (GLuint program, GLenum programInterface, GLenum pname, GLint *params) = nullptr;
	//GL_APICALL GLuint (* GL_APIENTRY glGetProgramResourceIndex) (GLuint program, GLenum programInterface, const GLchar *name) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetProgramResourceName) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetProgramResourceiv) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) = nullptr;
	//GL_APICALL GLint (* GL_APIENTRY glGetProgramResourceLocation) (GLuint program, GLenum programInterface, const GLchar *name) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glUseProgramStages) (GLuint pipeline, GLbitfield stages, GLuint program) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glActiveShaderProgram) (GLuint pipeline, GLuint program) = nullptr;
	//GL_APICALL GLuint (* GL_APIENTRY glCreateShaderProgramv) (GLenum type, GLsizei count, const GLchar *const*strings) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glBindProgramPipeline) (GLuint pipeline) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glDeleteProgramPipelines) (GLsizei n, const GLuint *pipelines) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGenProgramPipelines) (GLsizei n, GLuint *pipelines) = nullptr;
	//GL_APICALL GLboolean (* GL_APIENTRY glIsProgramPipeline) (GLuint pipeline) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetProgramPipelineiv) (GLuint pipeline, GLenum pname, GLint *params) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform1i) (GLuint program, GLint location, GLint v0) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform2i) (GLuint program, GLint location, GLint v0, GLint v1) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform3i) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform4i) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform1ui) (GLuint program, GLint location, GLuint v0) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform2ui) (GLuint program, GLint location, GLuint v0, GLuint v1) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform3ui) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform4ui) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform1f) (GLuint program, GLint location, GLfloat v0) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform2f) (GLuint program, GLint location, GLfloat v0, GLfloat v1) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform3f) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform4f) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform1iv) (GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform2iv) (GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform3iv) (GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform4iv) (GLuint program, GLint location, GLsizei count, const GLint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform1uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform2uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform3uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform4uiv) (GLuint program, GLint location, GLsizei count, const GLuint *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform1fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform2fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform3fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniform4fv) (GLuint program, GLint location, GLsizei count, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix2x3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix3x2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix2x4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix4x2fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix3x4fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glProgramUniformMatrix4x3fv) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glValidateProgramPipeline) (GLuint pipeline) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetProgramPipelineInfoLog) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glBindImageTexture) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetBooleani_v) (GLenum target, GLuint index, GLboolean *data) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glMemoryBarrier) (GLbitfield barriers) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glMemoryBarrierByRegion) (GLbitfield barriers) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glTexStorage2DMultisample) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetMultisamplefv) (GLenum pname, GLuint index, GLfloat *val) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glSampleMaski) (GLuint maskNumber, GLbitfield mask) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetTexLevelParameteriv) (GLenum target, GLint level, GLenum pname, GLint *params) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glGetTexLevelParameterfv) (GLenum target, GLint level, GLenum pname, GLfloat *params) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glBindVertexBuffer) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glVertexAttribFormat) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glVertexAttribIFormat) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glVertexAttribBinding) (GLuint attribindex, GLuint bindingindex) = nullptr;
	//GL_APICALL void (* GL_APIENTRY glVertexBindingDivisor) (GLuint bindingindex, GLuint divisor) = nullptr;

#endif
