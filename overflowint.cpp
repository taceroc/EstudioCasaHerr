#include <iostream>

int main (void)
{  
  int sum2=0;
  for(int i=1; i<=10000000; i++)
   {
     sum2+=i;
     if(sum2>sum2+i)
      break;
    }
  //std::cout<<sum2<<"\n";

  int sum3=sum2;
  for(int i=1; i<=10000000; i++)
    {
      sum3+=1;
      if(sum3>sum3+1)
	break;
    }
  std::cout<<"El maximo valor para una variable entera es:"<<sum3<<"\n";

}

