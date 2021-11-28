#include <iostream>
#include "q1numbers.hpp"

using namespace std;

int main()
{
  //random numbers n1 & n2 
  Numbers n1(123, 12);
  Numbers n2(456, 6);

  cout<<"Obect 1: ";
  printNumbers(n1);
  cout<<"\nObject 2: ";
  printNumbers(n2);

//random number generator time
  srand(time(NULL));

//when n1 is greater than n2
if(n1>n2)
  cout<<"\n\nObject 1 numbers are greater than Object 2";
else
//or when n2 is greater than n1
  cout<<"\n\nObject 2 numbers are greater than Object 1";

  return 0;
}