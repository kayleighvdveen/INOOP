#pragma once
#include "Boek.h"

class Bibliotheek {
public:
	Bibliotheek();

	void toon();

	void voegToe(std::string type);

private:
	Boek* boek = new Boek(); // sterretje heet pointer, door deze functie uit te voeren heet een heap.
};