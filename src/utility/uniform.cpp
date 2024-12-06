#include "utility/uniform.hpp"

namespace SphereX {

void uniformMatrix4fv(const std::string& name, GLuint program, GLsizei count, GLboolean transpose, const GLfloat* value) {
  glUniformMatrix4fv(glGetUniformLocation(program, name.c_str()), count, transpose, value);
}
} // namespace SphereX
