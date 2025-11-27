#ifndef ARBOL_H
#define ARBOL_H

#include "Planta.cpp"

class Arbol : public Planta {
public:
    Arbol() : Planta() {}

    Arbol(string n, float h, Cuidados c) : Planta(n, h, c) {}

    void podarAltura() {
        cout << nombre << " ha sido podado en altura." << endl;
    }
};
#endif
