#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

const double W = 2.9876865;

void euler(double ti, double tf, double h, std::vector<double> & y);
double f(double t, const std::vector<double> & y, int id);

int main(void)
{
  const double N = 2;
  const double Ti = 0;
  const double Tf = 16.4;
  const double H = 0.001;
  
  std::vector<double> y = {0.12, 0}; // {x0, v0}

  euler (Ti, Tf, H, y);
  
  return 0;
}

void euler (double ti, double tf, double h, std::vector<double> & y)
{
  const int N = (tf - ti)/h;
  std::vector<double> yaux(y.size());
  for (int nt = 0; nt < N; ++nt)
    {
      double t = ti + h*nt;
      std::copy(y.begin(), y.end(), yaux.begin());
      for(int id = 0; id < y.size(); ++id)
	{
	  y[id] = y[id] + h*f(t, yaux, id);
	}
      std::cout<< t << "\t" << y[0] << "\t" << y[1] << std::endl;
    }
}

double f(double t, const std::vector<double> & y, int id)
{
  if (0 == id)
    {
      return y[1]; //v0
    }
  else if (1 == id)
    {
      return -W*W*y[0];
    }
  else
    {
      std::cerr << "ERROR!!!!!!! Id does not exists ->" << id << std::endl;
      exit (1);
    }
}
