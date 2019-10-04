#include <cstdio>
#include <cmath>

#include "entero.h"
#include "doble.h"
#include "flotante.h"


int main(void)
{
  int a = 1;
  int overint = entero(a);
  
  double underd = 1.0, overd = 1.0;
  double underdo = doble(overd, underd);

  float underf = 1.0, overf = 1.0;
  float underfl = flotante(overf, underf);
  
  return 0;
  
}
