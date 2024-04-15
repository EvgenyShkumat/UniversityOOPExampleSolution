#pragma once
#include <string>
using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:
	Student();
	Student(string name, int age, double mark) ;
	
	~Student();

	string convert();

	string getName();

	int getAge();
	void setAge(int a);

	double getMark();
	void setMark(double m);
};