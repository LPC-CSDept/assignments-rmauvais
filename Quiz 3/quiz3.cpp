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
//delete duplicated elements
void deDup(Numbers &numberset1, Numbers &numberset2)
{
for(int i=0;i<numberset2.getSize();i++)
{
  int ele = numberset2.getElm(i);
  numberset1.deleteEle(ele);
}
}

//main
int main()
{
  //array 5 elements
  Number
}