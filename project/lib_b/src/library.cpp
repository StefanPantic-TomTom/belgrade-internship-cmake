#include <lib_b/library.hpp>

#include <boost/geometry.hpp>

namespace lib_b
{
    double CalculateDistance(const lib_a::Point &a, const lib_a::Point &b)
    {
        namespace bg = boost::geometry;

        // Create Boost.Geometry point objects from std::pair
        bg::model::point<double, 2, bg::cs::cartesian> lhs(a.GetX(), a.GetY());
        bg::model::point<double, 2, bg::cs::cartesian> rhs(b.GetX(), b.GetY());
        // Calculate distance between the points
        return bg::distance(lhs, rhs);
    }
}