#include "rendering/renderer.hpp"
#include "GLFW/glfw3.h"

namespace SphereX {

void Renderer::render(GLFWwindow* window) const {
  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    glfwSwapBuffers(window);

    glfwPollEvents();
  }
}
} // namespace SphereX
