#pragma once
#include "Bee.h"
class ScoutBee : public Bee
{
private:
	int distance;
public:
	ScoutBee() : Bee(), distance(1000) {}
	ScoutBee(int lifetime, double honeyConsumption, int distance) : 
		Bee(lifetime, honeyConsumption), distance(distance) {}

	int getDistance();
	void setDistance(int distance);

	string getInfo() override;
	double findConsumption() override;
};

