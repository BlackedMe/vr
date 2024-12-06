#include "glm/ext/matrix_float4x4.hpp"

namespace SphereX {

class Rigidbody {
public:
private:
  float mass;
  glm::mat4 I;

  // computed variables
  glm::vec3 force;
  glm::vec3 torque;
};
} // namespace SphereX
