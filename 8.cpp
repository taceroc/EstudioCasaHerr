#include<cstdio>
#include <stdio.h>
#include<math.h>

typedef double REAL;

REAL f(REAL x);
REAL g(REAL x);
REAL h(REAL x);
int main(void)

{
  REAL x ;
  //std::printf("f(%.16f) = %.16f\n", x, f(x));
  int a = 0;
  
  for(x = 1; x < 100.0; x = x/10.0 )
       {
	 std::printf("%5d f(%.16f) = %.16f & g(%.16f) = %.16f & h(%.16f) = %.16f\n",a, x, f(x), x ,g(x),x,h(x));
	  a++;
	  if(a==16)
	    break;
       }      
}

REAL f(REAL x)
{
  REAL f;
  f = (x - sin(x))/ (pow(x,3));
  return f;
}

REAL g(REAL x)
{
  REAL g;
  g = (pow(x,2) - pow(sin(x),2)) / (pow(x,3)*(x+sin(x)));
  return g;
}

REAL h(REAL x)
{
  REAL h;
  h = (1/(x*x)) * (1 - (sin(x)*sin(x)/(x*x)))/(1+(sin(x)/x));
  return h;
}

