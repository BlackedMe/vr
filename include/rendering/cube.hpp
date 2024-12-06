#pragma once
#include "rendering/shapes.hpp"
#include "glad/glad.h"

namespace SphereX {

class Cube : public Shape {
public:
  void create(float r);

  void render() const override;

private:
  GLuint vao;
};
} // namespace SphereX
