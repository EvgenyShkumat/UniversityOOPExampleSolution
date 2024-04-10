#include <iostream>
#include "Manager.h"

int main() {
	Student st{ "Alex", 14, 10 };
	
	cout << st.convert() << endl;

	Student* point_st = new Student( "Alex", 14, 10 );

	cout << point_st->convert() << endl;

	delete point_st;
	
	return 0;
}