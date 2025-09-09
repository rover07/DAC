#include<iostream>
using namespace std;
#include "Square.h"

    Square::Square(){
      side=0.0;
    }
    Square::Square(const char *color, double side)  : Shape(color){
      this->side = side;
    }
    Square::~Square(){}
    
    //setter
    void Square::setSide(double side){
      this->side = side;
    }
    
    //getter
    double Square::getSide(){
      return side;
    }
    
    //Area and Peri calcs
    double Square::calcArea(){
      return (side*side);
    }
    double Square::calcPerimeter(){
      return (4*side);
    }
    
    //display
    void Square::display() const{
      cout<<"Square"<<endl;
      Shape::display();
      cout<<"Side: " << side << endl;
    }
