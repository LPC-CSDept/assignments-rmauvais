#include "course.hpp"
#include "Student.hpp"
#include<cstring>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

int Course::NUM_COURSES=0;

Course::Course()
{
  NUM_COURSES+=1;
}
  Course::Course(string cname, int credits, string semester, vector<Student>student)
  {
  this->cname = cname;
  this->credits = credits;
  this->semester = semester;
  this->student = student;

  NUM_COURSES+=1;
}

string Course::getCName(void)
{
  return cname;
}
int Course::getCredits(void)
{
  return credits;
}
string Course::getSemester(void)
