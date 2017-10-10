#include <iostream>
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek() {
}

void Bibliotheek::toon() {
	std::cout << "Boekenlijst" << boek._type << std::endl;
}

void Bibliotheek::voegToe(std::string type) {
	boek = Boek(type);

}