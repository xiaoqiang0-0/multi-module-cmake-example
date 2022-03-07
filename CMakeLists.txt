cmake_minimum_required (VERSION 3.21)

project(multi-module-example)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(dynamic-library)
add_subdirectory(static-library)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

add_executable(main src/main.cpp)

target_link_libraries(main PUBLIC static-library dynamic-library)