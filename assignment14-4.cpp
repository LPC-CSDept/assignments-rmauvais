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
{
  size = s;
  numbers = new int[s];
}

Numbers::Numbers(const Numbers &num)
{
  size = num.size;
  numbers = new int[size];
  for(int i=0;i<size;++i)
  {
    numbers[i]=num.numbers[i];
  }
}

Numbers::~Numbers()
{
  delete[]numbers;
}

int Numbers::getMax()const
{
int max=numbers[0];

for (int i=1;i<size;++i)
{
  if(max<numbers[i])
  max=numbers[i];
}
return (max);
}

void printNumbers(Numbers n)
{
  for(int i=0; i<n.size;++i)
  {
    cout<<n.numbers[i]<<"";
  }
  cout<<endl;
}

void Numbers::inputNumbers()
{
  cout<<"Enter "<<size<<" numbers: "<<endl;

  int temp;
  for(int i=0;i<size;++i)
  {
    cin>>temp;
    numbers[i]=temp;
  }
}

//main

int main()
{
  Numbers n1(10);
  n1.inputNumbers();
  Numbers n2(n1);
  printNumbers(n1);
  printNumbers(n2);

  int n1Max = n1.getMax();
  int n2Max = n2.getMax();

  cout<<"The max of n1: "<<n1Max<<endl;
  cout<<"The max of n2: "<<n2Max<<endl;

  return 0;
}