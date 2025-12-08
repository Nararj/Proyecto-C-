/*
 * Descripcion: Clase PlantaDecorativa que hereda de Planta
 * Autor: Narayana Rajaram Lopez | A01714315
 * Fecha: 07/12/2025
 */

#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Planta.cpp"

class PlantaDecorativa : public Planta {
private:
    string color;

public:
    /*
     * Constructor de la clase PlantaDecorativa
     * Parametros:
     *   nombre: nombre de la planta decorativa
     *   color: color de la planta decorativa
     */
    PlantaDecorativa(string nombre, string color) : Planta(nombre, "Decorativa"), color(color) {
    }

    /*
     * Establece el color de la planta decorativa
     * Parametros:
     *   color: nuevo color de la planta
     * Retorno: void
     */
    void setColor(string color) {
        this->color = color;
    }

    /*
     * Obtiene el color de la planta decorativa
     * Parametros: ninguno
     * Retorno: color de la planta como string
     */
    string getColor() {
        return color;
    }

    /*
     * Muestra la informacion de la planta decorativa
     * Parametros: ninguno
     * Retorno: void
     */
    void mostrarInfo() override {
        cout << "Planta Decorativa: " << getNombre() << ", Color: " << color << endl;
    }
};