cmake_minimum_required(VERSION 3.23)

project(lib_b)

set(SOURCES
  src/library.cpp
)

set(HEADERS
  include/lib_b/library.hpp
)

add_library(${PROJECT_NAME} STATIC
  ${SOURCES}
  ${HEADERS}
)

target_include_directories(${PROJECT_NAME} 
  PUBLIC 
    include
)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
    lib_a
)

add_subdirectory(test)
