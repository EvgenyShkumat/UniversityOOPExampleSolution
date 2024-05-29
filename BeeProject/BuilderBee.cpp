#include "BuilderBee.h"

double BuilderBee::getWorkload() { return workload; }
void BuilderBee::setWorkLoad(double workload) {
	if (workload > 0) {
		this->workload = workload;
	}
}

string BuilderBee::getInfo() {
	return "Builder bee: " + Bee::getInfo() + ", workload per day = " + to_string(workload);
}