#include <iostream>
using namespace std;

int findMin(int [], int, int);

int main()
{
  const int N = 10;
  int numbers[N] = {25, 10, 15,30,35,40,45,55};

  for(int i =0; i<N; i++)
  {
    int minidx;
    minidx= findMin(numbers, N, i); // find the i_smallest number
    swap(numbers[i], numbers[minidx]);

  }
}
int findMin(int numbers[], int N, int ith)
{
  int min, minidx, i;
  min = numbers[ith];
  
  
   // Add this line to set the initial value for ids.
    // minidx = ith; 
  
  
  
    for(i=ith ;i<N;i++)
    {
      if( min > numbers[i])
      {
        min = numbers[i];
        minidx = i;
      }
    }
    return minidx; //1
}

void printArray(int a[],int x)
{
  for(int i=0; i<x; i++){
  cout << a[i] << "\t";
}
cout << "\n";
}
