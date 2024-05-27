#include "Rectangle.h"

double Rectangle::perimeter() { return (a + b) * 2; }
double Rectangle::square() { return a * b; }
string Rectangle::draw() {
	return "Rectangle: " + Figure::draw() + ", a =" + to_string(a) + ", b = " + to_string(b); 
}

int Rectangle::getA() { return a; }

void Rectangle::setA(double a) {
	if (a > 0) {
		this->a = a;
	}
}

int Rectangle::getB() { return b; }

void Rectangle::setB(double b) {
	if (b > 0) {
		this->b = b;
	}
}