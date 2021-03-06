
#ifndef DELAUNAY_UTILS_H
#define DELAUNAY_UTILS_H

#include <algorithm>


template<class container, class element>
bool contains(const container& c, const element& e)
{
  return (std::find(c.begin(), c.end(), e) != c.end());
}


#endif // DELAUNAY_UTILS_H
