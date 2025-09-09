#include "Circle.h"
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "ShapeService.h"
#include <iostream>
#include <cstring>
using namespace std;

Shape* ShapeService::sArr[100];
int ShapeService::count = 0;

void ShapeService::addShape(int n) {
	char color[10];
	cout << "Enter color: ";
	cin >> color;
	cin.ignore();
	if (n == 1) {
		double s1, s2, base, height;
		cout << "Enter S1: ";
		cin >> s1;
		cin.ignore();
		cout << "Enter S2: ";
		cin >> s2;
		cin.ignore();
		cout << "Enter base: ";
		cin >> base;
		cin.ignore();
		cout << "Enter height: ";
		cin >> height;
		cin.ignore();
		sArr[count++] = new Triangle(color, s1, s2, base, height);
	}
	
	else if (n == 2) {
		double radius;
		cout << "Enter radius: ";
		cin >> radius;
		cin.ignore();
		sArr[count++] = new Circle(color, radius);
	}
	
	else if (n == 3) {
		double side;
		cout << "Enter side: ";
		cin >> side;
		cin.ignore();
		sArr[count++] = new Square(color, side);
	}
	
	else if (n == 4) {
		double length, breadth;
		cout << "Enter length: ";
		cin >> length;
		cin.ignore();
		cout << "Enter breadth: ";
		cin >> breadth;
		cin.ignore();
		sArr[count++] = new Rectangle(color, length, breadth);
	}
	
	else {
	        cout<<"Invalid entry"<<endl;
	}
}

void ShapeService::displayAll() {
	cout << "All shapes are: " << endl << endl;
	for (int i=0; i<count; i++) {
		sArr[i]->display();
		cout << endl;
	}
}

void ShapeService::displayTriangles() {
	cout << "Triangles are: " << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Triangle*>(sArr[i])){
			sArr[i]->display();
			cout << endl;
		}
	}
	cout << endl;
}

void ShapeService::displayCircles() {
	cout << "Circles are: " << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Circle*>(sArr[i])){
			sArr[i]->display();
			cout << endl;
		}
	}
	cout << endl;
}

void ShapeService::displaySquares() {
	cout << "Squares are: " << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Square*>(sArr[i])){
			sArr[i]->display();
			cout << endl;
		}
	}
	cout << endl;
}

void ShapeService::displayRectangles() {
	cout << "Rectangles are: " << endl;
	for (int i=0; i<count; i++) {
		if (dynamic_cast<Rectangle*>(sArr[i])){
			sArr[i]->display();
			cout << endl;
	        }
	} 
	cout << endl;
}

int ShapeService::searchByColor(const char* color, Shape* result[100]){
	int cnt = -1;
	for (int i=0; i<count; i++) {
		if (strcmp(sArr[i]->getColor(), color) == 0) {
			result[++cnt] = sArr[i];
		}
	}
	return cnt;
}


void ShapeService::sortByColor(){
        int j;
        for(int i=1;i<count;i++){
          Shape *key=sArr[i];
          j=i-1;
          while(j>=0 && strcmp(sArr[j]->getColor(),key->getColor())>0){
            sArr[j+1]=sArr[j];
            j--;
          }
          sArr[j+1]=key;
        }
}


void ShapeService::calculateAllAreas(){
	for (int i=0; i<count; i++) {
		sArr[i]->calcArea();
	}
}

void ShapeService::calculateAllPerimeters(){
	for (int i=0; i<count; i++) {
		sArr[i]->calcPerimeter();
	}
}
