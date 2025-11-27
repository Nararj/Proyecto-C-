#ifndef CUIDADOS_H
#define CUIDADOS_H

#include <string>
using namespace std;

class Cuidados {
private:
    string riego;
    string luz;
    string fertilizacion;

public:
    Cuidados() {
        riego = "Normal";
        luz = "Media";
        fertilizacion = "Mensual";
    }

    Cuidados(string r, string l, string f) {
        riego = r;
        luz = l;
        fertilizacion = f;
    }

    // Getters
    string getRiego() { return riego; }
    string getLuz() { return luz; }
    string getFertilizacion() { return fertilizacion; }

    // Setters
    void setRiego(string r) { riego = r; }
    void setLuz(string l) { luz = l; }
    void setFertilizacion(string f) { fertilizacion = f; }

    void mostrarCuidados() {
        cout << "Riego: " << riego << ", Luz: " << luz << ", Fertilizacion: " << fertilizacion << endl;
    }
};

#endif
