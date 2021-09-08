#include <iostream>
#include <fstream>
using namespace std;

struct Student {
  int id;
  string name;
  double score[2];
  double sum;
  double avg;
};

int main()
{
  ifstream ifs;
  Student s[10];
  ifs.open("students.txt");

for( int i=0; i<10; i ++)
{
  ifs >> s[i].id;
  cout << s[i].id <<endl;
  ifs >> s[i].name;
  cout << s[i].name << endl;
  ifs >> s[i].score[0];
  ifs >> s[i].score[1];
  cout << s[i].score[0] << " " << s[i].score[1] << endl;
  s[i].sum = s[i].score[0] + s[i].score[1];
  s[i].avg = s[i].sum / 2;
  cout << s[i].sum << " " << s[i].avg << endl;
}
  
}