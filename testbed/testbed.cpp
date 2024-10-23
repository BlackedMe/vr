#include "testbed.hpp"

void TestBed::init(int width, int height, const std::string& title) {
  glfwHandler.init(width, height, title);
}

void TestBed::update() {
  renderer.render(glfwHandler.window());
}
