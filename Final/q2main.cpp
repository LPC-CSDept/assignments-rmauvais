#include <iostream>
#include "q1course.hpp"
#include <fstream>

using namespace std;

//sort function
void quick_sort(Course *, int, int);

int main()
{
  // open text file again from question 1
  ifstream data_file("q1data.txt");

  //if file is failed to open
  if (data_file.fail()){
    cout << "Error! File failed to open, q1data.txt." << endl;
    cout << "Make sure the q1data.txt file is present in the directory!" << endl;
    return 1;
  }

  //use array to hold the 10 objects
  Course courses[10];
  int n =0;

  //have it read through the file
  while (!data_file.eof()){
    int id, credit;
    string name;

    //read the id
    data_file >> id;
    //read name
    data_file >> name;
    //read credit
    data_file >> credit;

    // create an object
  Course c(id, name, credit);

  //store the object into the array
  courses[n++] =c;
  }
  // close the data file
  data_file.close();

  //print courses before sorting the arrays
  
}