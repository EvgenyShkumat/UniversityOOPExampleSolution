#pragma once
#include "Worker.h"
class Professor : public Worker
{
public:
	Professor(string name, int age, double salary): Worker(name, age, salary) {
		cout << "Professor default constructor";
	}

	~Professor() {
		cout << "Professor destructor";
	}
};

