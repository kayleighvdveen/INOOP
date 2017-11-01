#include <iostream>
#include <vector>

#include "OpenbaarVervoer.h"
#include "Trein.h"
#include "Bus.h"

int main() {
	Trein trein = Trein();
	Bus bus = Bus();

	trein.totaleKosten();
	trein.treinReizigers();
	bus.totaleKosten();
	bus.busReizigers();

	std::cout << trein.kosten * trein.reizigers << std::endl;
	std::cout << bus.kosten * bus.reizigers << std::endl;
	std::cout << "Totale kosten van de trein en bus opgeteld:" << (trein.kosten * trein.reizigers) + (bus.kosten * bus.reizigers) << std::endl;
}