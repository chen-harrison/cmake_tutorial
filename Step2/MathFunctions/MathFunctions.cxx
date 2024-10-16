#include "MathFunctions.h"

// TODO 11: include cmath
#include <cmath>
#include <iostream>

// TODO 10: Wrap the mysqrt include in a precompiled ifdef based on USE_MYMATH
#ifdef USE_MYMATH
  #include "mysqrt.h"
#endif

namespace mathfunctions {
double sqrt(double x)
{
  // TODO 9: If USE_MYMATH is defined, use detail::mysqrt.
  // Otherwise, use std::sqrt.
  #ifdef USE_MYMATH
    std::cout << "using detail::mysqrt()\n";
    return detail::mysqrt(x);
  #else
    std::cout << "using std::sqrt()\n";
    return std::sqrt(x);
  #endif
}
}
