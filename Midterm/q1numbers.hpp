#include <iostream>
#include <vector>

using namespace std;

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
    int num = (rand())
  }
}
}