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
  
}
}