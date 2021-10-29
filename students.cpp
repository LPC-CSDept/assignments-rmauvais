#include <iostream>

using namespace std;

class Student {
  private:

  int sid;
  string sname;
  double scores[3];

  public:

    int getSid() const {
      return sid;
    }
    void setSid(int sid){
      this ->sid = sid;
    }
    string getSname()const{
      return sname;
    }
    void setSname(string sname){
      this ->sname=sname;
    }
    double getScores(int i)const{
      return scores[i];
    }
    void setScores(int i,int value){
      scores[i]=value;
    }

};