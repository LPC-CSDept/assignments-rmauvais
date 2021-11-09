#include <iostream>
#include "stack.hpp"

using namespace std;

// reverse the array
void reverseArray(int* arr, int size){
  Stack reverseStack(size);
  for(int i=0; i<size;++i){
    reverseStack.push(arr[i]);
  }
  for(int i=0; i<size;++i){
    arr[i]=reverseStack.pop();
  }
}

int main()
{
  Stack newStack(20);

  //check if stack is empty
  if(newStack.isEmpty()){
    cout<<"The stack is empty!\n\n";
  }
  int element =5;
  while (!newStack.isFull()){
    newStack.push(element);
    element +=4;
  }
  cout<<"Displaying the stack: ";
}