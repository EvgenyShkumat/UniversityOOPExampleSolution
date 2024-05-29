#include "NurceBee.h"

int NurceBee::getMilkPerDay() { return milkPerDay; }
void NurceBee::setMilkPerDay() {
	if (milkPerDay > 0) {
		this->milkPerDay = milkPerDay;
	}
}