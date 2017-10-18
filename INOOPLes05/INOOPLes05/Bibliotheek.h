#pragma once
#include "Boek.h"

class Bibliotheek {
public:
	Bibliotheek();
	virtual ~Bibliotheek();
	Bibliotheek(const Bibliotheek& bibliotheek);

	void toon();
	void voegToe(std::string type);

	Bibliotheek& operator = (const Bibliotheek& bibliotheek);

private:
	Boek* boek = new Boek();
};