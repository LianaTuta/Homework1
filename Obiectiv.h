#include<iostream>
#include<fstream>
#include<string>
using namespace std;
#ifndef Obiectiv_H
#define Obiectiv_H
class Obiectiv {
public:
    string nume;
    Obiectiv();
    void citire();
    void afisare();
};
#endif