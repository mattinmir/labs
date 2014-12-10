#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "point.hpp"

class triangle
{
public:

	triangle(point ip1, point ip2, point ip3);

	double get_perimeter(triangle tri);

	void translate(point vector);

private:
	point p1;
	point p2;
	point p3;
};

#endif // !TRIANGLE_HPP
