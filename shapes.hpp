#ifndef SHAPES_H_
#define SHAPES_H_

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

class point
{
public:

	point();

	point(double ix, double iy);

	~point();

	void set_x(double new_x);

	void set_y(double new_y);
	
	double get_x() const;

	double get_y() const;

	std::string get_point() const;

	double get_magnitude() const;

	double find_distance_to(point p2) const;

	void reflect();

	void translate(point p);

	std::string str();

private:
	double x;
	double y;
	double magnitude;

	double sq(double num) const;

	void set_magnitude();
};

bool operator== (point p1, point p2);

bool operator< (point p1, point p2);

bool operator> (point p1, point p2);

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



#endif /* SHAPES_H_ */

