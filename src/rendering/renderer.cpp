#include "handler/program.hpp"
#include "rendering/renderer.hpp"
#include "GLFW/glfw3.h"
#include <iostream>

namespace SphereX {

void Renderer::init() {
  cube.create(0.25f);
}

void Renderer::render(GLFWwindow* window) const {
  while (!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);
    int w, h;
    glfwGetFramebufferSize(window, &w, &h);
    std::cout << w << ' ' << h << '\n';
    
    cube.render();

    glfwSwapBuffers(window);

    glfwPollEvents();
  }
}
} // namespace SphereX
