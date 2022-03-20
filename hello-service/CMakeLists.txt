cmake_minimum_required (VERSION 3.21)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)


add_executable(hello-example src/main.cpp)

add_dependencies(hello-example static-library dynamic-library)

target_link_libraries(hello-example static-library dynamic-library)
