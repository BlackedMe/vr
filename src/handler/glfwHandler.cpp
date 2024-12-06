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
  m_aspectRatio = (float) width/height;

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

  glfwSetFramebufferSizeCallback(m_window, [](GLFWwindow* window, int w, int h) {
    glViewport(0, 0, w, h);
  });

  glfwMakeContextCurrent(m_window);

  if(!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
    std::cout << "Failed to initialize glad!" << '\n';
    return;
  }

  int w, h;
  glfwGetFramebufferSize(m_window, &w, &h);
  glViewport(0, 0, w, h);
}

GLFWwindow* GLFWHandler::window() const {
  return m_window;
}
} // namespace SphereX
