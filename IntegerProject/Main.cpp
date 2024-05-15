#include <iostream>
#include "Integer.h"
#include "Operators.h"
using namespace std;

int main() {
	Integer int1{3};
	Integer int2{7};

	Integer int3 = int1 + int2;

	cout << int3.getValue();
}