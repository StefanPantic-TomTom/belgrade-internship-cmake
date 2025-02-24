#include <lib_a/library.hpp>

#include <fmt/format.h>

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

std::ostream& operator<<(std::ostream& out, const lib_a::Point& point)
{
    out << fmt::format(FMT_STRING("Point(x={}, y={})"), point.GetX(), point.GetY());
    return out;
}
