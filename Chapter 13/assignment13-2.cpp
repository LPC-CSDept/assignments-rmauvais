#include <iostream>
#include "Numbers.h"

using namespace std;

int main()
{
  Numbers numbers;

  cout<<"Array filled with random values." <<endl;
  numbers.setElement();

  cout<<"Values at index 0 and 9 set to 55 by the user." <<endl;
  numbers.setElement(0,55);
  numbers.setElement(9,55);

  cout<<"\nPopulating array with user-inputted values."<<endl;
  numbers.setElement(0,1);
  numbers.setElement(1,2);
  numbers.setElement(2,3);
  numbers.setElement(3,4);
  numbers.setElement(4,5);
  numbers.setElement(5,6);
  numbers.setElement(6,7);
  numbers.setElement(7,8);
  numbers.setElement(8,9);
  numbers.setElement(9,10);

  cout<<"Array in descending order:";
  numbers.printNumbers(1);
  
  return 0;
}