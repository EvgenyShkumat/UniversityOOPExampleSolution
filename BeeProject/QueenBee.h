#pragma once
#include "Bee.h"
class QueenBee : public Bee
{
private:
	string size;
	int eggPerDay;
	int age;
public:
	QueenBee() : Bee(), size("medium"), eggPerDay(1000), age(1) {}
	QueenBee(int lifetime ,double honeyConsumption, int age, string size, int eggPerDay) :
		Bee(lifetime, honeyConsumption), age(age), size(size), eggPerDay(eggPerDay) {}

	string getSize();
	void setSize();

	int getAge();
	void setAge(int age);

	int getEggPerDay();
	void setEggPerDay(int eggPerDay);
	string getInfo() override;
	double findConsumption() override;
};

