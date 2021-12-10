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
swap(&A[z+1],&A[high_index]);
return (z+1);
}

//sort
void sort_quick(int A[], int low_index, int high_index)
{
  if(low_index<high_index)
  {
    int pivo = dividing(A, low_index, high_index);
    sort_quick(A, low_index, pivo - 1);
    sort_quick(A, pivo +1, high_index);
  }
}

//array
void array_print(int A[], int T_size)
{
  int z;
  for(z=0; z<T_size; z++)
  printf("%d ", A[z]);
  printf("\n");
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