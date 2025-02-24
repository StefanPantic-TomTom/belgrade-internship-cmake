cmake_minimum_required(VERSION 3.23)

project(lib_a)

find_package(fmt REQUIRED)

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

target_link_libraries(${PROJECT_NAME} 
  PRIVATE 
    fmt::fmt
)

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY include DESTINATION ${PROJECT_NAME})

add_subdirectory(test)
