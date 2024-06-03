#pragma once
#include "Bee.h"
class WorkerBee : public Bee
{
private:
	string type;
	int distance;
public:
	WorkerBee() : Bee(), type("chamomile"), distance(1000) {}
	WorkerBee(int lifetime, int honeyConsumption, string type, int distance) : 
		Bee(lifetime, honeyConsumption), type(type), distance(distance) {}

	string getType();
	void setType(string type);

	int getDistance();
	void setDistance(int distance);

	string getInfo() override;
	double findConsumption() override;
};

