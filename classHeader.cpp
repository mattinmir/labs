/*
 * classHeader.h
 *
 *  Created on: 6 Nov 2014
 *      Author: mm5213
 */
#include "classHeader.hpp"

point::point(double ix, double iy) : x(ix), y(iy)
{
	set_magnitude();
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


std::string point:: str()
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


triangle::triangle(point ip1, point ip2, point ip3) : p1(ip1), p2(ip2), p3(ip3)
{	}

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

