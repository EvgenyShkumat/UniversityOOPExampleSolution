#pragma once
#include "Bee.h"
class GuardBee : public Bee
{
private:
	int replushedAttack;
public:
	GuardBee() : Bee(), replushedAttack(10) {}
	GuardBee(int lifetime, double honeyConsumption, int replushedAttack) :
		Bee(lifetime, honeyConsumption), replushedAttack(replushedAttack) {}

	int getReplushedAttack();
	void setReplushedAttack(int replushedAttack);
	string getInfo() override;
	double findConsumption() override;
};

