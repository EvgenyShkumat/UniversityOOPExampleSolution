#include "ScoutBee.h"

int ScoutBee::getDistance() { return distance; }
void ScoutBee::setDistance(int distance) {
	if (distance > 0) {
		this->distance = distance;
	}
}

string ScoutBee::getInfo() {
	return "Scout bee: " + Bee::getInfo() + ", distance = " + to_string(distance);
}