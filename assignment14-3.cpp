#include <iostream>

using namespace std;

class Square
{
  private: 
      int width;
  public:
  Square()
  {
    width =0;
  }
  void setWidth(int width)
  {
    this->width=width;
  }
  int getWidth()
  {
    return width;
  }
  int getArea()
  {
    return width*width;
  }
  friend class Rect;
};
