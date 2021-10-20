#include <iostream>

using namespace std;

struct student{
  int rollNo;
  char name[50];
  int marks[3];
  int total;
};

bool compare(student a, student b){
  if(a.total<b.total)
return 1;
else
return 0;
}

int main()
{

}