cmake_minimum_required(VERSION 3.30.5)
set(CMAKE_CXX_STANDARD 17)
project(SphereX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

file(GLOB handler "src/handler/*.cpp")
file(GLOB rendering "src/rendering/*.cpp")

add_executable(testbed "testbed/main.cpp" "testbed/testbed.cpp" ${handler} ${rendering})

add_subdirectory(deps/glad)
add_subdirectory(deps/glfw)

find_package(OpenGL REQUIRED)
target_link_libraries(testbed glad glfw OpenGL::GL)
target_include_directories(testbed PRIVATE "deps/glad/include" PRIVATE "deps/glfw/include" PRIVATE "include")
