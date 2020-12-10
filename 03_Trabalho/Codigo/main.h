#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#include <gl/glew.h>
#include <GL/glut.h>
#include <stdio.h>
#include <windows.h>
#include <errno.h>

#include "C:\Users\jonas\Downloads\glm\glm\gtc\type_ptr.hpp"
#include "C:\Users\jonas\Downloads\glm\glm\mat4x4.hpp"

void CheckOpenGLError(const char* stmt, const char* fname, int line) {
    GLenum err = glGetError();
    if (err != GL_NO_ERROR) {
        printf("OpenGL error %08x, at %s:%i - for %s\n", err, fname, line,
               stmt);
        abort();
    } else {
    printf("teste1");
    }
}


#ifdef DEBUG
#define GL_CHECK(stmt)                               \
    do {                                             \
        stmt;                                        \
        CheckOpenGLError(#stmt, __FILE__, __LINE__); \
    } while (0)
#else
#define GL_CHECK(stmt) stmt
#endif

#endif // MAIN_H_INCLUDED
