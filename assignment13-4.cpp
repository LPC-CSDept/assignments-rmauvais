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

