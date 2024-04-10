#include <iostream>
#include "Manager.h"

int main() {

	int x = 5;
	int y = (x *= 2) + (x += 3);

	cout << y << endl;

	Student st{"Alex", 14, 10};
	
	cout << "Before: " << st.convert() << endl;


	st.setMark(52);

	cout << "After: " << st.convert() << endl;

	return 0;
}