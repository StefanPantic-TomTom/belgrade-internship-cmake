cmake_minimum_required(VERSION 3.23)

project(lib_b)

find_package(Boost REQUIRED COMPONENTS headers)

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
  PRIVATE
    Boost::headers
)

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY include DESTINATION ${PROJECT_NAME})

add_subdirectory(test)
