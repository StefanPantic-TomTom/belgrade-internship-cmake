#include <lib_b/library.hpp>

namespace lib_b
{
    double CalculateDistance(const lib_a::Point &a, const lib_a::Point &b)
    {
        double dx = a.GetX() - b.GetX();
        double dy = a.GetY() - b.GetY();
        return sqrt(dx * dx + dy * dy);
    }
}