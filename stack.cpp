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
  delete stack store;
}

bool Stack::isEmpty()const{
  
}
