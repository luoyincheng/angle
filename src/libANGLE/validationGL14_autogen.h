// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml and wgl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// validationGL14_autogen.h:
//   Validation functions for the OpenGL 1.4 entry points.

#ifndef LIBANGLE_VALIDATION_GL14_AUTOGEN_H_
#define LIBANGLE_VALIDATION_GL14_AUTOGEN_H_

#include "common/PackedEnums.h"

namespace gl
{
class Context;

bool ValidateFogCoordPointer(Context *context, GLenum type, GLsizei stride, const void *pointer);
bool ValidateFogCoordd(Context *context, GLdouble coord);
bool ValidateFogCoorddv(Context *context, const GLdouble *coord);
bool ValidateFogCoordf(Context *context, GLfloat coord);
bool ValidateFogCoordfv(Context *context, const GLfloat *coord);
bool ValidateMultiDrawArrays(Context *context,
                             PrimitiveMode modePacked,
                             const GLint *first,
                             const GLsizei *count,
                             GLsizei drawcount);
bool ValidateMultiDrawElements(Context *context,
                               PrimitiveMode modePacked,
                               const GLsizei *count,
                               DrawElementsType typePacked,
                               const void *const *indices,
                               GLsizei drawcount);
bool ValidatePointParameteri(Context *context, GLenum pname, GLint param);
bool ValidatePointParameteriv(Context *context, GLenum pname, const GLint *params);
bool ValidateSecondaryColor3b(Context *context, GLbyte red, GLbyte green, GLbyte blue);
bool ValidateSecondaryColor3bv(Context *context, const GLbyte *v);
bool ValidateSecondaryColor3d(Context *context, GLdouble red, GLdouble green, GLdouble blue);
bool ValidateSecondaryColor3dv(Context *context, const GLdouble *v);
bool ValidateSecondaryColor3f(Context *context, GLfloat red, GLfloat green, GLfloat blue);
bool ValidateSecondaryColor3fv(Context *context, const GLfloat *v);
bool ValidateSecondaryColor3i(Context *context, GLint red, GLint green, GLint blue);
bool ValidateSecondaryColor3iv(Context *context, const GLint *v);
bool ValidateSecondaryColor3s(Context *context, GLshort red, GLshort green, GLshort blue);
bool ValidateSecondaryColor3sv(Context *context, const GLshort *v);
bool ValidateSecondaryColor3ub(Context *context, GLubyte red, GLubyte green, GLubyte blue);
bool ValidateSecondaryColor3ubv(Context *context, const GLubyte *v);
bool ValidateSecondaryColor3ui(Context *context, GLuint red, GLuint green, GLuint blue);
bool ValidateSecondaryColor3uiv(Context *context, const GLuint *v);
bool ValidateSecondaryColor3us(Context *context, GLushort red, GLushort green, GLushort blue);
bool ValidateSecondaryColor3usv(Context *context, const GLushort *v);
bool ValidateSecondaryColorPointer(Context *context,
                                   GLint size,
                                   GLenum type,
                                   GLsizei stride,
                                   const void *pointer);
bool ValidateWindowPos2d(Context *context, GLdouble x, GLdouble y);
bool ValidateWindowPos2dv(Context *context, const GLdouble *v);
bool ValidateWindowPos2f(Context *context, GLfloat x, GLfloat y);
bool ValidateWindowPos2fv(Context *context, const GLfloat *v);
bool ValidateWindowPos2i(Context *context, GLint x, GLint y);
bool ValidateWindowPos2iv(Context *context, const GLint *v);
bool ValidateWindowPos2s(Context *context, GLshort x, GLshort y);
bool ValidateWindowPos2sv(Context *context, const GLshort *v);
bool ValidateWindowPos3d(Context *context, GLdouble x, GLdouble y, GLdouble z);
bool ValidateWindowPos3dv(Context *context, const GLdouble *v);
bool ValidateWindowPos3f(Context *context, GLfloat x, GLfloat y, GLfloat z);
bool ValidateWindowPos3fv(Context *context, const GLfloat *v);
bool ValidateWindowPos3i(Context *context, GLint x, GLint y, GLint z);
bool ValidateWindowPos3iv(Context *context, const GLint *v);
bool ValidateWindowPos3s(Context *context, GLshort x, GLshort y, GLshort z);
bool ValidateWindowPos3sv(Context *context, const GLshort *v);
}  // namespace gl

#endif  // LIBANGLE_VALIDATION_GL14_AUTOGEN_H_
