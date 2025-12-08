/*
 * Descripcion: Clase Arbol que hereda de Planta y representa un arbol
 * Autor: Narayana Rajaram Lopez | A01714315
 * Fecha: 07/12/2025
 */

#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Planta.cpp"

class Arbol : public Planta {
private:
    int altura;

public:
    /*
     * Constructor de la clase Arbol
     * Parametros:
     *   nombre: nombre del arbol
     *   altura: altura del arbol en metros
     */
    Arbol(string nombre, int altura) : Planta(nombre, "Arbol"), altura(altura) {
    }

    /*
     * Establece la altura del arbol
     * Parametros:
     *   altura: nueva altura del arbol en metros
     * Retorno: void
     */
    void setAltura(int altura) {
        this->altura = altura;
    }

    /*
     * Obtiene la altura del arbol
     * Parametros: ninguno
     * Retorno: altura del arbol en metros como entero
     */
    int getAltura() {
        return altura;
    }

    /*
     * Muestra la informacion del arbol
     * Parametros: ninguno
     * Retorno: void
     */
    void mostrarInfo() override {
        cout << "Arbol: " << getNombre() << ", Altura: " << altura << " metros" << endl;
    }
};