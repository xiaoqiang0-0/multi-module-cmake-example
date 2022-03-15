cmake_minimum_required (VERSION 3.21)

project(multi-module-example)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/libs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(dynamic-library)
add_subdirectory(static-library)

link_directories(${PROJECT_BINARY_DIR}/lib)
#include(${PROJECT_BINARY_DIR}/export/dylib.cmake)
#include(${PROJECT_BINARY_DIR}/export/stlib.cmake)

add_executable(main src/main.cpp)

target_link_libraries(main PUBLIC static-library dynamic-library)