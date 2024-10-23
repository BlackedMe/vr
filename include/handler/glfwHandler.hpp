#include "GLFW/glfw3.h"
#include <string>

namespace SphereX {

// Handles the window created by GLFW
class GLFWHandler {
public:
  ~GLFWHandler();

  void init(int width, int height, const std::string& title);

  GLFWwindow* window() const;

private:
  GLFWwindow* m_window;
};
} // namespace SphereX
