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

string Beehive::getBeesInfo() {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += bees[i].getInfo() + "\n";
	}

	return s;
}

string Beehive::getBeehiveInfo() {
	return "Beehive: heigth = " + to_string(heigth) + ", width = " + to_string(width) +
		", legngth = " + to_string(length) + ", material = " + material + ", type = " + type +
		", amount of frames = " + to_string(frameAmount);
}

void Beehive::add(Bee bee) {
	if (size = 0) {
		bees = new Bee[1];
		*(bees + 1) = bee;
	}
	else {
		Bee* temp = new Bee[size + 1];

		for (int i = 0; i < size; i++)
		{
			*(temp + i) = *(bees + i);
		}

		*(temp + size) = bee;
		delete[] bees;
		bees = temp;
	}

	size++;
}

Bee Beehive::get(int index) {
	if (index > 0 && index < size) {
		return *(bees + index);
	}
	else {
		return Bee();
	}
}

void Beehive::remove(int index) {
	if (size != 0) {
		Bee* temp = new Bee[size - 1];

		for (int i = 0, k = 0; i < size - 1; i++)
		{
			if (index != i) {
				temp[k++] = *(bees + i);
			}
		}
		size--;
		delete[] bees;
		bees = temp;
	}
}