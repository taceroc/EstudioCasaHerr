#include<cstdio>
#include<math.h>

double I(double y, double x);
double Iy(double y, double x);

int main(void)

{
  double x = 0.999999;
  double y = 1;
  
  if(y != -1)
    { 
     std::printf("I(y=%.16f, x=%.16f) = %.16f\n", y,x,I(y,x));
    }
  else
    {
     std::printf("I(y=%.16f, x=%.16f) = %.16f\n", y,x,Iy(y,x));
    }
  return 0;
}


double I(double y, double x)
{
  double I;
  I = - pow(1,y+1)/(y+1) + pow (x,y+1)/(y+1);
  return I;
}

double Iy(double y, double x)
{
  double Iy  = log(x) - log(1);
  return Iy;
}
