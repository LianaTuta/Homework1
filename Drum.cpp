#include"Drum.h"
using namespace std;

Drum::Drum() {
	dificultate = 0;
	nume = "default_name";
	tip = "default_type";
	citire();
}

void Drum::citire() {
	cout << "Introduceti numele:\n";
	cin >> nume;
	cout<< "Introduceti tipul( poate fi rutier, poteca sau  forestier): \n";
	cin>> tip;
	cout << "Introduceti dificultatea:\n";
	cout << "Dificultatea drumului rutier este intre [1,5]\n";
	cout << "Dificultatea drumului forestier este intre [6,10]\n";
	cout << "Dificultatea drumului poteca este intre [11,15]\n";
	cin >> dificultate;
	checkForErrors(dificultate, tip);
	checkForErrors(tip);
}
void Drum::checkForErrors(int dif, string tip) {
	try {
		int min, max;
		if (tip == "rutier") {
			min = 1;
			max = 5;
			if (!(dif >= min && dif <= max)) {
				throw(dif);
			}
		}
		else if (tip == "forestier") {
			min = 6;
			max = 10;
			if (!(dif >= min && dif <= max))
				throw(dif);
		}
		else if (tip == "poteca") {
			min = 11;
			max = 15;
			if (!(dif >= min && dif <= max))
				throw(dif);
		}
	}
	catch (int dif) {
		cout << "Dificultatea drumului " << dif << "nu este in intervalul bun!\n";
		cout << "Va trebui sa introduceti iar datele\n";
		citire();
	}
}
void Drum::checkForErrors(string tip) {
	try {

		if (!(tip == "rutier" || tip == "forestier" || tip == "poteca"))
			throw(tip);
	}
	catch (string tip) {
		cout << "Nu ati ales categoria de drum corespuzator!\n";
		cout << "Va trebui sa introduceti iar datele\n";
		citire();
	}
}
void Drum::afisare() {
	cout << nume<<" "<<tip<<" "<<dificultate<<"\n";
}
Drum::~Drum() { 
	;
}

