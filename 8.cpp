#include<cstdio>
#include <stdio.h>
#include<math.h>


double f(double x);

int main(void)

{
  double x = 1;
  std::printf("f(%.16f) = %.16f\n", x, f(x));
  int a = 0;
  
  for(x = 1; x < 10; x = x-(x/10))
       {
         std::printf("%d) f(%.16f) = %.16f\n",a, x, f(x));
	  a++;
	  if(a==16)
	    break;
       }      
}

double f(double x)
{
  double f;
  f = (x - sin(x))/ (pow(x,3));
  return f;
}
