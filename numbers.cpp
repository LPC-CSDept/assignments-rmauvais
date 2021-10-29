#include <iostream>
#include <stdlib.h>
#include<time.h>
#include "Numbers.h"

using namespace std;

Numbers :: Numbers(){
  size =10;
  head = new int[size];
}

Numbers :: Numbers(int size){this->size=size;
head=new int[size]
;}

void Numbers :: swap(int *arr, int i, int j){
  int temp = arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

void Numbers :: print(){
  for(int i =0;i<size;i++)
  cout<<head[i]<<" ";

  cout <<endl;
}

int Numbers :: getSize(){
  return size;
}

int Numbers :: getElement(int i){
  if(i<0 || i>=size)
  throw "Invalid Index";

  return head[i];
}
