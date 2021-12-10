#include <iostream>

using namespace std;

// main function
int main()
{
  int A[]={1,8,5,9,4,3,7};
  int p = sizeof(A)/sizeof(A[0]);
  sort_quick(A, 0, p-1);
  printf("Final Sorted Array: \n");
  array_print(A,p);
  return 0;
}