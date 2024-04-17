#include <iostream>
#include "Manager.h"



int main() {
	Student st1{ "Alex", 14, 10 };
	Student st2{ "Alex", 14, 10 };
	Student st3{ "Alex", 14, 10 };
	
	
	
	cout << Student::getCount() << endl;

	return 0;
}