#include "triangle.hpp"
#include "point.hpp"
#include <cmath>

triangle::triangle(point ip1, point ip2, point ip3) : p1(ip1), p2(ip2), p3(ip3)
{	}
 
double triangle::get_area() const
{
	return 0.5 * p1.find_distance_to(p2) * sqrt(pow(p1.find_distance_to(p3), 2) - pow(0.5 * p1.find_distance_to(p2), 2)); // 0.5 * base * height
}

double triangle::get_perimeter(triangle tri)
{
	return p1.find_distance_to(p2) + p2.find_distance_to(p3) + p3.find_distance_to(p1);
}

void triangle::translate(point vector)
{
	p1.set_x(p1.get_x() + vector.get_x());
	p1.set_y(p1.get_y() + vector.get_y());
	p2.set_x(p2.get_x() + vector.get_x());
	p2.set_y(p2.get_y() + vector.get_y());
	p3.set_x(p3.get_x() + vector.get_x());
	p3.set_y(p3.get_y() + vector.get_y());
}