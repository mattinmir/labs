#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "point.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"
#include "functions.hpp"

using namespace std;

int main(int argc, char *argv[])
// argv = {-, point file 1, point file 2, is point file 2 ordered bool}
{
	ifstream infile;
	string line;
	vector<point> v;
	vector<point*> ppv;
	double x, y;

	infile.open(argv[1]);
	if (!infile.is_open())
	{
		cout << "Could not open file" << endl;
		exit(EXIT_FAILURE);
	}
	while (infile >> x >> y) 
	{
		v.push_back(point(x, y));
		cout << endl << endl << "Size: " << v.size() << endl << "Capacity: " << v.capacity() << endl;
	}
	infile.close();

	infile.open(argv[1]);
	if (!infile.is_open())
	{
		cout << "Could not open file" << endl;
		exit(EXIT_FAILURE);
	}
	while (infile >> x >> y)
	{
		ppv.push_back(new point(x, y));
		ppv.back()->reflect();
		cout << endl << endl << "Size: " << ppv.size() << endl << "Capacity: " << ppv.capacity() << endl;
	} 
	infile.close();


	for (int i = 0; i < 10; i++)
		cout << '-' << endl;
	cout << endl << endl;


	triangle t(point(1, 2), point(3, 4), point(5, 6));
	rectangle r(point(1, 2), point(3, 4), point(5, 6), point(7, 8));

	cout << "triangle area: " << t.get_area() << endl;
	cout << "rectangle area: " << r.get_area() << endl;


	return 0;
}
