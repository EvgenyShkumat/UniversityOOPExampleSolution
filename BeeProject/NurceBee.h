#pragma once
#include "Bee.h"
class NurceBee : public Bee
{
private:
	int milkPerDay;
public:
	NurceBee() : Bee(), milkPerDay(100) {}
	NurceBee(int lifetime, double honeyConsumption, int milkPerDay) :
		Bee(lifetime, honeyConsumption), milkPerDay(milkPerDay) {}

	int getMilkPerDay();
	void setMilkPerDay();

};

