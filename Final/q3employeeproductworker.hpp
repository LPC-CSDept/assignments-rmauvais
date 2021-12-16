#include <iostream>
#include <fstream>

using namespace std;

class Employee
{
  //store data members
  //store names numbers and hire dates
  string employee_name;
  int number;
  string hire_date;

  //default constructor
  public:

  //return employee_name
  string getEmployee_name()
  {
    return employee_name;
  }
  //return getNumber
  int getNumber()
  {
    return number;
  }
  //return hire_date
  string getHire_date()
  {
    return hire_date;
  }
  void setEmployee_name(string employee_name)
  {
    this->employee_name = employee_name;
  }
  void setNumber(int number)
  {
    this->number = number;
  }
  //return hire_date
  void setHire_date(string hire_date)
  {
    this->hire_date = hire_date;
  }
};