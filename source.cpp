#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include "classHeader.hpp"

using namespace std;

int get_farthest_point(vector<point> points);
int member_point_unordsearch(point p, vector<point> v);
int member_point_binsearch(point p, vector<point> v);


int main()
{
	vector<point> points;

	point p1(2, 2);
	point p2(3, 3);
	point p3(1, 1);
	point p4(8, 7);
	point p5(3, 4);
	point p6(-6, 1);

	points.push_back(p1);
	points.push_back(p2);
	points.push_back(p3);
	points.push_back(p4);
	points.push_back(p5);
	points.push_back(p6);

	cout << member_point_unordsearch (point(4,3), points)<< endl;
	return 0;
}

int get_farthest_point(vector<point> points)
{
	int index = 0;
	for (unsigned int i = 1; i < points.size(); i++)
	{
		if (points[i].get_magnitude() > points[index].get_magnitude())
			index = i;
	}

	return index;
}

int member_point_unordsearch(point p, vector<point> v)
{
	unsigned int index = 0;

	for (index = 0; index < v.size(); index++)
	{
		if (v.at(index) == p)
				return index;
	}

	return v.size();
}
/*
int member_point_binsearch(vector<point> v, point p, int imin, int imax)
{

	// test if array is empty
	  if (imax < imin)
	    // set is empty, so return value showing not found
	    return v.size();
	  else
	    {
	      // calculate midpoint to cut set in half
	      int imid = (imax - imin) / 2;

	      // three-way comparison
	      if (v[imid] > key)
	        // key is in lower subset
	        return member_point_binsearch(v, key, imin, imid-1);
	      else if (v[imid] < key)
	        // key is in upper subset
	        return binary_search(A, key, imid+1, imax);
	      else
	        // key has been found
	        return imid;
	    }


}*/
