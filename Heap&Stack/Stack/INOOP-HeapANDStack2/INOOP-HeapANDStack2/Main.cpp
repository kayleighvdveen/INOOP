#include <iostream>
#include "Bibliotheek.h"

void geefBoekDoor(Bibliotheek bibliotheek) {
	std::cout << "Nieuwe boek gekregen" << std::endl;
	bibliotheek.toon();

	bibliotheek.voegToe("BoekEen");
	bibliotheek.toon();
}

int main() {
	Bibliotheek bibliotheek = Bibliotheek();
	bibliotheek.toon();

	bibliotheek.voegToe("BoekTwee");
	bibliotheek.toon();

	geefBoekDoor(bibliotheek);
	bibliotheek.toon();

	return 0;
}
