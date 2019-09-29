#include <cstdio>
#include <math.h>


double fac(double N);
int main (void)
{
  double N =  25;
  double term;
  double sum = 1;
  double x = 1;
  double ex = exp(x);


  if(x > 0)
    {
      for (double n = 1; n <=N; n++)
        {
          term  = pow(x,n)/fac(n);
          sum = term + sum;
	  double relativ = abs((ex - sum))/ex;
          double absolut = abs((ex - sum));
	  std::printf( "%.4f %.16f %.16f  %.2e %.2e \n " ,n , ex, sum, relativ, absolut);
	  if(abs(sum - ex)<1e-6){
	      break;}
        }
    }
  else
    {
      double sign = -1.0;
      for (double n = 1; n <=N; n++)
        {
          term  = sign * pow(-x,n)/fac(n);
          sum = term + sum;
	  sign = -1 * sign;
	  double relativ1 = abs((ex - sum))/ex;
          double absolut1 = abs((ex - sum));
	  std::printf("%10.4f  %10.16f  %10.16f  %10.6e %10.6e \n " ,n , ex, sum, relativ1, absolut1);
	  if(abs(sum - ex)<1e-6){
	    break; }
        }
    }



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
