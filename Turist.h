#include<iostream>
#include<fstream>
#include<vector>
#include"Drum.h"
using namespace std;
#ifndef Turist_H
#define Turist_H

class Turist{
    public:
        string nume, prenume;
        string tip;
        int capacitate;
        Turist();
        void citire();
        void checkForErrors(int nr, string tip);
        void afisareT();
        friend void drumPosibilParcursDeTurist(Turist* t, vector<Drum*> d);
};
#endif