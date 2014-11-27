#ifndef "FUNCTIONS_H"
#define "FUNCTIONS_H"

#include <vector>
#include "shapes.hpp"

int get_farthest_point(const std::vector<point> &points);

int member_point(const std::vector<point> &v, const point p, bool ordered);

int member_point_unordsearch(const std::vector<point> &v, const point p);

int member_point_binsearch(const std::vector<point> &v, const point p, int imin, int imax);

void pointdup(const std::vector<point> &v1, const std::vector<point> &v2, std::vector<point> &v3, bool v2_ordered);

#endif
