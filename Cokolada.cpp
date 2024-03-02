#include "Cokolada.h"
Cokolada::Cokolada() : Poklon() {
	kakao = 0;
}
Cokolada::Cokolada(double c, int m, int k) : Poklon(c,m) {
	kakao = k;
}
void Cokolada::prikaz(ostream& d) {
	Poklon::prikaz(d);
	d << "Kakao: " << kakao << endl;
}
int Cokolada::broj_masnica() {
	int rez = masnice * 2;
	return rez;
}