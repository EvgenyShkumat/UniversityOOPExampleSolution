#include <iostream>
#include "Manager.h"

int main() {

	Group groupA;

	Student st1{ "Alex", 14, 10 };
	Student st2{ "Xela", 12, 10 };
	Student st3{ "Axi"};
	
	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);

	cout << "Befor:\n" << groupA.convertToString() << endl;

	groupA.remove(st2);
	
	cout << "After:\n" << groupA.convertToString() << endl;


	return 0;
}