#include<iostream>
#include<vector>
#include"Drum.h"
#include"Turist.h"
#include"Obiectiv.h"
#include"Harta.h"
#include<stdio.h>
using namespace std;
template<typename T>
T compareDrum(T x, T y) {
	return x > y;
}
int main() {
	
	vector<Drum*> d;
	for (int i = 0; i < 5; ++i) {
		d.push_back(new Drum());
	}
	cout << "Drumuri:\n";
	for (int i = 0; i < 5; ++i) {
		d[i]->afisare();
	}
	
	vector<Turist*> t;

	for (int i = 0; i < 5; ++i) {
		t.push_back(new Turist());
	}
	cout << "Turisti:\n";
	for (int i = 0; i < 5; ++i) {
		t[i]->afisareT();
	}
	drumPosibilParcursDeTurist(t[0], d);

	cout << "Obiective:\n";
	vector<Obiectiv*> o;
	cin.get(); cin.get();
	for (int i = 0; i < 3; ++i) {
		o.push_back(new Obiectiv());
	}
	for (int i = 0; i < 3; ++i) {
		o[i]->afisare();
	}
	vector<Harta*> map;
	for (int i = 0; i < 1; ++i) {
		map.push_back(new Harta(d[i],o[i],o[i+1]));
	}
	cout << "Harta:\n";
	for (int i = 0; i < 1; ++i) {
		map[i]->afisare();
	}
	for (int i = 0; i < d.size(); ++i) {
		delete d[i];
	}
	for (int i = 0; i < o.size(); ++i) {
		delete o[i];
	}
	for (int i = 0; i < t.size(); ++i) {
		delete t[i];
	}
	for (int i = 0; i < map.size(); ++i) {
		delete map[i];
	}
	return 0;
}