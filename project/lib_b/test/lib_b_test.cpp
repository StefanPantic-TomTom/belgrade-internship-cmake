#include <gtest/gtest.h>

#include <lib_b/library.hpp>

#include <iostream>
#include <cassert>

TEST(lib_b_test, comparisson_test)
{
    lib_a::Point a(1.0, 2.0);
    lib_a::Point b(3.0, 4.0);
    EXPECT_NEAR(lib_b::CalculateDistance(a, b), 2.8284271247461903, 1e-7);
}
