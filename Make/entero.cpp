#include "entero.h"
#include <cstdio>
#include <cmath>

int entero(int a)
{
      a = 1;
      while(a > 0) {
         a *= 2 ;
         std::printf("%10d\n", a);
	  }
}
