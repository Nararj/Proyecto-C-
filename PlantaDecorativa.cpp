#ifndef PLANTA_DECORATIVA_H
#define PLANTA_DECORATIVA_H

#include "Planta.cpp"
#include <string>
using namespace std;

class PlantaDecorativa : public Planta {
private:
    string colorFlor;

public:
    PlantaDecorativa() : Planta() { colorFlor = "Desconocido"; }

    PlantaDecorativa(string n, float h, Cuidados c, string color) : Planta(n, h, c) {
        colorFlor = color;
    }

    // Getters / Setters
    string getColorFlor() { return colorFlor; }
    void setColorFlor(string color) { colorFlor = color; }

    void podar() {
        cout << nombre << " ha sido podada. Color de flor: " << colorFlor << endl;
    }

    void mostrarInfo() override {
        Planta::mostrarInfo();
        cout << "Color de la flor: " << colorFlor << endl;
    }
};

#endif
