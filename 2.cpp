#include <cstdio>
#include <math.h>

double f(double x, double a, double b, double c);

int main(void)

{
  double a = 1;
  double b = 5;
  double c = 6;
  double discrim;
  double realpart;
  double imgpart;
  double x1, x2;
  discrim = b*b - 4*a*c;


  if(discrim > 0)
    {
      x1 =(-2*c)/ (b + sqrt(discrim));
      x2 =(-2*c)/ (b - sqrt(discrim));
      std::printf("La raiz positiva es = %.16f\n", x1);
      std::printf("La raiz negativa es = %.16f\n", x2);

      std::printf("f(%.16f) = %f\n",x1,f(x1,a,b,c));
      std::printf("f(%.16f) = %f\n",x2,f(x2,a,b,c));

    }
  else if(discrim == 0)
    {
      x1 = -b/(2*a);
      x2 = -b/(2*a);

      std::printf("La raiz positiva es = %.16f\n", x1);
      std::printf("La raiz negativa es = %.16f\n", x2);
      std::printf("Las raices son iguales y reales\n");

      std::printf("f(%.16f) = %f\n",x1,f(x1,a,b,c));
      std::printf("f(%.16f) = %f\n",x2,f(x2,a,b,c));

    }
  else
    {
      realpart = -b/(2*a);
      imgpart = sqrt(-discrim)/ (2*a);
      std::printf("x1 = %.16f + i %.16f \n ", realpart, imgpart);
      std::printf("x2 = %.16f - i %.16f \n ", realpart, imgpart);
      std::printf("Las raices son complejas\n");
    }

  
  return 0;
}

double f(double x, double a, double b,double c)
{
  double f;
  f = a * (pow(x,2)) + b * x + c;
  return f;
}
