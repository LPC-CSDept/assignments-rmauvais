#include <iostream>
#include <string>
#include "q2midterm.hpp"

using namespace std;

int main()
{
  int n =10;
  //student class object
  Student a[10];
  //take users inputs
  for(int i=0;i<n;i++){
    //input Student ID
    cout<<"Enter Student ID: ";
    cin>>a[i].ID;
    //input Student Name
    cout<<"Enter Student Name: ";
    cin>>a[i].name;
    //input Score 1
    cout<<"Enter Score 1: ";
    cin>>a[i].Score1;
    //input Score 2
    cout<<"Enter Score 2: ";
    cin>>a[i].Score2;
    //input Score 3
    cout<<"Enter Score 3: ";
    cin>>a[i].Score3;
    // calculate all the scores by adding them up
    a[i].total_scores=a[i].Score1+a[i].Score2+a[i].Score3;
  }

int i=a[10](a,n,42);
//if i=-1 there's no ID
if(i == -1){
  cout<<"No ID available"<<endl;
}
//print users info
else{
  cout<<"Student ID: "<<a[i].ID<<"Name: "<<a[i].name<<endl;
};
}
