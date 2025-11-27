#ifndef PLANTA_COMESTIBLE_H
#define PLANTA_COMESTIBLE_H

#include "Planta.cpp"

class PlantaComestible : public Planta {
public:
    PlantaComestible() : Planta() {}

    PlantaComestible(string n, float h, Cuidados c) : Planta(n, h, c) {}

    void cosechar() {
        cout << nombre << " ha sido cosechada." << endl;
    }
};
#endif
