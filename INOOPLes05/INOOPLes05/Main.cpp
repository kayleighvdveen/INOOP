#include <iostream>
#include "Bibliotheek.h"

int main() {
	Bibliotheek boekenlijst = Bibliotheek();
	boekenlijst.toon();

	Bibliotheek anderelijst;
	anderelijst = boekenlijst;
	std::cout << " --- genre van het boek" << std::endl;
	anderelijst.toon();

	boekenlijst.voegToe("Boek #1");
	std::cout << " --- boekenlijst" << std::endl;
	boekenlijst.toon();

	anderelijst.voegToe("Boek #2");
	std::cout << "--- anderelijst" << std::endl;
	anderelijst.toon();

	int c;
	std::cin >> c;

	return 0;
}