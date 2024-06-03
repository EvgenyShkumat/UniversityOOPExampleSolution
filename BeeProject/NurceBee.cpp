#include "NurceBee.h"

int NurceBee::getMilkPerDay() { return milkPerDay; }
void NurceBee::setMilkPerDay() {
	if (milkPerDay > 0) {
		this->milkPerDay = milkPerDay;
	}
}

string NurceBee::getInfo() {
	return "Nurce bee: " + Bee::getInfo() + ", produce milk per day = " + to_string(milkPerDay);
}

double NurceBee::findConsumption() { return honeyConsumption * milkPerDay / 50; }