#include "handler/program.hpp"
#include "utility/shader.hpp"
#include "utility/uniform.hpp"
#include "glm/ext/matrix_float4x4.hpp"
#include "glm/ext/matrix_clip_space.hpp"
#include <iostream>

namespace SphereX {

void Program::init(const std::string& vShaderSrc, const std::string& fShaderSrc, float aspectRatio) {

  m_program = glCreateProgram();

  GLuint vShader = createShader(GL_VERTEX_SHADER, vShaderSrc); 
  glAttachShader(m_program, vShader);

  GLuint fShader = createShader(GL_FRAGMENT_SHADER, fShaderSrc); 
  glAttachShader(m_program, fShader);

  glLinkProgram(m_program);

  GLint linkStatus;
  glGetProgramiv(m_program, GL_LINK_STATUS, &linkStatus);
  if(linkStatus != GL_TRUE) {
    GLsizei logLength = 0;
    GLchar log[1024];
    glGetProgramInfoLog(m_program, 1024, &logLength, &log[0]);
    std::cout << log << '\n';
  }

  // initalize uniform variables
  glm::mat4 model(1.0f);
  glm::mat4 view(1.0f);

  glm::mat4 proj = glm::perspective(glm::radians(45.0f), aspectRatio, 0.1f, 100.0f);

  glUseProgram(m_program);
  uniformMatrix4fv("model", m_program, 1, GL_FALSE, &model[0][0]); 
  uniformMatrix4fv("view", m_program, 1, GL_FALSE, &view[0][0]); 
  uniformMatrix4fv("proj", m_program, 1, GL_FALSE, &proj[0][0]); 
  glUseProgram(0);
}

void Program::use() const {
  glUseProgram(m_program);
}
} // namespace SphereX
