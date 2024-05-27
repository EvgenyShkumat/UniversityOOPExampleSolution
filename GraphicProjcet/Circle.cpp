#include "Circle.h"
#include <cmath>

const double PI = 3.1416;

double Circle::perimeter() {
	return 2 * radius * PI; 
}
double Circle::square() {
	return radius * radius * PI;
}
string Circle::draw() {
	return "circle: " + Figure::draw() + ", radius = " + to_string(radius);
}

double Circle::getRadius() { return radius; }

void Circle::setRadius(double radius) {
	if (radius > 0) {
		this->radius = radius;
	}
}
