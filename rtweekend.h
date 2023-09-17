#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>

using std::make_shared;
using std::shared_ptr;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees)
{
    return degrees * pi / 180.0;
}

// CUR What's inline?
// REF https://www.geeksforgeeks.org/inline-functions-cpp/
inline double random_double()
{
    // returns a random real in [0, 1]
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max)
{
    return min + (max - min) * random_double();
}

#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif