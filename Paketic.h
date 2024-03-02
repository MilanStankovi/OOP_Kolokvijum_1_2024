#pragma once
#include "Igracka.h"
#include "Cokolada.h"
class Paketic
{
	Poklon** sadrzaj;
	int broj;
	int napunjeno;
public:
	Paketic();
	Paketic(int x);
	~Paketic();
	void Add(Poklon* p);
	int BrojPoklona() { return broj; };
	Paketic operator+(Paketic& p);
	Paketic& operator=(Paketic& p);
	friend ostream& operator<<(ostream& izlaz, Paketic& p);
	void Save(const char* c);
	Poklon* Max();
	//void RemoveMinimum(Poklon p);
};

