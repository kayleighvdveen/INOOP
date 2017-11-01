#pragma once
#include "OpenbaarVervoer.h"

class Bus : 
	public OpenbaarVervoer
{
public:
	Bus();
	~Bus();

	void busReizigers();
	void totaleKosten();

private:
	int reizigers;
	float kosten;
};

