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