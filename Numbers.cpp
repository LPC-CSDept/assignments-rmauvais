#include "Numbers.hpp"
#include <iostream>

using namespace std;

Numbers::Numbers(){
  size=5;
  numbers =new int[size];
  for(int i=0; i<size; i++){
    numbers[i]=rand()%100;
  }
}

Numbers::Numbers(int s){
  size=10;
  numbers=new int[size];
  for(int i=0; i<size; i++){
    numbers[i]=rand()%100;
  }
}

Numbers::Numbers(const Numbers& n){
  size=n.size;
  numbers=new int[size];
  for(int i=0;i<size;i++){
    
  }
}

Numbers::~Numbers(){
  size=0;
  delete[]numbers;
}

int Numbers::operator>(const Numbers& n){
  int s1=0,s2=0;
  for(int i=0; i<size;i++){
    s1 +=n.numbers[i];
  }
  return s1>s2 ? 1: 0;
}

Numbers Numbers::operator=(const Numbers& n) {
  size=n.size;
  for(int i=0;i<size;i++){
    numbers[i]=n.numbers[i];
  }
  return *this;
}

