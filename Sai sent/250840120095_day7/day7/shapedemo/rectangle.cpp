#include "rectangle.h"
#include "Shape.h"
#include <iostream>
using namespace std;

		Rectangle::Rectangle(){
            s1 = 0.0;
            s2 = 0.0;
        }
        Rectangle::Rectangle(const char* color, double s1,double s2 ):Shape(color)
        {
            this->s1  = s1;
             this->s2  = s2;
        }
		Rectangle::~Rectangle(){
           
        }
		 
		// Getter Methods
		double Rectangle ::getS1(){
            return s1;
        }
        double Rectangle ::getS2(){
            return s2;
        }
		
		
		 // Setter Methods
		 void Rectangle ::setS1(double s1){
            this ->s1=s1;
         }
         void Rectangle ::setS2(double s1){
            this ->s2=s2;
         }
		
		 
		 // Calculate Functions
		 double Rectangle :: calcArea(){
            return  (s1 * s2) ;
         }
		 double Rectangle ::calcPerimeter(){
            return ((2*s1)+(2*s2));
         }
		 
		 // Display
         void Rectangle :: display()const {
            Shape::display();
            cout << " Sides of Rectangle :"<< s1 << "\t" << s2<< endl;
         }
		 