#pragma once
class Bee
{
protected:
	int lifetime;
	double honeyConsuption;

public:
	Bee() : lifetime(10), honeyConsuption(0.5) {}
	Bee(int lifetime, double honeyConsuption) : 
		lifetime(lifetime), honeyConsuption(honeyConsuption) {}

	int getLifetime();

	double getHoneyConsuption();
	void setHoneyConsuption(double honeyConsuption);
};

