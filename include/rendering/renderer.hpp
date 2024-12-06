#include "rendering/cube.hpp"
#include "GLFW/glfw3.h"

namespace SphereX {

class Renderer {
public:
  void init();
  void render(GLFWwindow* window) const;

private:
  Cube cube;
};
} // namespace SphereX
