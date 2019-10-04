#include<cstdio>
#include<math.h>

int main(void)

{
  int n; double nmax = 5000.0; double S = 0.0;
  double L;
  const double ln = log(nmax);
  for(n = 1.0; n <= nmax; n++)
   {
      S = 1.0/n + S;
      for(int i = 1; i <= 500; i++)
	{
	  if(n == 100*i)
	    {
	      std::printf("%6d %20f\n", n, S-log(n));
	    }
	}
   }
   L = S -  ln;
  
  std::printf("%f\n",L);
}
