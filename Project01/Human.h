#pragma once
#include <iostream>
using namespace std;

class Human
{
protected:
	string name;
	int age;

public:
	Human() {
		cout << "Human defaulst constructor" << endl;
	}
	Human(string name, int age) : name(name), age(age) {}

	~Human() {
		cout << "Human destructor";
	}

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	
	string getInfo();

	Human& operator+(int value) {
		Human h(name, age + value);
		return h;
	}

	Human& operator+(Human& human) {
		Human h(name + "-" + human.name,
			age + human.age);
		return h;
	}
};

