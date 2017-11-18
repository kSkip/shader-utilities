#include <stdio.h>
#include <stdlib.h>
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>

#ifndef SHADER_UTILITIES
#define SHADER_UTILITIES

#ifdef __cplusplus
extern "C" {
#endif

void* file_contents(const char *filename, GLint *length);

void print_log(GLuint object,
               PFNGLGETSHADERIVPROC glGet__iv,
               PFNGLGETSHADERINFOLOGPROC glGet__InfoLog);

GLuint make_shader(GLenum type, GLchar *source, GLint *length);

GLuint make_program(GLuint vertex_shader, GLuint fragment_shader);

#ifdef __cplusplus
}
#endif

#endif
