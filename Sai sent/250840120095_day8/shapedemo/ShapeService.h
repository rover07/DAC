#include "Shape.h"

class ShapeService {
        
	static Shape* sArr[100];
	static int count;
	
	public:
		static void addShape(int n);
		static void displayAll();
		static void displayTriangles();
		static void displayCircles();
		static void displaySquare();
		static void displayRectangle();
		static int searchByColor(const char* color, Shape* result[100]);
		static void calculateAllAreas();
		static void calculateAllPerimeters();
};
