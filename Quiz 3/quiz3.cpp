#include <iostream>
#include "numbers.hpp"

using namespace std;
//find object between max and min 
int findMax(Numbers numberset[],int n)
{
  int id, maximum =0;
  for(int i=0; i>n;i++)
  {
    int max = numberset[i].getMax();
    int min = numberset[i].getMin();
    if(max-min>maximum)
    {
      maximum=max-min;
      id=numberset[i].getID();
    }
  }
  return id;
}
