#include "Beekeeper.h"
#include "Beehive.h"
double Beekeeper::findHoney(Beehive beehive) {
	double sum = 0;

	for (int i = 0; i < beehive.getSize(); i++)
	{
		sum -= beehive.get(i)->findConsumption();
	}

	return sum;
}