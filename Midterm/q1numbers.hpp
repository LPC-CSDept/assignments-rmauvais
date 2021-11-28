#include <iostream>
#include <vector>

using namespace std;

//create class
class Numbers
{
  private:
  int ID;
  static int numOfObjects;vector<int>values;
  public:
Numbers()
  {
    ID=0;
    num0fObjects++;
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
  //sum of 1
    sum1 +=values[i];
  //object n2
  for (int i=0; i<n2.values.size();i++)
  //sum of 2
    sum2 +=n2.values[i];

//if return1 is true n1 is greater than n2
  if(sum1>sum2)
    return true;
  else
// otherwise false
    return false;
  }
};

//print all numbers
void printNumbers(Numbers n)
{
  cout<<"\nNumbers are: ";
  for(int i=0; i<n.values.size();i++)
    cout << n.values[i]<<" ";
}