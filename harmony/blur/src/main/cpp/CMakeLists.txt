# the minimum version of CMake
cmake_minimum_required(VERSION 3.13)
set(CMAKE_VERBOSE_MAKEFILE on)

file(GLOB rnoh_blur_SRC CONFIGURE_DEPENDS *.cpp)
add_library(rnoh_blur SHARED ${rnoh_blur_SRC})
target_include_directories(rnoh_blur PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(rnoh_blur PUBLIC rnoh)