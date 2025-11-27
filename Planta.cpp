#ifndef PLANTA_H
#define PLANTA_H

#include <iostream>
#include <string>
#include "Cuidados.cpp"
using namespace std;

class Planta {
protected:
    string nombre;
    float altura; // en cm
    Cuidados cuidados; // Composición

public:
    Planta() {
        nombre = "Sin nombre";
        altura = 0;
    }

    Planta(string n, float h, Cuidados c) : cuidados(c) {
        nombre = n;
        altura = h;
    }

    // Getters
    string getNombre() { return nombre; }
    float getAltura() { return altura; }
    Cuidados getCuidados() { return cuidados; }

    // Setters
    void setNombre(string n) { nombre = n; }
    void setAltura(float h) { altura = h; }
    void setCuidados(Cuidados c) { cuidados = c; }

    virtual void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Altura: " << altura << " cm" << endl;
        cuidados.mostrarCuidados();
    }

    virtual void regar() {
        cout << nombre << " ha sido regada." << endl;
    }
};

#endif
