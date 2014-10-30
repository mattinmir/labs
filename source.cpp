/*
 * source.cpp
 *
 *  Created on: 30 Oct 2014
 *      Author: mm5213
 */

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include "helpers.h"

using namespace std;

int get_farthest_point(vector<point> points);

int main()
{

	vector<point> points;

	point p1(2, 2);
	point p2(3, 3);
	point p3(1, 1);

	points.push_back(p1);
	points.push_back(p2);
	points.push_back(p3);

	cout << "Farthest point index: " << get_farthest_point(points) << endl;

	char x, y;
	if(p1<p2)
		x = 'T';
	else
		x = 'F';
	if (p1==p2)
		y = 'T';
	else
		y = 'F';
	cout << "P1 < P2 is: " << x << endl;
	cout << "P1 == P2 is: " << y << endl;


	return 0;
}

int get_farthest_point(vector<point> points)
{
	int index = 0;
	for (int i = 1; i < points.size(); i++)
	{
		if (points[i].get_magnitude() > points[index].get_magnitude())
			index = i;
	}

	return index;
}
