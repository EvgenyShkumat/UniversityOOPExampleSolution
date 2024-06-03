#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	/*ofstream fout("simple.txt");
	fout.open("simple.txt"); 

	fout << "This is a simple text.";

	fout.close();*/

	string buf;

	ifstream fin;
	fin.open("simple.txt");

	//fin >> buf;

	getline(fin, buf);

	fin.close();

	cout << "Result data: " << buf;

	return 0;
}