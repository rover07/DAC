#include "Shape.h"
class Rectangle : public Shape {
	double s1;
    double s2;

	public:
		Rectangle();
		Rectangle(const char* color, double s1,double s2 );
		~Rectangle();
		
		// Getter Methods
		double getS1();
        double getS2();
		
		
		 // Setter Methods
		 void setS1(double s1);
         void setS2(double s2);
		
		 
		 // Calculate Functions
		 double calcArea();
		 double calcPerimeter();
		 
		 // Display
		 void display() const;
};
