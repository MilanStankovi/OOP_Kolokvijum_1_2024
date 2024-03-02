#include "Poklon.h"
Poklon::Poklon() {
	cena = 0;
	masnice = 0;
}
Poklon::Poklon(double c, int m) {
	cena = c;
	masnice = m;
}
ostream& operator<<(ostream& d, Poklon& p) {
	p.prikaz(d);
	return d;
}
void Poklon::prikaz(ostream& d) {
	d << "Cena: " << cena << endl;
	d << "masnice: " << masnice << endl;
}