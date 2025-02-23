cmake_minimum_required(VERSION 3.23)

project(lib_a_test)

set(SOURCES
  lib_a_test.cpp
)

add_executable(${PROJECT_NAME}
  ${SOURCES}
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    lib_a
)

add_test(
  NAME ${PROJECT_NAME}
  COMMAND ${PROJECT_NAME}
)
