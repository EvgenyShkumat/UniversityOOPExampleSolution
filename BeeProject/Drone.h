#pragma once
#include "Bee.h"
class Drone : public Bee
{
private:
	string size;
public:
	Drone() : Bee(), size("medium") {}
	Drone(int lifetime, double honeyConsumption, string size) : 
		Bee(lifetime, honeyConsumption), size(size) {}

	string getSize();
	void setSize(string size);
	string getInfo() override;
	double findConsumption() override;
};

