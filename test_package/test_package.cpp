#include <lib_a/library.hpp>
#include <lib_b/library.hpp>

#include <iostream>

int main()
{
  lib_a::Point a(1.0, 2.0);
  lib_a::Point b(4.0, 6.0);
  std::cout << "Distance between " << a << " and " << b << " is " << lib_b::CalculateDistance(a, b) << std::endl;
  return 0;
}
