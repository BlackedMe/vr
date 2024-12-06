#include "glad/glad.h"
#include <string>

namespace SphereX {

class Program {
public:
  void init(const std::string& vShaderSrc, const std::string& fShaderSrc, float aspectRatio);

  void use() const;

  GLuint program() const;

private:
  GLuint m_program;
};

} // namespace SphereX
