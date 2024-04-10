﻿#pragma once
#include <string>
#include "Manager.h"
using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:

	Student();
	Student(string nm = "no name", int a = 6, double m = 4) ;
	
	~Student();

	string convert();

	string getName();

	int getAge();
	void setAge(int a);

	double getMark();
	void setMark(double m);
};