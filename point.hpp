#ifndef POINT_HPP
#define POINT_HPP

#include <string>

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

#endif // !POINT_HPP
