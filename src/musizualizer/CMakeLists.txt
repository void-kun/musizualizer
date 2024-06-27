find_package(fmt REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glew REQUIRED)

project(musizualizer)

add_executable(${CMAKE_PROJECT_NAME} main.cpp main_window.cpp)

target_link_libraries(${CMAKE_PROJECT_NAME}
  PRIVATE
  fmt::fmt
  glfw
  GLEW::GLEW
)
