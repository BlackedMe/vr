#include "rendering/renderer.hpp"
#include "scene/entity.hpp"

namespace SphereX {

class BatchRenderer : public Renderer {
public:
  void init() override;   
  void add() override;
  void render(GLFWwindow* window) const override;  

private:
};
} // namespace SphereX
