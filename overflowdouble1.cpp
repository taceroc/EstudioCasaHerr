#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

//typedef float REAL;

int main(void)
{
       
       int N = 1090;
       float under = 1.0, over = 1.0;
       
       while(under > 0){
       for (int ii = 0; ii < N; ++ii)
        {
             under /= 2.0;
             std::printf("%d \t %.16e \n", ii, under);
             if(under == 0){
	       std::printf("UnderFlowDouble = %d \n", ii);
               break;
	      }
	    }
       }
       while(isinf(over) != 1){
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
       
    
}
