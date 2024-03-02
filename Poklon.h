#pragma once
#include <iostream>
using namespace std;
class Poklon
{
protected:
	double cena;
	int masnice;
public:
	Poklon();
	Poklon(double c, int m);
	virtual ~Poklon() {};
	virtual void prikaz(ostream& d);
	friend ostream& operator<<(ostream& d, Poklon& p);
	virtual int broj_masnica() = 0;
};

