#include "testbed.hpp"

int main() {
  TestBed testBed;
  testBed.init(800, 600, "SandBox");
  testBed.update();
}
