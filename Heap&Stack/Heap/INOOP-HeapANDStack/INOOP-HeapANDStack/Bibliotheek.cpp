#include <iostream>
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek() {
}

void Bibliotheek::toon() {
	std::cout << "Boekenlijst" << boek->_type << std::endl; // door -> ipv . te doen, roep je de heap op. 
}

void Bibliotheek::voegToe(std::string type) {
	boek = new Boek(type);

}
