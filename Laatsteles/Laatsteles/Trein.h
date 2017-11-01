#pragma once
#include "OpenbaarVervoer.h"

class Trein :
	public OpenbaarVervoer
{
public:
	Trein();
	~Trein();

	void treinReizigers();
	void totaleKosten();

	bool toeslag = 0;

private:
	int reizigers;
	float kosten;
};

