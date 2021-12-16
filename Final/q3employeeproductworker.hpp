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
    ProductionWorker(string name, string id, string date, int shift_no, double pay_rate):Employee(name, id, date){
      shift = shift_no;
      pay=pay_rate;
    }
    //print details of worker
    void print_details(){
      cout << get_employee_name() << "\t" << get_employee_number() << "\t\t";
      cout << get_hire_date() << "\t" << shift << "\t" << pay << endl;
    }
    //return the monthly pay pay_rate
    double get_pay(){
      return pay;
    }
    //if overloaded is > operator then it'll compare the pay and return a boolean value
    bool operator > (ProductionWorker worker){
      if(pay > worker.get_pay())
      return true;
    return false;
    }
}