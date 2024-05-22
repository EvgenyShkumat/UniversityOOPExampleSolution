#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "GasStation.h"
#include "Transport.h"
#include "Truck.h"
#include "Motorbike.h"
using namespace std;

int main() {
	Car car1{ 45 }, car2{ 55 }, car3{ 100 };
	Bus bus1{ 200 };
	Truck truck1{ 230 }, truck2{ 270 };
	Motorbike bike1{ 2 }, bike2{ 3 }, bike3{ 5 };

	Transport transports[]{ car1, car2, car3, bus1, truck1, truck2, bike1, bike2, bike3 };

	GasStation station;

	int total = station.calcTotalGas(transports, 9);

	cout << "Total: " << total;
}
