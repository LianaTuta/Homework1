#include<iostream>
#include<fstream>
#include<vector>
#include"Drum.h"
#include"Obiectiv.h"
using namespace std;
#ifndef Harta_H
#define Harta_H

class Harta{
    public:
        Drum* drum;
        Obiectiv* obiectiv1;
        Obiectiv* obiectiv2;
        Harta(Drum* d, Obiectiv *o1 , Obiectiv *o2);
        void afisare();
        ~Harta();
};
#endif