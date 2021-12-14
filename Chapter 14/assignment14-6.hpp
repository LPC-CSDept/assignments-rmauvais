#include <iostream>

using namespace std;

class Numbers
{
  private:
  int i;
  public:
  Numbers()
  {
    i=0;
  }
  Numbers(int I)
  {
    i=I;
  }
  friend std::ostream &operator<<(ostream &out, const Numbers &d) //overload extraction
  {
    out<<"i="<<d.i;
    return out; //return
  }
  friend std::istream &operator>>(istream &input, Numbers &d)//overload insertion
  {
    input>>d.i;
    return input;//return
}
};