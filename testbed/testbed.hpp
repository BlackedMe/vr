#define GLFW_INCLUDE_NONE
#include "core/application.hpp"
#include "handler/glfwHandler.hpp"
#include "handler/program.hpp"
#include "rendering/renderer.hpp"

class TestBed : public SphereX::Application {
public:
  void init(int width, int height, const std::string& title) override;
  void update() override;

private:
  SphereX::GLFWHandler glfwHandler;
  SphereX::Renderer renderer;
  SphereX::Program program;
};
