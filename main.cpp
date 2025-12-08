/*
 * Descripcion: Programa principal que demuestra el uso de clases de plantas
 * Autor: Narayana Rajaram Lopez | A01714315
 * Fecha: 07/12/2025
 */


#include <iostream>
using namespace std;

#include "PlantaDecorativa.cpp"
#include "PlantaComestible.cpp"
#include "Arbol.cpp"
#include "Jardin.cpp"

/*
 * Funcion principal del programa
 * Crea objetos de plantas, los agrega a un jardin y muestra su informacion
 * Parametros: ninguno
 * Retorno: 0 si el programa termina correctamente
 */
int main() {

    PlantaDecorativa decorativa("Rosa", "Rojo");
    PlantaComestible comestible("Zanahoria", "Raiz");
    Arbol arbol("Roble", 12);

    Jardin jardin;
    jardin.agregarPlanta(&decorativa);
    jardin.agregarPlanta(&comestible);
    jardin.agregarPlanta(&arbol);

    jardin.mostrarPlantas();

    return 0;
}