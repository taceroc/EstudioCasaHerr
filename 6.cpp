#include<cstdio>
#include<math.h>

//typedef float REAL;

float f(float x);
float g(float x);

int main (void)

{
  const float pi = 3.141592654;
  float teta ;
  float x;

  for(teta = 0.0; teta <= 45; teta=teta+1)
    {
     x = teta * pi / 180;
     //std::printf("f(%.16f)= %.16f\n", x, f(x));
     //std::printf("g(%.16f)= %.16f\n", x, g(x));
     float a = fabs((g(x)-f(x))/ f(x));
     //std::printf("f(%.16f)-g(%.16f)\n = %.16f\n",f(x),g(x),a);
     std:: printf ("%24.16f %24.16e %24.16e %24.16e\n",teta, f(x), g(x), a);
    }

  return 0;
}

float f(float x)
{
  float f;
  f = sin (x) - 2.0 * pow(sin(x/2),2);
  return f;
}

float g(float x)
{
  float g;
  g = sin(x) - 1.0  + cos(x);
  return g;
}
