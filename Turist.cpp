#include"Turist.h"
using namespace std;
void Turist::checkForErrors(int capacitate, string tip) {
	try {
		int min, max;
		if (tip == "amator") {
			min = 1;
			max = 7;
			if (!(capacitate >= min && capacitate <= max)) {
				throw(capacitate);
			}
		}
		else if (tip == "expert") {
			min = 8;
			max = 15;
			if (!(capacitate >= min && capacitate <= max))
				throw(capacitate);
		}
		else {
			throw(tip);
		}
	}
	catch (int capacitate) {
		cout << "Capacitatea unui drum " << capacitate << "nu este in intervalul bun!\n";
		cout << "Va trebui sa introduceti iar datele\n";
		citire();
	}
	catch (string tip) {
		cout << "Nu ati ales categoria de turist corespuzator!\n";
		cout << "Va trebui sa introduceti iar datele\n";
		citire();
	}
}
Turist::Turist() {
	capacitate = 0;
	nume = "default_lastName";
	prenume = "defult_firstName";
	tip = "default_type";
	citire();
}
void Turist::citire() {
//	cout << "Introduceti numele turistului:\n";
	cin >> nume;
	//cout << "Introduceti prenumele turistului:\n";
	cin >> prenume;
	//cout << "Introduceti tipul( poate fi amator sau expert):\n";
	cin >> tip;
	//cout << "Introduceti capacitate:\n";
	//cout << "Capacitatea de calatorie a turistului amator este intre [1,7]\n";
	//cout << "Capacitatea de calatorie a turistului expert este intre [8,15]\n";
	cin >> capacitate;
	checkForErrors(capacitate, tip);
}
void Turist::afisareT() {
	cout << nume << " " << prenume << " " << tip << " " << capacitate << '\n';
}
void drumPosibilParcursDeTurist(Turist* t,vector<Drum*> d) {
	bool gasit = false;
	for (int i = 0; i < d.size(); ++i) {

		if (d[i]->dificultate <= t->capacitate) {
			gasit = true;
			cout << "Turistul " << t->nume << " " << t->prenume<<" poate parcurge "<<d[i]->nume << " de tip " << d[i]->tip << "\n";
		}
	}
	if (!gasit) {
		cout << "Turistul" << t->nume << " " << t->prenume << "nu poate parcurge nici un drum" << '\n';
	}
}
