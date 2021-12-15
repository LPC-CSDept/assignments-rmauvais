#include <iostream>

using namespace std;

class Course{
  private: 
  int id; //store course id
  string name; // store course name
  int credit; // store course credit

  public:
  course(); 
  course(int id, string name, int credit); //parameter
  int getid()const; // return id
  void setid(int id); //set id
  void setName(const string &name); //set name of course
  void setCredit(int credit); // set course credit
  void print() const; //print course detail
};