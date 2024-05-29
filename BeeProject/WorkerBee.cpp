#include "WorkerBee.h"

string WorkerBee::getType() { return type; }
void WorkerBee::setType(string type) { this->type = type; }

int WorkerBee::getDistance() { return distance; }
void WorkerBee::setDistance(int distance) {
	if (distance > 0) {
		this->distance = distance;
	}
}