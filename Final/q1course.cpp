#include "q1course.hpp"
#include <iostream>

using namespace std;

//set constructor
Course::Course(){
  id =0;
  name= "";
  credit = 0;
}

// set parameter
Course::Course(int id, string name, int credit) : id(id), name(name), credit(credit){}

//get ID and return
int Course::getid() const {
  return id;
}

// get course name and return it
const string &Course::getName() const {
  return name;
}

// get credit and return
int Course::getCredit() const {
  return credit;
}

// get course ID
void Course::setid(int id){
  this -> id = id;
}

// get course name and set it
void Course::setName(const string &name){
  this->name = name;
}

// get course credit and set it
void Course::setCredit(int credit){
  this ->credit = credit;
}

//display details
void Course::print() const{
  cout <<"Course{id=" <<id<< ", name=" << name << ", credit=" << credit << "}" << endl;
}