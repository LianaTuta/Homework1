#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#ifndef Drum_H
#define Drum_H
class Drum{
    public:
        string nume;
        string tip;
        int dificultate;
        Drum();
        void citire();
        void checkForErrors(int nr, string tip);
        void checkForErrors(string tip);
        void afisare();
        ~Drum();
};
#endif