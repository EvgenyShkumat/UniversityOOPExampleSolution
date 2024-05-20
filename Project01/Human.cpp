#include "Human.h"
#include <string>

string Human::getName() { return name; }
void Human::setName(string name) { this->name = name; }
string Human::getName() { return name; }
int Human::getAge() { return age; }
void Human::setAge(int age) { this->age = age; }

string Human::getInfo() {
	string s = "";
	s += name + ": age = ";
	s += to_string(age);
	
	return s;

}