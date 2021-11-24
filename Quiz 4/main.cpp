#include "course.hpp"
#include "student.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

//main
int main()
{
  int N=4;
  Course courses[N];
  ifstream ifs;

  ifs.open("coursestudents.txt");
  if(ifs.fail())
  {
    cerr<<"File open error\n";
    exit(0);
  }
  for(int i=0;i<N;i++)
  {
    for(int i=0;i<N;i++)
    {
      ifs>>courses[i];
      cout<<courses[i]<<endl;
    }
    ifs.close();

    ifs.open("addstudents.txt");
    if(ifs.fail())
    {
      cerr<<"File open error\n";
      exit(0);
    }
    string courseId;
    while(ifs>>courseId)
    {
      cout<<"Course ID: "<<courseId<<endl;
      int courseIndex;
      for(int i=0; i<Course::getNumCourses();i++)
      {
        if(courses[i].getCName()==courseId)
        {
          courseIndex=i;
        }
      }
int numStudent;
ifs>>numStudent;

for(int i=0;i<numStudent;i++)
{
  int ID;
  string sname;
  char grade; 
  double scores;
  ifs >> ID >> sname >> grade >> scores;
  Student s(ID, sname, grade, scores);
  courses[courseIndex].addStudent(s);
}
cout <<"Updated Students list for the Course: "<<courseId<<endl;
cout<<courses[courseIndex]<<endl;
    }
    ifs.close();

//print result
for(int i=0;i<Course::getNumCourses(); i++)
{
  cout<<courses[i]<<endl;
}
}
}

//override the input
ifstream &operator>>(ifstream &ifs, Course &c)
{
  string cname;
  int credits;
  string semester;
  ifs>>cname>>credits>>semester;

  int numStudent;
  ifs>>numStudent;

  vector<Student> students;
  for(int i=0; i<numStudent;i++)
  {
    int ID; 
    string sname;
    char grade;
    double scores;
    ifs>>ID>>sname>>grade>>scores;
    Student s(ID, sname, grade, scores);
    students.push_back(s);
  }
  c.setCourse(cname, credits, semester, students);
}