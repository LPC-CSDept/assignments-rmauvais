#include <iostream>

using namespace std;

class Numbers
{

//private function
  private:
  int size;
  int *numbers;

//public function
  public:
  Numbers();
  Numbers(int s);
  Numbers(const Numbers &);

  ~Numbers();
  //get max
  int getMax()const;

  friend void printNumbers(Numbers);

  void inputNUmers();
};

Numbers::Numbers()