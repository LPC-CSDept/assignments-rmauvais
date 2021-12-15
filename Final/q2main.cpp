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
  
}