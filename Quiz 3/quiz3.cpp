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
  int Numbers;
  //array 5 elements
  Numbers numberset[]={Numbers(1,3), Numbers(2,5), Numbers(3,10),Numbers(4,5), Numbers(5,3)};

  //print elements
  for(int i=0;i<5;i++)
  {
    cout<<"numberset["<<i<<"]=";
    for(int j=0;j<numberset[i].getSize();j++)
    {
      cout<<numberset[i].getElm(j)
<<" ";    
}
cout<<endl;
}
cout<<"Result of findMax= " <<findMax(numberset,5)<<endl;
deDup(numberset[0],numberset[1]);

for (int i=0;i<5;i++)
{
  cout<<"numberset["<<i<<"]=";
  for(int j=0;j<numberset[i].getSize();j++)
  {
    cout<<numberset[i].getElm(j)<<" ";
  }
  cout<<endl;
}
return 0;
}