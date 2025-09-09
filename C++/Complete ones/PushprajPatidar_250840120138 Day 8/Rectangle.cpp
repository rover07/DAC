#include<iostream>
using namespace std;
#include "Rectangle.h"
  
  Rectangle::Rectangle(){
    length = 0.0;
    breadth = 0.0;
  }
  Rectangle::Rectangle(const char *color, double length, double breadth) : Shape(color){
    this->length = length;
    this->breadth = breadth;
  }
  Rectangle::~Rectangle(){}
  
  //setter
  void Rectangle::setLength(double length){
    this->length = length;
  }
  void Rectangle::setBreadth(double breadth){
    this->breadth = breadth;
  }
  
  //getter
  double Rectangle::getLength(){
    return length;
  }
  double Rectangle::getBreadth(){
    return breadth;
  }
  
  //Area and Perimeter calculation
  double Rectangle::calcArea(){
    return length*breadth;
  }
  double Rectangle::calcPerimeter(){
    return 2*(length + breadth);
  }
  
  //display
  void Rectangle::display() const {
    cout<<"Rectangle"<<endl;
    Shape::display();
    cout<<"Length: "<<length<<endl<<"Breadth: "<<breadth<<endl;
  }
