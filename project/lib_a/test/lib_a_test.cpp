#include <iostream>
#include <cassert>

#include <lib_a/library.hpp>

namespace test
{
    int initialization_test()
    {
        lib_a::Point point(1.0, 2.0);

        if (point.GetX() != 1.0)
        {
            std::cerr << "Error: point.GetX() != 1.0." << std::endl;
            return 1;
        }

        if (point.GetY() != 2.0)
        {
            std::cerr << "Error: point.GetY() != 2.0." << std::endl;
            return 1;
        }

        return 0;
    }
}

int main()
{
    assert(test::initialization_test() == 0);
    std::cout << "All tests passed." << std::endl;
    return 0;
}
