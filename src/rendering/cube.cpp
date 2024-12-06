#include "rendering/cube.hpp"
#include "glad/glad.h"

namespace SphereX {

void Cube::create(float r) {
  float vertices[24] = {
    // front face
    -r, -r, r,
     r, -r, r,
     r,  r, r,
    -r,  r, r,

    // back face
    -r, -r, -r,
     r, -r, -r,
     r,  r, -r,
    -r,  r, -r,
  };  

  unsigned int indices[36] = {
    // front face
    0, 1, 2,
    2, 3, 0,

    // back face
    5, 4, 7,
    7, 6, 5,

    // left face
    4, 7, 3,
    3, 0, 4,

    // right face
    1, 5, 6,
    6, 2, 1,

    // top face
    3, 2, 6,
    6, 7, 3,

    // bottom face
    0, 1, 5,
    5, 4, 0
  };

  GLuint vbo = 0, ebo = 0;

  glGenVertexArrays(1, &vao);
  glBindVertexArray(vao);

  glGenBuffers(1, &vbo);
  glBindBuffer(GL_ARRAY_BUFFER, vbo);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), &vertices[0], GL_DYNAMIC_DRAW);

  glGenBuffers(1, &ebo);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), &indices[0], GL_STATIC_DRAW);

  glEnableVertexAttribArray(0);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

  glBindVertexArray(0);
}

void Cube::render() const {
  glBindVertexArray(vao);
  glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, 0);
}
} //namespace SphereX
