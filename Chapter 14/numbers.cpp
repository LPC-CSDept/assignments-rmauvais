#include <iostream>
#include <stdlib.h>
#include<time.h>

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

double Numbers :: getSum(){
  double sum = 0;
  for(int i =0; i<size; i++)
  sum+= head[i];

  return sum;
}

double Numbers :: getAverage(){
  return getSum()/ size;
}

void Numbers :: bubbleSort(int type){
  if(type ==1){
    bool isSorted;
    for(int i=0; i<size; i++){
      for(int j=1; j<size - i; j++)
      if(head[j]>head[j=1]){
        swap(head,j,j-1);
        isSorted = false;
      }
      if(isSorted)
        return;
    }
  }
}

void Numbers :: setElement()
{
  srand(time(0));

  for(int i=0; i<size; i++)
    head[i]=rand();
}

void Numbers::setElement(int index, int value)
{
  if(index<0||index>=size)
  cout<<"Invalid Index" <<endl;
  head[index]=value;
}

void Numbers :: printNumbers(int desc){
  if(desc==1){
    bubbleSort(1);
    print();
  }else{
    bubbleSort(0);
    print();
  }
}

void Numbers :: clear(){
  delete[]head;
}