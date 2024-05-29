#include "GuardBee.h"

int GuardBee::getReplushedAttack() { return replushedAttack; }
void GuardBee::setReplushedAttack(int replushedAttack) {
	if (replushedAttack > 0) {
		this->replushedAttack = replushedAttack;
	}
}

string GuardBee::getInfo() {
	return "Guard bee: " + Bee::getInfo() + ", amount of replushed attacks = " + to_string(replushedAttack);
}