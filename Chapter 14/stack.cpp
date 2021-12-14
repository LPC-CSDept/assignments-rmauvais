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

// display elements if stack isn't Empty
void Stack::display(){
  if(currentldx>0){
    for(int i=0; i<currentldx; ++i){
      std::cout<<stackStore[i]<<" ";
    }
    std::cout<<std::endl;
  }else{
    std::cout<<"The stack is empty:\n";
  }
}

//clear stack and delete it
void Stack::clear(){
  delete stackStore;
  stackStore = new int[size];
  currentldx = 0;
}