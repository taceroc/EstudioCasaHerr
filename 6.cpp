#include<cstdio>
#include<math.h>


double f(double x);
double g (double x);

int main (void)

{
  const double pi = 3.141592654;
  double teta ;
  double x;

  for(teta = 0; teta <= 1; teta=teta+0.0001)
    {
     x = teta * pi / 180;
     std::printf("f(%.16f)= %.16f\n", x, f(x));
     std::printf("g(%.16f)= %.16f\n", x, g(x));
     double a = f(x)-g(x);
     std::printf("f(%.16f)-g(%.16f)\n = %.16f\n",f(x),g(x),a);
    }

  return 0;
}

double f(double x)
{
  double f;
  f = sin (x) - 2 * pow(sin(x/2),2);
  return f;
}

double g(double x)
{
  double g;
  g = sin(x) - 1  + cos(x);
  return g;
}
