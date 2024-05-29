#include "Beehive.h"

int Beehive::getSize() { return size; }

int Beehive::getHeigth() { return heigth; }

void Beehive::setHeigth(int heigth) {
	if (heigth > 0) {
		this->heigth = heigth;
	}
}

int Beehive::getWidth() { return width; }

void Beehive::setWidth(int width) {
	if (width > 0) {
		this->width = width;
	}
}

int Beehive::getLength() { return length; }

void Beehive::setLength() {
	if (length > 0) {
		this->length = length;
	}
}

string Beehive::getMaterial() { return material; }

void Beehive::setMaterial(string material) { this->material = material; }

string Beehive::getType() { return type; }

void Beehive::setType(string type) { this->type = type; }

int Beehive::getFrameAmount() { return frameAmount; }

void Beehive::setFrameAmount(int frameAmount) {
	if (frameAmount > 0) {
		this->frameAmount = frameAmount;
	}
}