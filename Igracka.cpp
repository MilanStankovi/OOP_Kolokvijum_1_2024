#include "Igracka.h"
Igracka::Igracka() : Poklon() {
	tip = 0;
}
Igracka::Igracka(double c, int m, const char* t) : Poklon(c, m) {
	tip = new char[strlen(t) + 1];
	strcpy(tip, t);
}
Igracka::~Igracka() {
	delete[] tip;
}
void Igracka::prikaz(ostream& d) {
	Poklon::prikaz(d);
	d << "Tip: " << tip << endl;
}
int Igracka::broj_masnica() {
	int rez = masnice + 2;
	return rez;
}