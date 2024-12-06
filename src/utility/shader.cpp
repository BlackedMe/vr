#include "utility/parser.hpp"
#include "utility/shader.hpp"
#include <iostream>

GLuint SphereX::createShader(GLenum type, const std::string& src) {
  std::string strShaderSrc = parseFromFile(src);
  const char* shaderSrc = strShaderSrc.c_str();

  GLuint shader = glCreateShader(type);
  glShaderSource(shader, 1, &shaderSrc, NULL);
  glCompileShader(shader); 

  GLint compileStatus;
  glGetShaderiv(shader, GL_COMPILE_STATUS, &compileStatus);

  if(compileStatus != GL_TRUE) {
    GLsizei logLength = 0;
    GLchar log[1024];
    glGetShaderInfoLog(shader, 1024, &logLength, &log[0]);
    std::cout << log << '\n';
  }
  return shader;
}
