#include"Harta.h";
Harta::Harta(Drum* d, Obiectiv* o1, Obiectiv* o2) {
	drum = d;
	obiectiv1 = o1;
	obiectiv2 = o2;
}
void Harta::afisare() {
	cout << drum->nume << " " << obiectiv1->nume << " " << obiectiv2->nume << '\n';

}
Harta::~Harta() {

}