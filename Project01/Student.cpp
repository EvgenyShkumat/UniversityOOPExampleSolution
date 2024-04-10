#include "Student.h"

string name;
int age;
double mark;
	
Student::Student(string nm = "no name", int a = 6, double m = 4) {
	name = nm;
	age = a;
	mark = m;
}

Student::~Student() { }

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);

	return s;
}

string Student::getName() {
	return name;
}

int Student::getAge() {
	return age;
}

void Student::setAge(int a) {
	if (a > 0 && a < 100) {
		age = a;
	}
}

double Student::getMark() {
		return mark;
}

void Student::setMark(double m) {
	if (m >= 0 && m <= 10) {
		mark = m;
	}
}