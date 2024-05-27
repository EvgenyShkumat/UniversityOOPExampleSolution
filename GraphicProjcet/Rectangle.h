#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
	double a;
	double b;
public:
	Rectangle() : a(1), b(1), Figure() {}
	Rectangle(double a, double b, int x, int y) : Figure(x, y), a(a), b(b) {}

	int getA();
	void setA(double a);
	int getB();
	void setB(double b);

	double perimeter() override;
	double square() override;
	string draw() override;

};

