#pragma once

#include <fstream>
#include <string>

namespace lib_a
{
    class Point
    {
    public:
        explicit Point(double x, double y);

        double GetX() const;

        double GetY() const;

    private:
        double m_x;
        double m_y;
    };
}

std::ostream& operator<<(std::ostream& out, const lib_a::Point& point);
