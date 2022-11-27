#include"Obiectiv.h"
#include<stdio.h>
using namespace std;
Obiectiv::Obiectiv(){
	nume = "default_name";
	citire();
}

void Obiectiv::citire() {
	//cout << "Introduceti numele obiectivului:\n";
	fflush(stdin);
	getline(cin, nume);
}
void Obiectiv::afisare() {
	cout << nume << "\n";
}