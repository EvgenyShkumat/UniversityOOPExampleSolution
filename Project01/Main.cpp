#include <iostream>
#include "Manager.h"

int main() {
	
	Student st1{"Alex", 14, 7};
	Student st2{"Alice", 14, 5};
	Student st3{"Roma", 14, 10};
	Student st4{"Matvey", 14, 9};
	Student st5{"Alexey", 14, 6};

	int const size = 5;

	Student students[size]{st1, st2, st3, st4, st5};
	Manager manag;

	cout << "Best mark is " << manag.getMaxMark(students, size) << endl;
	cout << "Worst mark is " << manag.getMinMark(students, size) << endl;

	Student best = manag.getBestStudent(students, size);
	Student worst = manag.getWorstStudent(students, size);

	cout << "First best student is " << best.convert() << endl;
	cout << "First worst student is " << worst.convert() << endl;
	cout << "Average mark is " << manag.getAvgMark(students, size);
	

	return 0;
}