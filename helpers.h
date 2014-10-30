/*
 * header.h
 *
 *  Created on: 30 Oct 2014
 *      Author: mm5213
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <string>
#include <cmath>
#include <sstream>
#include <iostream>

class point
{
	friend bool operator== (const point &p1, const point &p2); //Not a member function, just telling the class it should allow this function to access its private variables.

public:

	point(double ix, double iy);

	void set_x(double new_x);

	void set_y(double new_y);

	double get_x();

	double get_y();

	std::string get_point();

	double get_magnitude()const;

	double find_distance_to(point p2);

	void reflect();

	void translate(point p);

	std::string str();

private:
	double x;
	double y;
	double magnitude;

	double sq(double num);

	void set_magnitude();
};

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

bool operator< (const point &p1, const point &p2);
std::ostream& operator<<(std::ostream &out, const point &p);

#endif /* HEADER_H_ */
