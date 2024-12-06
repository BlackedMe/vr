#include "testbed.hpp"

void TestBed::init(int width, int height, const std::string& title) {
  glfwHandler.init(width, height, title);

  renderer.init();

  program.init("../testbed/glsl/vertex.glsl", "../testbed/glsl/frag.glsl", (float) width/height);
  program.use();
}

void TestBed::update() {
  renderer.render(glfwHandler.window());
}
