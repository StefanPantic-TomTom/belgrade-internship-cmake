#include <gtest/gtest.h>

#include <lib_a/library.hpp>

#include <iostream>
#include <cassert>

TEST(lib_a_test, initialization_test)
{
    lib_a::Point point(1.0, 2.0);
    EXPECT_EQ(point.GetX(), 1.0);
    EXPECT_EQ(point.GetY(), 2.0);
}
