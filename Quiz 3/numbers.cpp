#include <iostream>
#include <vector>
#include <cstdlib>
#include "numbers.hpp"

Numbers::Numbers()
{
  ID=-1;
}
//parameter
Numbers::Numbers(int id, int n)
{
  ID=id;
  for(int i=0; i<n; i++)
  {
    int j = rand()%100;
    numbers.push_back(j);
}
}

int Numbers::getID()const
{
  return ID;
}

//return vector
int Numbers::getSize()const
{
  return numbers.size();
}

//return ith
int Numbers::getElm(int i)const
{
  return numbers[i];
}

//return max value to vectors
int Numbers::getMax()const
{
  int max = 0;
  for(unsigned i=0; i<numbers.size();i++)
  {
    if(max<numbers[i])
    max=numbers[i];
  }
  return max;
}

int Numbers::getMin()const
{
int min = 0;
for(unsigned i =0; i<numbers.size();i++)
{
  if(min>numbers[i])
  min=numbers[i];
}
return min;
}

