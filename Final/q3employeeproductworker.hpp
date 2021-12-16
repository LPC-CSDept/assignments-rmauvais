#include <iostream>
#include <fstream>

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
  
  //return employee_name
  string get_employee_name(){
    return employee_name;
  }
  //return employee_number
  string get_employee_number(){
    return employee_number;
  }

  //return hire_date
  string get_hire_date(){
    return hire_date;
  }
};