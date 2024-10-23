#define GLFW_INCLUDE_NONE
#include "handler/glfwHandler.hpp"
#include "GLFW/glfw3.h"
#include "glad/glad.h"
#include <iostream>

namespace SphereX {

GLFWHandler::~GLFWHandler() {
  glfwTerminate();
}

void GLFWHandler::init(int width, int height, const std::string& title) {
  if (!glfwInit()) {
    std::cout << "Failed to initialize GLFW!" << '\n';
    return;
  }

  m_window = glfwCreateWindow(width, height, title.c_str(), 0, 0);

  if (!m_window) {
    std::cout << "Failed to create a window!";
    glfwTerminate();
    return;
  }

  glfwMakeContextCurrent(m_window);

  if(!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
    std::cout << "Failed to initialize glad!" << '\n';
    return;
  }
}

GLFWwindow* GLFWHandler::window() const {
  return m_window;
}
} // namespace SphereX
