#include "Bee.h"

int Bee::getLifetime() { return lifetime; }

double Bee::getHoneyConsumption() { return honeyConsumption; }
void Bee::setHoneyConsumption(double honeyConsumption) { this->honeyConsumption = honeyConsumption; }

string Bee::getInfo() {
	return "lifetime = " + to_string(lifetime) + ", honey consumption = " + to_string(honeyConsumption);
}
