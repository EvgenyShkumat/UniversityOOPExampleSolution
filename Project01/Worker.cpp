#include "Worker.h"
#include <string>
double Worker::getSalary() { return salary; }
void Worker::setSalary(double salary) {
	if (salary > 0) {
		this->salary = salary;
	}
}

string Worker::getInfo() {
	string s = "";
	s += getName() + ": age = ";
	s += to_string(getAge());
	s += ", salary = " + to_string(salary);

	return s;
}