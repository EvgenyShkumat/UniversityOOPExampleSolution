#pragma once
#include <string>
#include "Manager.h"
using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:
	
	// default constructor 
	/*Student() {
		name = "no name";
		age = 6;
		mark = 4;
	}*/
	//Student(string nm) {
	//	name = nm;
	//}
	//Student(string nm, int a) {
	//	name = nm;
	//	age = a;
	//}
	//// canonical constructor

	Student(string nm = "no name", int a = 6, double m = 4) {
		name = nm;
		age = a;
		mark = m;
	}

	////copy-constructor
	//Student(const Student& student) {

	//}

	~Student() {
		//cout << "Desctructor was called";
	}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);

		return s;
	}

	string getName() {
		return name;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a > 0 && a < 100) {
			age = a;
		}
	}

	double getMark() {
		return mark;
	}

	void setMark(double m) {
		if (m >= 0 && m <= 10) {
			mark = m;
		}
	}
};