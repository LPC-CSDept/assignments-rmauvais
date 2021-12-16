#include <iostream>

using namespace std;

class Employee
{
  private:
  //store data members
  //store names numbers and hire dates
  string employee_name, employee_number;
  string hire_date;

  public:
  
  Employee(){
    // set default constructors with function members
    employee_name="";
    employee_number="";
    hire_date="";
  }
}