#pragma once
#include <string>
using namespace std;

class Bee
{
protected:
	int lifetime;
	double honeyConsumption;

public:
	Bee() : lifetime(10), honeyConsumption(0.5) {}
	Bee(int lifetime, double honeyConsumption) : 
		lifetime(lifetime), honeyConsumption(honeyConsumption) {}

	int getLifetime();

	double getHoneyConsumption();
	void setHoneyConsumption(double honeyConsumption);

	virtual string getInfo();
	///virtual double findConsumption() = 0;
};

// honeyConsumption хранит в себе потреление мёда без учета работы пчелы