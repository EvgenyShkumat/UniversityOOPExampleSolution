#pragma once
#include "Transport.h"

class GasStation
{
public:
	int calcTotalGas(Transport* transport, int size) {
		int total = 0;

		for (int i = 0; i < size; i++)
		{
			total += transport[i].getTank();
		}

		return total;
	}
};

