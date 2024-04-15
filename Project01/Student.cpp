#include "Student.h"

Student::Student(string name, int age, double mark) {
	this->name = name;
	this->age = age;
	this->mark = mark; 
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

void Student::setAge(int age) {
	if (age > 0 && age < 100) {
		this->age = age;
	}
}

double Student::getMark() {
		return mark;
}

void Student::setMark(double mark) {
	if (mark >= 0 && mark <= 10) {
		this->mark = mark;
	}
}