#include <cstdio>
#include <math.h>

double f(double x, double a, double b, double c);

int main(void)

{
  double a = 1e-17;
  double b = -1e17;
  double c = 1e17;
  double x;
  double x1; double x2; double x11; double x22;

  if(a!=0)
    {
     x11 = b+(sqrt(pow(b,2)-4*a*c));
     x1  = (-2*c)/x11;  
    
     x22 = b-(sqrt(pow(b,2)-4*a*c));
     x2  = (-2*c)/x22;

    std::printf("La raiz positiva es = %.16f\n", x1);
    std::printf("La raiz negativa es = %.16f\n", x2);

    std::printf("f(%.16f) = %f\n",x1,f(x1,a,b,c));
    std::printf("f(%.16f) = %f\n",x2,f(x2,a,b,c));
    }

  else
   {
     if(b!=0)
       {
          x1 = -c/b;
          std::printf("La raiz es = %f\n", x1);
          std::printf("f(%f) = %f\n",x1,f(x1,a,b,c));
       }
     else
       {
	 if(c==0)
	   {
	     std:: printf("x puede ser cualquier numero ya que f(x) = %f\n", f(x,a,b,c));
	   }
	 else
	   {
	     std:: printf("La ecuacion no tiene solucion ya que f(x) = %f\n", f(x,a,b,c));
	   }
       }
   }
  return 0;
}

double f(double x, double a, double b,double c)
{
  double f;
  f = a * (pow(x,2)) + b * x + c;
  return f;
}
