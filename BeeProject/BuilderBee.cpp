#include "BuilderBee.h"

double BuilderBee::getWorkload() { return workload; }
void BuilderBee::setWorkLoad(double workload) {
	if (workload > 0) {
		this->workload = workload;
	}
}