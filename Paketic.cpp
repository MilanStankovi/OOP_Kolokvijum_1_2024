#include "Paketic.h"
#include <fstream>
Paketic::Paketic() {
	broj = 0;
	sadrzaj = 0;
	napunjeno = 0;
}
Paketic::Paketic(int x) {
	broj = x;
	sadrzaj = new Poklon * [x];
	napunjeno = 0;
}
Paketic::~Paketic() {
	for (int i = 0; i < broj; i++) {
		delete sadrzaj[i];
	}
	delete[] sadrzaj;
}
void Paketic::Add(Poklon* p) {
	if (napunjeno <= broj) {
		sadrzaj[napunjeno] = p;
		napunjeno++;
	}
}
Paketic Paketic::operator+(Paketic& p) {
	Paketic* rez = new Paketic(p.broj + broj);
	rez->broj = p.broj + broj;
	for (int i = 0; i < broj; i++) {
		rez->sadrzaj[i] = sadrzaj[i];
	}
	for (int i = broj; i < rez->broj; i++) {
		rez->sadrzaj[i] = sadrzaj[i];
	}
	return *rez;
}
Paketic& Paketic::operator=(Paketic& p) {
	if (this != &p) {
		for (int i = 0; i < broj; i++) {
			delete sadrzaj[i];
		}
		delete[] sadrzaj;
		broj = p.broj;
		sadrzaj = new Poklon * [broj];
		for (int i = 0; i < broj; i++) {
			sadrzaj[i] = p.sadrzaj[i];
		}
	}
	return *this;
}
ostream& operator<<(ostream& izlaz, Paketic& p) {
	for (int i = 0; i < p.broj; i++) {
		izlaz << p.sadrzaj[i];
	}
	return izlaz;
}
void Paketic::Save(const char* c) {
	ofstream izlaz(c);
	if (izlaz.good()) {
		izlaz << *this;
	}
}
Poklon* Paketic::Max() {
	int max = 0;
	for (int i = 1; i < broj; i++) {
		if (sadrzaj[max]->broj_masnica() < sadrzaj[i]->broj_masnica()) {
			max = i;
		}
	}
	return sadrzaj[max];
}