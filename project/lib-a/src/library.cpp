#include <lib_a/library.hpp>

namespace lib_a
{
    Point::Point(double x, double y)
        : m_x(x)
        , m_y(y)
    {
    }

    double Point::GetX() const
    {
        return m_x;
    }

    double Point::GetY() const
    {
        return m_y;
    }
}

std::ofstream& operator<<(std::ofstream& out, const lib_a::Point& point)
{
    return out << "Point(x=" << point.GetX() << ", y=" << point.GetY() << ")";
}
