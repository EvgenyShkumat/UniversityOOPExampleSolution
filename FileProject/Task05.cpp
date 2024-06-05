#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Symbol {
public:
	char letter;
	int count;
};

int main() {
	string alphabet = "qwertyuiopasdfghjklzxcvbnm";
	Symbol* symbols = new Symbol[alphabet.length()];

	for (int i = 0; i < alphabet.length(); i++)
	{
		symbols[i].count = 0;
		symbols[i].letter = alphabet[i];
	}

	ifstream fin("input.txt");
	string buf = "";

	if (!fin.fail()) {

		while (!fin.eof()) {
			getline(fin, buf);

			for (int i = 0; i < buf.length(); i++)
			{
				for (int j = 0; j < alphabet.length(); j++) {
					if (buf[i] >= 'A' && buf[i] <= 'z' && tolower(buf[i]) == alphabet[j]) {
						symbols[j].count++;
						break;
					}
				}
			}
		}

		fin.close();
	}

	for (int i = 0; i < alphabet.length() - 1; i++)
	{
		for (int j = 0; j < alphabet.length() - i - 1; j++)
		{
			if (symbols[j].count < symbols[j + 1].count) {
				swap(symbols[j], symbols[j + 1]);
			}
		}
	}

	ofstream fout("output.txt");

	if (!fout.fail()) {
		for (int i = 0; i < alphabet.length(); i++)
		{
			fout << symbols[i].letter << " - " << symbols[i].count << "\n";
		}

		fout.close();
	}

	return 0;
}