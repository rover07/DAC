#include "Shape.h"

class Rectangle : public Shape {
  double length, breadth;
  public:
  Rectangle();
  Rectangle(const char *color, double length, double breadth);
  ~Rectangle();
  
  //setter
  void setLength(double length);
  void setBreadth(double breadth);
  
  //getter
  double getLength();
  double getBreadth();
  
  //Area and Perimeter calculation
  double calcArea();
  double calcPerimeter();
  
  //display
  void display() const;
};
