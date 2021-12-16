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

class ProductionWorker: public Employee
{
  int shift;
  double hourly_pay_rate;

  public:
  ProductWorker()
  { //default constructor
  }
  ProductionWorker(string employee_name, int number, string hire_date, int shift, double hourly_pay_rate)
  {
    //set parameter for constructor
    setEmployee_name(employee_name);
    setNumber(number);
    setHire_date(hire_date);
    this->shift=shift;
    this->hourly_pay_rate=hourly_pay_rate;
  }
  int getShift()
  {
    return shift;
  }
  double getHourly_pay_rate()
  {
    return hourly_pay_rate;
  }
  void setShift(int shift)
  {
    this->shift=shift;
  }
  void setHourly_pay_rate(double hourly_pay_rate)
  {
    this->hourly_pay_rate=hourly_pay_rate;
  }
  friend bool operator >(ProductionWorker &, Production Worker &);
};
 //overload operator use boolean operator to return boolean value
bool operator >(ProductionWorker &p1, ProductionWorker &p2)
{
  if(p1.getHourly_pay_rate()>p2.getHourly_pay_rate())
  return 1; //if found true
else
  return 0; //if found false
}