#include <iostream>
#include "Student.h"

int main() {
	Student st1;

	st1.name = "Alex";
	st1.age = 14;
	st1.mark = 9;

	cout << st1.convert();

	return 0;
}