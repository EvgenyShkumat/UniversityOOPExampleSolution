#pragma once
#include "Bee.h"
class BuilderBee : public Bee
{
private:
	double workload;
public:
	BuilderBee() : Bee(), workload(10.0) {}
	BuilderBee(int lifetime, double honeyConsumption, double workload) :
		Bee(lifetime, honeyConsumption), workload(workload){}

	double getWorkload();
	void setWorkLoad(double workload);
};

