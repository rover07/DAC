#include "square.h"
#include "Shape.h"
#include <iostream>
using namespace std;

		Square:: Square(){
            side = 0.0;
        }
        Square::Square(const char* color, double side ):Shape(color)
        {
            this->side  = side;
        }
		Square ::~Square(){
           
        }
		
		// Getter Methods
		double Square ::getSide(){
            return side;
        }
		
		
		 // Setter Methods
		 void Square ::setSide(double s1){
            this ->side =s1;
         }
		
		 
		 // Calculate Functions
		 double Square :: calcArea(){
            return  (side * side) ;
         }
		 double Square ::calcPerimeter(){
            return (4*side);
         }
		 
		 // Display
         void Square :: display()const {
            Shape::display();
            cout << " Side of a square :"<< side << endl;
         }
		 