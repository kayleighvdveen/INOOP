#include <iostream>
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek() {
	std::cout << "Broodmandje: ctor" << std::endl;
}

void Bibliotheek::toon() {
	std::cout << "Boekenlijst" << boek->_type << std::endl;
}

void Bibliotheek::voegToe(std::string type) {
	boek = new Boek(type);
}

Bibliotheek::~Bibliotheek() {
	std::cout << "Bibliotheek: dtor" << std::endl;
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
	boek = new Boek();
	boek->_type = bibliotheek.boek->_type;
}