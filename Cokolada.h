#pragma once
#include "Poklon.h"
class Cokolada : public Poklon
{
	int kakao;
public:
	Cokolada();
	Cokolada(double c, int m, int k);
	~Cokolada() {};
	void prikaz(ostream& d);
	int broj_masnica();
};

