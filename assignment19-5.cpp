#include <iostream>

void swap(int* c, int* k)
{
  int g= *c;
  *c = *k;
  *k = g;
}

int dividing (int A[], int low_index, int high_index) 
{
int element_pivo=A[high_index];
int z =(low_index -1);

for(int c=low_index; c <=high_index-1; c++)
{
  if (A[c]<= element_pivo)
  {
    z++;
    swap(&A[z],&A[high_index]);
  }
}
}


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