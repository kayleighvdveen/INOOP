#include <fstream>
#include <iostream>
#include <string>

#define FILE "C:\Bureaublad\Omgekeerdetext.txt"
#define OUTPUT "C:\Bureaublad\OutputOmgekeerdetext.txt"

int main() {

	std::string endResult;
	char ch;
	std::ifstream in_stream;

	int count = 0;

	in_stream.open(FILE);
	in_stream.get(ch);

	std::noskipws(in_stream);

	if (!in_stream) {
		std::cout << "Problemen met .txt file openen" << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open(OUTPUT);

	if (!out_stream) {
		std::cout << "Problemen met .txt file output" << std::endl;
		exit(1);
	}

	while (!in_stream.eof()) {
		in_stream >> ch;
		endResult += ch;
	}

	for (int i = endResult.size() - 1; i > 0; i--) {
		out_stream << endResult.at(i);
	}

	out_stream.close();

	return 0;
}