#include "functions.hpp"

int get_farthest_point(const std::vector<point> &points)
{
	int index = 0;
	for (unsigned int i = 1; i < points.size(); i++)
	{
		if (points[i].get_magnitude() > points[index].get_magnitude())
			index = i;
	}

	return index;
}

int member_point(const std::vector<point> &v, const point p, bool ordered = false)
{
	if (ordered)
		return member_point_binsearch(v, p, 0, v.size() - 1);
	else
		return member_point_unordsearch(v, p);
}

int member_point_unordsearch(const std::vector<point> &v, point p)
{
	unsigned int index = 0;

	for (index = 0; index < v.size(); index++)
	{
		if (v.at(index) == p)
			return index;
	}

	return v.size();
}

int member_point_binsearch(const std::vector<point> &v, const point p, int imin, int imax)
{
	if (imax <= imin)
		return v.size();
	else
	{
		int imid = (imax - imin) / 2;
		if (v.at(imid) > p)
			return member_point_binsearch(v, p, imin, imid - 1);
		else if (v.at(imid) < p)
			return member_point_binsearch(v, p, imid + 1, imax);
		else
			return imid;
	}
}

void pointdup(const std::vector<point> &v1, const std::vector<point> &v2, std::vector<point> &v3, bool v2_ordered)
{

	for (unsigned int i = 0; i < v1.size(); i++)
	{
		if (member_point(v2, v1.at(i), v2_ordered))
			v3.push_back(v1.at(i));
	}
}
