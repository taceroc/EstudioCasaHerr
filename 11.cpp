#include <cstdio>
#include <iostream>
#include <math.h>

double fac(double N);
int main (void)
{
  
  double N =  25;
  double term;
  double sum = 1;
  double sum1;
  double x = -1;
  double ex = exp(x);

  double z = x / log(2);
  int  m = (int) (z+0.5);
  int m1 = (int) (z-0.5);
  std::cout << m <<" \n";
  double w = z - m;
  double w1 = z - m1;
  double u = w * log(2);
  double u1 = w1 * log(2);


  if(x > 0)
    {
      for (double n = 1; n <=N; n++)
        {
          term  = pow(u,n)/fac(n);
          sum = term + sum;
	  sum1 = sum * pow (2,m);
	  double relativ = abs((ex - sum1))/ex;
          double absolut = abs((ex - sum1));
	  std::printf( "%.4f %.16f %.16f  %.2e %.2e \n " ,n , ex, sum1, relativ, absolut);
	  if(abs(sum1 - ex)<1e-6){
	      break;}
        }
    }
  else
    {
      double sign = -1.0;
      for (double n = 1; n <=N; n++)
        {
          term  = sign * pow(-u1,n)/fac(n);
          sum = term + sum;
	  sum1 = sum * pow(2,m1);
	  sign = -1 * sign;
	  double relativ1 = abs((ex - sum1))/ex;
          double absolut1 = abs((ex - sum1));
	  std::printf("%10.4f  %10.16f  %10.16f  %10.6e %10.6e \n " ,n , ex, sum1, relativ1, absolut1);
	  if(abs(sum1 - ex)<1e-6){
	    break; }
        }
    }

  return 0;
}



double fac(double N)
{
  double fac = 1.0; 
  if(N == 0)
    {
      fac = 1.0;
    }
 
  for (double i = 1.0; i<= N; i++)
    {
     fac = fac*i;
    }
  return fac;
}
