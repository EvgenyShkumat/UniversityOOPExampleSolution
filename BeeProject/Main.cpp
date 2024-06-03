#include <iostream>
#include "Bee.h"
#include "Beehive.h"
#include "BuilderBee.h"
#include "GuardBee.h"
using namespace std;

int main() {
	Beehive beehive{};

	GuardBee* bee1 = new GuardBee();
	BuilderBee* bee2 = new BuilderBee();

	beehive.add(bee1);
	beehive.add(bee2);

	cout << beehive.getBeesInfo();

	return 0;
}