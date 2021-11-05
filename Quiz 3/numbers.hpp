#include <iostream>
#include <vector>

using namespace std;

class Numbers
{
  private: int ID;
  vector <int> numbers;
  public:
  Numbers();
  Numbers(int, int);
  // return ID
  int getID()const;
//return vector
  int getSize()const;
  int getElm(int)const;
  int getMax()const;
  int getMin()const;
  int getSum()const;
// delete elements that are equal to d
  void deleteEle(int e);
  };