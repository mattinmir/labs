/*
 * classHeader.cpp
 *
 *  Created on: 6 Nov 2014
 *      Author: mm5213
 */
#include <string>
#include <cmath>
#include <sstream>

/*
 * classHeader.h
 *
 *  Created on: 6 Nov 2014
 *      Author: mm5213
 */

#ifndef CLASSHEADER_H_
#define CLASSHEADER_H_

#include <string>

class point
{
public:

	point(double ix, double iy);

	void set_x(double new_x);

	void set_y(double new_y);

	double get_x();

	double get_y();

	std::string get_point();

	double get_magnitude();

	double find_distance_to(point p2);

	void reflect();

	void translate(point p);

	std::string str();

	bool operator== (point p);

	bool operator< (point p);

	bool operator> (point p);

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


#endif /* CLASSHEADER_H_ */

