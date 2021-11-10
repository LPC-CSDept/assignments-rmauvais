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
  newStack.display();

  int pop1=newStack.pop();
  int pop2=newStack.pop();
  int pop3=newStack.pop();

  cout<<"Popped element 1: "<<pop1<<endl;
  cout<<"Popped element 2: "<<pop2<<endl;
  cout<<"Popped element 3: "<<pop3<<endl;

  //display elements

  cout<<"Displaying the stack again: ";
  newStack.display();

  int array[20]={6,3,1,25,2,3,4,1,5,4,3,19,22,10,30,12,11,29,21,36};
  cout<<"Initial array: ";
  for(int i: array){
    cout<<i<<" ";
  }

  //reverse the array
  reverseArray(array,20);

  //print the array
  cout<<"\nReversed Array: ";
  for(int i: array) {
    cout<<i<<" ";
  }

  return 0;
}