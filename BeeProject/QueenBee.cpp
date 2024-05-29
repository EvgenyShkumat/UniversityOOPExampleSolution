#include "QueenBee.h"

string QueenBee::getSize() { return size; }
void QueenBee::setSize() { this->size = size; }

int QueenBee::getEggPerDay() { return eggPerDay; }
void QueenBee::setEggPerDay(int eggPerDay) {
	if (eggPerDay > 0) {
		this->eggPerDay = eggPerDay;
	}
}

int QueenBee::getAge() { return age; }
void QueenBee::setAge(int age) {
	if (age > 0 && age < 2000) {
		this->age = age;
	}
}