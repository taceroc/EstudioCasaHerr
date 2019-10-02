#include<cstdio>
#include<math.h>

typedef float REAL;

REAL f(REAL x);
REAL g(REAL x);

int main (void)

{
  const REAL pi = 3.141592654;
  REAL teta ;
  REAL x;

  for(teta = 0.0; teta <= 1.0; teta=teta+0.01)
    {
     x = teta * pi / 180;
     //std::printf("f(%.16f)= %.16f\n", x, f(x));
     //std::printf("g(%.16f)= %.16f\n", x, g(x));
     REAL a = fabs((g(x)-f(x))/ f(x));
     //std::printf("f(%.16f)-g(%.16f)\n = %.16f\n",f(x),g(x),a);
     std:: printf ("%24.16f %24.16e %24.16e %24.16e\n",teta, f(x), g(x), a);
    }

  return 0;
}

REAL f(REAL x)
{
  REAL f;
  f = sin (x) - 2.0 * pow(sin(x/2),2);
  return f;
}

REAL g(REAL x)
{
  REAL g;
  g = sin(x) - 1.0  + cos(x);
  return g;
}
