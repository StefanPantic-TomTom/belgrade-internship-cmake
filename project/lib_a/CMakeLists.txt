cmake_minimum_required(VERSION 3.23)

project(lib_a)

set(SOURCES
  src/library.cpp
)

set(HEADERS
  include/lib_a/library.hpp
)

add_library(${PROJECT_NAME} STATIC
  ${SOURCES}
  ${HEADERS}
)

target_include_directories(${PROJECT_NAME} 
  PUBLIC 
    include
)

add_subdirectory(test)
