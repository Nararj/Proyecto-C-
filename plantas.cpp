#include <iostream>
#include <vector>
using namespace std;

// Clase 1: PlantaDecorativa
class PlantaDecorativa {
private:
    string nombre;
    float altura;       // en cm
    float cantidadAgua; // litros por día

public:
    // Constructor
    PlantaDecorativa(string n, float h, float agua) {
        nombre = n;
        altura = h;
        cantidadAgua = agua;
    }

    // Métodos
    void mostrarInfo() {
        cout << "Planta Decorativa: " << nombre << endl;
        cout << "Altura: " << altura << " cm" << endl;
        cout << "Agua diaria: " << cantidadAgua << " L" << endl;
    }

    void podar() {
        cout << nombre << " ha sido podada." << endl;
    }
};

// Clase 2: Plantas Comestibles
class PlantaComestible {
private:
    string nombre;
    float altura;
    float cantidadAgua;

public:
    PlantaComestible(string n, float h, float agua) {
        nombre = n;
        altura = h;
        cantidadAgua = agua;
    }

    void mostrarInfo() {
        cout << "Planta Comestible: " << nombre << endl;
        cout << "Altura: " << altura << " cm" << endl;
        cout << "Agua diaria: " << cantidadAgua << " L" << endl;
    }

    void cosechar() {
        cout << nombre << " ha sido cosechada." << endl;
    }
};

// Clase 3: Arbol
class Arbol {
private:
    string nombre;
    float altura;
    float cantidadAgua;

public:
    Arbol(string n, float h, float agua) {
        nombre = n;
        altura = h;
        cantidadAgua = agua;
    }

    void mostrarInfo() {
        cout << "Árbol: " << nombre << endl;
        cout << "Altura: " << altura << " cm" << endl;
        cout << "Agua diaria: " << cantidadAgua << " L" << endl;
    }

    void podarAltura() {
        cout << nombre << " ha sido podado para reducir altura." << endl;
    }
};

// Main
int main() {
    // Crear un objeto de cada clase
    PlantaDecorativa rosa("Rosa", 50, 0.5);
    PlantaComestible tomate("Tomate", 30, 1.0);
    Arbol roble("Roble", 300, 10.0);

    // Llamar métodos para demostrar que funcionan
    rosa.mostrarInfo();
    rosa.podar();
    cout << endl;

    tomate.mostrarInfo();
    tomate.cosechar();
    cout << endl;

    roble.mostrarInfo();
    roble.podarAltura();
    cout << endl;

    return 0;
}
