#include <iostream>
#include "q3employeeproductworker.hpp"
#include <fstream>

using namespace std;

int main()
{
//declare class array to store all 10 records of text file
ProductionWorker p[10];
//initialize variables to read from text file
string employee_name;
int number;
string hire_date;
int shift;
double hourly_pay_rate;

//open the text file
ifstream fin;
fin.open("q3data.txt");
//call a constructor for the records
cout<<"Input File\n";
for(int i=0;i<10;++i)
{
  fin>>employee_name;
  fin>>number;
  fin>>hire_date;
  fin>>shift;
  fin>>hourly_pay_rate;
  cout<<employee_name<<" "<<number<<" "<<hire_date<<" "<<shift<<" "<<hourly_pay_rate<<endl;
  p[i] = ProductionWorker(employee_name, number, hire_date, shift, hourly_pay_rate);
}
cout<<endl;
//create the max index variable to find max value of txt file
int max_index=0;
for(int i=0;i<10;++i)
{
  if(p[i]>p[max_index])
  max_index =i;
}

}