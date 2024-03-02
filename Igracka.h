#pragma once
#include "Poklon.h"
class Igracka : public Poklon
{
	char* tip;
public:
	Igracka();
	Igracka(double c, int m, const char* t);
	~Igracka();
	void prikaz(ostream& d);
	int broj_masnica();
};

