#include <iostream>
#include "Bee.h"
#include "Beehive.h"
#include "BuilderBee.h"
#include "GuardBee.h"
#include "Beekeeper.h"
#include "WorkerBee.h"
using namespace std;

int main() {
	Beehive beehive{};

	GuardBee* bee1 = new GuardBee();
	BuilderBee* bee2 = new BuilderBee();
	WorkerBee* bee3 = new WorkerBee(10, 1, "chamoline", 2000);
	WorkerBee* bee4 = new WorkerBee(8, 1.5, "chamoline", 2500);

	beehive.add(bee1);
	beehive.add(bee2);
	beehive.add(bee3);
	beehive.add(bee4);

	Beekeeper keeper;

	cout << keeper.findHoney(beehive);

	return 0;
}