#include "Shape.h"

class Square : public Shape{
    double side;
    
  public:
    Square();
    Square(const char *color, double side);
    ~Square();
    
    //setter
    void setSide(double side);
    
    //getter
    double getSide();
    
    //Area and Peri calcs
    double calcArea();
    double calcPerimeter();
    
    //display
    void display() const;
    
};
