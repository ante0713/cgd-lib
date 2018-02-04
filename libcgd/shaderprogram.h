#ifndef CGD_LIB_SHADERPROGRAM_H
#define CGD_LIB_SHADERPROGRAM_H

#include <cglm/cglm.h>
#include <GL/glew.h>

typedef struct {
    unsigned int ID;
} CGD_ShaderProgram;

CGD_ShaderProgram *cgd_shader_create(const char *vertexCode, const char *fragmentCode);

void cgd_shader_start(CGD_ShaderProgram* shader);
void cgd_shader_setint(CGD_ShaderProgram* shader, const char *name, int val);
void cgd_shader_setfloat(CGD_ShaderProgram* shader, const char *name, float val);
void cgd_shader_setvec3(CGD_ShaderProgram *shader, const char *name, vec3 val);


#endif //CGD_LIB_SHADERPROGRAM_H
