#include "utility/parser.hpp"
#include <fstream>
#include <iostream>
#include <string>

namespace SphereX {

std::string parseFromFile(const std::string& path) {
  std::ifstream file; 

  file.open(path);

  if(!file.is_open()) {
    std::cout << "Failed to open file at " << path << '\n';
  }

  std::string res;
  std::string currentLine;

  while(std::getline(file, currentLine)) {
    res += currentLine;
    res += '\n';
  }
  return res;
}
} // namespace SphereX
