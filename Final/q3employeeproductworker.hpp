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
  public:
  string getEmployee_name()
  {
    return employee_name;
  }
  int getNumber()
  {
    return number;
  }
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
}