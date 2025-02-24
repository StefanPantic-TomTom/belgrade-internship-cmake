cmake_minimum_required(VERSION 3.23)

project(HelloCMake)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_check_compiler()
conan_output_dirs_setup()
conan_set_find_paths()
conan_set_fpic()
conan_set_std()
conan_set_libcxx()

enable_testing()
add_subdirectory(project)