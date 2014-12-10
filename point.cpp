#include "point.hpp"
#include <string>
#include <iostream>
#include <sstream>


point::point() : x(0), y(0)
{
	magnitude = 0;
}

point::point(double ix, double iy) : x(ix), y(iy)
{
	set_magnitude();
}

point::~point()
{
	std::cout << '(' << x << ',' << y << ')' << ' ' << "Magnitude: " << magnitude << std::endl;
}

void point::set_x(double new_x)
{
	x = new_x;
	set_magnitude();
}

void point::set_y(double new_y)
{
	y = new_y;
	set_magnitude();
}

double point::get_x() const
{
	return x;
}

double point::get_y() const
{
	return y;
}

std::string point::get_point() const
{
	std::stringstream ss;
	std::string coord;

	ss << '(' << x << ',' << y << ')';
	ss >> coord;

	return coord;
}

double point::get_magnitude() const
{
	return magnitude;
}

double point::find_distance_to(point p2) const
{
	return sqrt(sq(x - p2.x) + sq(y - p2.y));
}

void point::reflect()
{
	x = -x;
	y = -y;
}

void point::translate(point p)
{
	x += p.x;
	y += p.y;
	set_magnitude();
}

bool operator== (point p1, point p2)
{
	return (p1.get_x() == p2.get_x()) && (p1.get_y() == p2.get_y());
}

bool operator< (point p1, point p2)
{
	return (p1.get_magnitude() < p2.get_magnitude());
}

bool operator>(point p1, point p2)
{
	return  (p1.get_magnitude() > p2.get_magnitude());
}


std::string point::str()
{
	std::string str;
	std::stringstream ss;
	ss << x << y;
	ss >> str;
	return str;
}

double point::sq(const double num) const
{
	return num * num;
}

void point::set_magnitude()
{
	magnitude = sqrt(x*x + y*y);
}