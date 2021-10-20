#include <iostream>
#include <stdlib.h>

using namespace std;
//fill values
void fillupArray(int *arr)
{
  srand(time(0));// random number generator
   for (int i =0; i<10; i ++)
  {
    arr[i]=rand()%100; //rand() generates a random int
  }
}
//print array
void printArray(int *arr)
{
  for(int i = 0; i<10; i ++)
  cout << arr[i] << " ";
  return;
}

int main()
{
  int *arr = new int[10]; //make 10 integer spots
  // fill array randomly
  fillupArray(arr);
  // print array again
  printArray(arr);

  return 0;
}