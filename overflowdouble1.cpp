#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

//typedef float REAL;

int main(void)
{
       
       int N = 20000;
       double under = 1.0, over = 1.0;
       
      
       for (int ii = 0; ii < N; ++ii)
        {
             under /= 2.0;
             std::printf("%d \t %.16e \n", ii, under);
             if(under == 0){
	       std::printf("UnderFlowDouble = %d \n", ii);
               break;
	      }
	    }

       for (int ii = 0; ii < N; ++ii)
	  {
               over *= 2.0;
               std::printf("%d \t %.16e \n", ii, over);
	       if(isinf(over) == 1){
		 std::printf("OverFlowDouble = %d \n", ii);
	       break;
	       }
	  }
       
       
    
}
