#pragma once
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;

	// default constructor 

	Student() {
		name = "no name";
		age = 6;
		mark = 4;
	}

	//Student(string nm) {
	//	name = nm;
	//}

	//Student(string nm, int a) {
	//	name = nm;
	//	age = a;
	//}

	//// canonical constructor

	Student(string nm = "", int a = 6, double m = 4) {
		name = nm;
		age = a;
		mark = m;
	}

	////copy-constructor
	//Student(const Student& student) {

	//}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);

		return s;
	}
};