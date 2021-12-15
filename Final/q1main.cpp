#include <iostream>
#include <fstream>
#include "q1course.hpp"

using namespace std;

//set binary search
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

}
