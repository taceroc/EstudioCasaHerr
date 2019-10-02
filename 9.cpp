#include <cstdio>
#include <math.h>

typedef float REAL;


REAL f (REAL x);
REAL g (REAL x);

int main (void)
{
  for(REAL x = 0.0; x<=1.0; x = x + 0.01)
    {
      std::printf("f(%.16f) = %.16f & g(%.16f) = %.16f \n", x, f(x),x,g(x));
    }

  return 0;
}


REAL f (REAL x)
{
  REAL f;
  f = 5.0 - sqrt (25.0 + pow(x,2));
  return f;
}

REAL g (REAL x)
{
  REAL g;
  g = - (pow(x,2)) / (5.0 + sqrt (25 + pow(x,2)));
  return g;
}
