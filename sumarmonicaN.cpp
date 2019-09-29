#include<cstdio>
#include<math.h>

float S (int Nmax);
float s (int Nmax);

int main(void)

{
 
  int Nmax = 1000;
    for(int i = 1; i<=Nmax; i++)
      {
        float a = fabs((s(i)-S(i))/(S(i)+s(i)));
	std::printf("%10d %20.16f %20.16f %20.16e\n", i, S(i), s(i),a);
      }

  return 0;
}


float S (int Nmax)
{
  float S = 0.0;
  for(int N = 1; N<=Nmax; N++)
    {
      S = S + 1.0/N;
    }
  return S;
}

float s (int Nmax)
{
  float s = 0.0;
    for(int N1 = Nmax; N1>=1 ; N1--)
    {
      s = s + 1.0/N1;
    
    }
    return s; 
}
