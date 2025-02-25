cmake_minimum_required(VERSION 3.23)

project(lib_b_test)

find_package(GTest REQUIRED)

set(SOURCES
  lib_b_test.cpp
)

add_executable(${PROJECT_NAME}
  ${SOURCES}
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    lib_b
    GTest::gtest
    GTest::gtest_main
)

add_test(
  NAME ${PROJECT_NAME}
  COMMAND ${PROJECT_NAME}
)
