#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "point.hpp"
#include "shape.hpp"

class rectangle : public shape
{
public:
	rectangle(point ip1, point ip2, point ip3, point ip4);

	double get_area() const;

private:
	point p1;
	point p2;
	point p3;
	point p4;
};



#endif // !RECTANGLE_HPP
