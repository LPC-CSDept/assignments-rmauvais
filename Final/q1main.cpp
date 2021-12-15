#include <iostream>
#include <fstream>
#include "q1course.hpp"

using namespace std;

//set the binary search
int binary_search(Course[], int, int);
int recursive_binary_search(Course[], int, int ,int);

//main file
int main()
{
  //open text file
ifstream data_file("q1data.txt");

if (data_file.fail()){
  cout << "Error! Failed to open q1data.txt file." << endl;
  cout << "Make sure q1data.txt feil is present in the current working directory." << endl;
  return 1;
}

// declare array of 10 objects
Course courses[10];
int n =0;

//read file
while(!data_file.eof()){
  int id, credit;
  string name;

  //read id
  data_file>>id;
  //read name
  data_file>>name;
  //read credit
  data_file>>credit;

  //create object
  Course c(id, name, credit);

  //store object into array
  courses[n++]=c;
}

//close input data file
data_file.close();

//sort course arrays by id's
// use sorting algorithm
for (int p=0; p<n; p++){
  for (int q=0; q<n-p-1; q++){
    if (courses[q].getid()> courses[q+1].getid()){
      Course c=courses[q];
      courses[q]= courses[q+1];
      courses[q+1]=c;
    }
  }
}
}

//run loop till user exits

