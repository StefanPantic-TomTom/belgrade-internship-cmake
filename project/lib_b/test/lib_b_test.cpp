#include <iostream>
#include <cassert>

#include <lib_b/library.hpp>

namespace test
{
    int comparisson_test()
    {
        lib_a::Point a(1.0, 2.0);
        lib_a::Point b(3.0, 4.0);

        if ((lib_b::CalculateDistance(a, b) - 2.82842) > 1e-7)
        {
            std::cerr << "Error: CalculateDistance(a, b) != 2.82842." << std::endl;
            return 1;
        }

        return 0;
    }
}

int main()
{
    assert(test::comparisson_test() == 0);
    std::cout << "All tests passed." << std::endl;
    return 0;
}