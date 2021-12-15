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
//run loop till user exits
while (true){
  int id;

// ask user to enter course id
cout<< "Please enter course id to search (-1 to exit): ";
cin>>id;

// If user exits
if (id== -1){
  break;
}

//search course iterary binary search
int x = binary_search(courses, n, id);
// search course recursive binary search
int y = recursive_binary_search(courses, 0, n-1, id);

//If course is found
if(x != -1){
  cout << "Course found at index " << x << endl;
  cout << "\nThe result from iterative binary search: ";
  courses[x].print();
  cout << "\nThe result from recursive binary search: ";
  courses[y].print();
  cout<<endl;
} else{
  cout << "Course with id=" << id << " was not found." <<endl;
}
}
  return 0;
}

// use function to perform the binary search using the iterative

int binary_search(Course *courses, int n, int search_id) {
  //get index of first element
  int l=0;
  //get index of last element
  int r=n-1;

  //run loop till array is found
  while (l<=r){
    // get middle element
    int mid = l+(r-l)/2;

    // if specified id is found, return it
    if (courses[mid].getid()== search_id){
      return mid;
    }
    // if id is great then, search right side
    if (courses[mid].getid()<search_id){
      l=mid+1;
    } else {
      //if search is smaller, search left side
      r=mid-1;
    }
  }
  //return to -1 if not found
  return -1;
}

// implement binary search for recursive algorithm

int recursive_binary_search(Course *courses, int l, int r, int search_id){
  // run a loop till the array finds an element
  while(l<=r){
    //get middle element
    int mid = l+(r-l)/2;

  }
}