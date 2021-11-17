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
class Rect{
  private:
  double width;
  double height;
  public:
  Rect()
  {
    width=0;
    height=0;
  }
  void setWidth(double width)
  {
    this->width=width;
  }
  void setheight(double height)
  {
    this->height=height;
  }
  double getWidth()const
  {
    return width;
  }
  double getHeight()const
  {
    return height;
  }
  double getArea()const{
    return width*height;
  }
  Rect makeRectanglewithSquare(Square s)
  {
    Rect *r=new Rect();
    r->height=height;
    r->width=(double)s.width;
    return *r;
  }
};

int main()
{
  
}