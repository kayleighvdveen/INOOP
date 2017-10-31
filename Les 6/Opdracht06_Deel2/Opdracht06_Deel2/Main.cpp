#include <fstream>
#include <iostream>
#include <string>

#define INPUTFILE1 "C:\Bureaublad\INPUTFILE1.txt"
#define OUTPUTFILE1 "C:\Bureaublad\OUTPUTFILE1.txt"
#define OUTPUTFILE2 "C:\Bureaublad\OUTPUTFILE2.txt"

int main() {

	char ch;
	bool inputFiles = true;

	std::string anotherResult;

	std::ifstream in_stream;
	in_stream.open(INPUTFILE1);

	std::ifstream in_stream;
	std::ofstream out_stream_1;
	std::ofstream out_stream_2;

	std::noskipws(in_stream);
	std::noskipws(out_stream_1);
	std::noskipws(out_stream_2);

	if (!in_stream) {
		std::cout << "Problemen met input .txt file" << std::endl;
		exit(1);
	}

	out_stream_1.open(OUTPUTFILE1);
	if (!out_stream_1) {
		std::cout << "Problemen met OUTPUTFILE1" << std::endl;
		exit(1);
	}

	out_stream_2.open(OUTPUTFILE2);
	if (!out_stream_2) {
		std::cout << "Problemen met OUTPUTFILE2" << std::endl;
		exit(1);
	}

	while (!in_stream.eof()) {
		getline(in_stream, anotherResult);

		if (inputFiles) {
			out_stream_1 << anotherResult;
		} else {
			out_stream_2 << anotherResult;
		}

		inputFiles = !inputFiles;
	}


	return 0;
}
