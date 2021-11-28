#include <iostream>
#include <vector>

using namespace std;

//create class
class Numbers
{
  private:
  int ID;
  vector<int>values;
  static int numOfObjects;
  public:
Numbers()
  {
    ID=0;
    numOfObjects++;
  }
Numbers(int i, int n)
{
  ID=i;
  for(i=0;i<n;i++)
  {
    //create the random number generator
    int num = (rand()%(99=0+1))+0;
    values.push_back(num);
  }
  numOfObjects++;
}
//retrieve ID
int getID()
{
  //return the ID
  return ID;
}
static int getNumObjects()
{
  // return getNumObjects
  return numOfObjects;
}

friend void printNumbers(Numbers n);

boolean operator >const Numbers &n2)
{
  int sum1 =0, sum2=0;
  //object n1
  for (int i=0; i<values.size();i++)
  //object n2
  
}
}