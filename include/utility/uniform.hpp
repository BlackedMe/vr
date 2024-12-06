#include "glad/glad.h"
#include <string>

namespace SphereX {

void uniformMatrix4fv(const std::string& name, GLuint program, GLsizei count, GLboolean transpose, const GLfloat* value);
} // namespace SphereX
