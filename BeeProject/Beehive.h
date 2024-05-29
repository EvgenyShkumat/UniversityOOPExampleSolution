#pragma once
#include "Bee.h"
#include <string>
using namespace std;

class Beehive
{
private:
	int size = 0;
	int heigth;
	int width;
	int length;
	string material;
	string type;
	int frameAmount;
public:
	Beehive() : heigth(1), width(1), length(1), material("wood"), type("classic"), frameAmount(1) {}
	Beehive(int heigth, int width, int length, string material, string type, int frameAmount) :  
		heigth(heigth), width(width), length(length), material(material), type(type), frameAmount(frameAmount) {}

	int getSize();
	int getHeigth();
	void setHeigth(int heigth);
	int getWidth();
	void setWidth(int width);
	int getLength();
	void setLength();
	string getMaterial();
	void setMaterial(string material);
	string getType();
	void setType(string type);
	int getFrameAmount();
	void setFrameAmount(int frameAmount);
};

