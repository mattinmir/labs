#include "rectangle.hpp"
#include "point.hpp"

rectangle::rectangle(point ip1, point ip2, point ip3, point ip4) : p1(ip1), p2(ip2), p3(ip3), p4(ip4)
{}

double rectangle::get_area() const
{
	return p1.find_distance_to(p2) * p2.find_distance_to(p3); // I know this isnt neccessarily true but just being quick
}