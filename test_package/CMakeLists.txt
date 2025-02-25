project(belgrade_internship_test_package)

find_package(belgrade_internship REQUIRED COMPONENTS lib_a lib_b)

add_executable(${PROJECT_NAME}
  test_package.cpp
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    belgrade_internship::lib_a
    belgrade_internship::lib_b
)

enable_testing()
add_test(
  NAME ${PROJECT_NAME}
  COMMAND ${PROJECT_NAME}
)
