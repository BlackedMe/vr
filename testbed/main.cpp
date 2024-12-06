#include "testbed.hpp"

int main() {
  TestBed testBed;
  testBed.init(800, 800, "SandBox");
  testBed.update();
}
