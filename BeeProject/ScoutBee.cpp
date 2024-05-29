#include "ScoutBee.h"

int ScoutBee::getDistance() { return distance; }
void ScoutBee::setDistance(int distance) {
	if (distance > 0) {
		this->distance = distance;
	}
}
