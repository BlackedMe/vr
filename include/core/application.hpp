#include <string>

namespace SphereX {

class Application {
public:
  virtual void init(int width, int height, const std::string& title) = 0;
  virtual void update() = 0;
};
} // namespace SphereX
