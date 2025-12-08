/*
 * Descripcion: Clase Jardin que contiene y gestiona una coleccion de plantas
 * Autor: Narayana Rajaram Lopez | A01714315
 * Fecha: 07/12/2025
 */

#pragma once
#include <iostream>
#include <list>
using namespace std;

#include "Planta.cpp"

class Jardin {
private:
    list<Planta*> plantas;

public:
    /*
     * Constructor de la clase Jardin
     * Inicializa la lista de plantas vacia
     * Parametros: ninguno
     */
    Jardin() {
    }

    /*
     * Agrega una planta al jardin
     * Parametros:
     *   planta: puntero a la planta que se va a agregar
     * Retorno: void
     */
    void agregarPlanta(Planta* planta) {
        plantas.push_back(planta);
    }

    /*
     * Muestra la informacion de todas las plantas del jardin
     * Parametros: ninguno
     * Retorno: void
     */
    void mostrarPlantas() {
        cout << "\nPlantas en el jardin\n";
        
        // Recorrer todas las plantas del jardin
        for (Planta* p : plantas) {
            p->mostrarInfo();
        }
    }
};