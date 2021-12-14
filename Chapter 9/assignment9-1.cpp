#include <iostream>

using namespace std;

int main()
{
  const int N=10;
  double numbers[N]={10.0,15.2,21.2,10.5,11.3,12.5,13.8,14.7,19.8,20.0};

  //address of first element in array 
  double *ptr;

for (int i = 0; i<N; ++i){
  //print value by ptr
  cout<<*ptr<<"";
  //move to next element in array
  ptr++;
}
cout<<endl;
return 0;
}