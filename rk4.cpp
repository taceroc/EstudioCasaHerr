#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>

const double K = 2.5;
const double M = 1.1;
const double W = std::sqrt(K/M);

void euler(double ti, double tf, double h, std::vector<double> & y);
void rk4(double ti, double tf, double h, std::vector<double> & y);
double f(double t, const std::vector<double> & y, int id);

int main(void)
{
  const double N = 20;
  const double Ti = 0;
  const double Tf = 80;
  const double H = 0.01;
  
  std::vector<double> y = {1, 0}; // {x0, v0}

  rk4(Ti, Tf, H, y);
  
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
      //std::cout<< t << "\t" << y[0] << "\t" << y[1] << std::endl;
      std::cout << t-ti << "\t" << (K/2)*y[0]*y[0] << "\t" << std::endl;
    }
}

void rk4(double ti, double tf, double h, std::vector<double> & y)
{
  std::vector<double> k1, k2, k3, k4, aux;
  k1.resize(y.size());
  k2.resize(y.size());
  k3.resize(y.size());
  k4.resize(y.size());
  aux.resize(y.size());

  const int N = (tf-ti)/h; //pasos tiempo
 
  for (int nt = 0; nt < N; ++nt) //iteraciones
    {
      double t = ti + h*nt;
       //k1
       for (int ii = 0; ii < y.size(); ++ii)
            {
              k1[ii] = h*f(t,y,ii);
            }

       //k2 aux
       for (int ii = 0; ii < y.size(); ++ii)
            {
              aux[ii] = y[ii] + k1[ii]/2; 
            }

       //k2
       for (int ii = 0; ii < y.size(); ++ii)
               {
                 k2[ii] = h*f(t + h/2, aux, ii);
               }

       //k3 aux
       for (int ii = 0; ii < y.size(); ++ii)
               {
                  aux[ii] = y[ii] + k2[ii]/2; 
               }

       //k3
       for (int ii = 0; ii < y.size(); ++ii)
               {
		 k3[ii] = h*f(t + h/2, aux, ii);
               }

       //k4 aux
       for (int ii = 0; ii < y.size(); ++ii)
               {
                 aux[ii] = y[ii] + k3[ii]; 
               }

       //k4
       for (int ii = 0; ii < y.size(); ++ii)
               {
                 k4[ii] = h*f(t + h, aux, ii);
               }

       //write new y
       for (int ii = 0; ii < y.size(); ++ii)
               {
                 y[ii] = y[ii] + (k1[ii] + 2*k2[ii] + 2*k3[ii] + k4[ii])/6.0;
               }

       //std::cout<< t << "\t" << y[0] << "\t" << y[1] << std::endl;
       std::cout.precision(10);
       std::cout << t << "\t" << y[0] << "\t" << y[1] << "\t" << (K/2)*y[0]*y[0]+(M/2)*y[1]*y[1] << "\t" << std::cos(W*t) << "\t" << -W*std::sin(W*t)<< "\t"<< K/2 << "\t" <<  (K/2)-((K/2)*y[0]*y[0]+(M/2)*y[1]*y[1]) <<  std::endl;
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
