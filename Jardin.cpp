#ifndef JARDIN_H
#define JARDIN_H

#include <list>
#include "Planta.cpp"

class Jardin {
private:
    string nombre;
    list<Planta*> plantas; // Agregación

public:
    Jardin(string n) { nombre = n; }

    void agregarPlanta(Planta* p) {
        plantas.push_back(p);
    }

    void mostrarPlantas() {
        cout << "----- Jardin: " << nombre << " -----" << endl;
        for (Planta* p : plantas) {
            p->mostrarInfo();
            cout << endl;
        }
    }
};
#endif
