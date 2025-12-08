/*
 * Descripcion: Clase PlantaComestible que hereda de Planta
 * Autor: Narayana Rajaram Lopez | A01714315
 * Fecha: 07/12/2025
 */

#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Planta.cpp"

class PlantaComestible : public Planta {
private:
    string parteComestible;

public:
    /*
     * Constructor de la clase PlantaComestible
     * Parametros:
     *   nombre: nombre de la planta comestible
     *   parteComestible: parte comestible de la planta
     */
    PlantaComestible(string nombre, string parteComestible) : Planta(nombre, "Comestible"), parteComestible(parteComestible) {
    }

    /*
     * Establece la parte comestible de la planta
     * Parametros:
     *   parte: nueva parte comestible de la planta
     * Retorno: void
     */
    void setParteComestible(string parte) {
        this->parteComestible = parte;
    }

    /*
     * Obtiene la parte comestible de la planta
     * Parametros: ninguno
     * Retorno: parte comestible de la planta como string
     */
    string getParteComestible() {
        return parteComestible;
    }

    /*
     * Muestra la informacion de la planta comestible
     * Parametros: ninguno
     * Retorno: void
     */
    void mostrarInfo() override {
        cout << "Planta Comestible: " << getNombre() << ", Parte comestible: " << parteComestible << endl;
    }
};