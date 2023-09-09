cmake_minimum_required (VERSION 3.24)
project (test)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)

add_executable(test
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tests/MyClassTest.cpp
)

add_subdirectory(${PROJECT_SOURCE_DIR}/lib)
add_library(GTest::GTest INTERFACE IMPORTED)
target_compile_options(test PRIVATE -std=c++17 -Wall)
# target_compile_options(test PRIVATE -std=c++17 -Wall -fprofile-instr-generate -fcoverage-mapping)
# target_link_options(test PRIVATE -fprofile-instr-generate -fcoverage-mapping)
target_link_libraries(test PRIVATE pthread lib GTest::GTest)
target_link_libraries(GTest::GTest INTERFACE gtest_main)
