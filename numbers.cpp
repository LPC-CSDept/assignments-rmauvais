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

void Numbers :: swap()