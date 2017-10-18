#include "Boek.h"
#include <iostream>

Boek::Boek(std::string type) {
	_type = type;
}

Boek::Boek() {
	std::cout << "Boek: ctor" << std::endl;
}

Boek::~Boek() {
	std::cout << "Boek: dtor" << std::endl;
}
