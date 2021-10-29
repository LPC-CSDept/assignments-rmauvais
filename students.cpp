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
}