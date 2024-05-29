#include "GuardBee.h"

int GuardBee::getReplushedAttack() { return replushedAttack; }
void GuardBee::setReplushedAttack(int replushedAttack) {
	if (replushedAttack > 0) {
		this->replushedAttack = replushedAttack;
	}
}