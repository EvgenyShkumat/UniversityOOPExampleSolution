#include <iostream>
#include "Student.h"

int main() {
	/*Student st1 = Student("Alex");
	Student st2("Potter", 14);
	Student st3("Alice", 15, 10);
	Student st4("Peter");*/

	//Student st1{};
	Student st2{"Alex"};
	Student st3{"Alex", 14};
	Student st4{"Alex", 14, 10};

	/*st1.age = 14;
	st1.mark = 9;

	st2.age = 16;
	st2.mark = 10;

	st3.age = 13;
	st3.mark = 7;*/

	//cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;
	

	return 0;
}