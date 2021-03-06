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
  cout << "Print the array before sorting:" << endl;
  for(int i =0; i<n; i++){
    courses[i].print();
  }

  // sort the array by ID in ascending order
  //use quick sort function from above
  quick_sort(courses, 0, n-1);

  //print the courses
  cout << "\nPrint array after the quick sort:" << endl;
  for(int i=0; i<n; i++){
    courses[i].print();
  }
  return 0;
}

//sort array with recursive
void quick_sort(Course *courses, int l, int h){
  if (l>=h)return;

  int i=l-1;
  int j=h+1;
  Course course = courses[(l+h)/2];

  //run loop to find if it is valid
  while(i<j){
    // get index to swap from the beginning
    while (courses[++i].getid()< course.getid());
    // get index to swap from end
    while (courses[--j].getid()> course.getid());
    if(i<j){
      //swap courses
      Course temp = courses[i];
      courses[i]=courses[j];
      courses[j]=temp;
    }
  }
  //use quick sort on leftover courses
  quick_sort(courses, l, i);
  quick_sort(courses, i+1, h);
}