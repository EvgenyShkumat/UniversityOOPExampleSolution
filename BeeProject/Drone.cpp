#include "Drone.h"

string Drone::getSize() { return size; }
void Drone::setSize(string size) { this->size = size; }

string Drone::getInfo() {
	return "Drone bee: " + Bee::getInfo() + ", size = " + size;
}

double Drone::findConsumption() { return honeyConsumption * (size == "large" ? 5 : 3); }