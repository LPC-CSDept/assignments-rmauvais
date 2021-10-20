#include <iostream>
#include <stdlib.h>

using namespace std;

void fillupArray(int *arr)
{
  for (int i =0; i<10; i ++)
  {
    arr[i]=rand()%100; //rand() generates a random int
  }
}

void printArray(int *arr)
{
  for(int i = 0; i<10; i ++)
  cout << arr[i] << " ";
  return;
}
int main()
{

}