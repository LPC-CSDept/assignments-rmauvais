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
student* studentDynArray;
studentDynArray = new(nothrow) student[10];

ifstream fin("studentquiz2-2.txt");
string line;

int a,b;
char ch[20];
int i=0;
while (getline(fin, line))
{
if(i>9)
break;
istringstream ss(line);
ss>> studentDynArray[i].rollNo>>studentDynArray[i].name>>

}
}