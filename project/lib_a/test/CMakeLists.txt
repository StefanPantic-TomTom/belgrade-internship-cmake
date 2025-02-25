cmake_minimum_required(VERSION 3.23)

project(lib_a_test)

find_package(GTest REQUIRED)

set(SOURCES
  lib_a_test.cpp
)

add_executable(${PROJECT_NAME}
  ${SOURCES}
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    lib_a
    GTest::gtest
    GTest::gtest_main
)

add_test(
  NAME ${PROJECT_NAME}
  COMMAND ${PROJECT_NAME}
)
