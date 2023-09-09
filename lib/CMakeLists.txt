cmake_minimum_required (VERSION 3.16)
project (lib)

add_library(lib STATIC ${CMAKE_CURRENT_SOURCE_DIR}/MyClass.cpp)
target_compile_options(lib PRIVATE -std=c++17 -Wall)
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
