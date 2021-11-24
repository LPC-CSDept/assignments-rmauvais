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