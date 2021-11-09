#include <iostream>
#include "stack.hpp"

// constructor for stack
Stack::Stack(int size)
{
  this->size=size;
  this -> currentldx=0;
  stackStore = new int[this->size];
}

//destructor for stack
Stack::~Stack()
{
  delete stackStore;
}

bool Stack::isEmpty()const{
  return currentldx == 0;
}

//checkk whether stack is full or not
bool Stack::isFull()const{
  return currentldx == size;
}

//returns top element if the stack isn't Empty
int Stack::top(){
  if(!isEmpty()){
    return stackStore[currentldx-1];
  }else{
    return INT16_MIN;
  }
}

//pushes element to stack if not full
void Stack::push(int val){
  if(!isFull()){
    stackStore[currentldx++] =val;
  }
}

//removes top element from stack
int Stack::pop(){
  if(!isEmpty()){
    currentldx--;
    return stackStore[currentldx];
  }else{
    return INT16_MIN;
  }
}

