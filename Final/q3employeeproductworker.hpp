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

class ProductionWorker: public Employee{
  private: 
  //data for the production workers
    int shift;
    double pay;
  public:
    ProductionWorker():Employee(){
      shift =0;
      pay =0;
    }
    //set a parameter to pass the name, id and date through the class's constructor
    
}