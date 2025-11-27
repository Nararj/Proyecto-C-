#include "PlantaDecorativa.cpp"
#include "PlantaComestible.cpp"
#include "Arbol.cpp"
#include "Jardin.cpp"
#include <iostream>
using namespace std;

int main() {

    Cuidados c1("Poco", "Alta", "Rara vez");
    Cuidados c2("Moderado", "Media", "Mensual");
    Cuidados c3("Constante", "Baja", "Semanal");

    PlantaDecorativa rosa("Rosa", 50, c1, "Rojo");
    PlantaComestible tomate("Tomate", 30, c2);
    Arbol roble("Roble", 300, c3);

    Jardin jardin("Mi Jardin");

    jardin.agregarPlanta(&rosa);
    jardin.agregarPlanta(&tomate);
    jardin.agregarPlanta(&roble);

    jardin.mostrarPlantas();

    // Demostración de métodos específicos
    rosa.podar();
    tomate.cosechar();
    roble.podarAltura();

    return 0;
}
