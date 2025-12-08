/*
 * Descripcion: Clase base Planta que representa una planta generica
 * Autor: Narayana Rajaram Lopez | A01714315
 * Fecha: 07/12/2025
 */

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Planta {
private:
    string nombre;
    string tipo;

public:
    /*
     * Constructor de la clase Planta
     * Parametros:
     *   nombre: nombre de la planta
     *   tipo: tipo de la planta
     */
    Planta(string nombre, string tipo) : nombre(nombre), tipo(tipo) {
    }

    /*
     * Establece el nombre de la planta
     * Parametros:
     *   nombre: nuevo nombre de la planta
     * Retorno: void
     */
    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    /*
     * Establece el tipo de la planta
     * Parametros:
     *   tipo: nuevo tipo de la planta
     * Retorno: void
     */
    void setTipo(string tipo) {
        this->tipo = tipo;
    }

    /*
     * Obtiene el nombre de la planta
     * Parametros: ninguno
     * Retorno: nombre de la planta como string
     */
    string getNombre() {
        return nombre;
    }

    /*
     * Obtiene el tipo de la planta
     * Parametros: ninguno
     * Retorno: tipo de la planta como string
     */
    string getTipo() {
        return tipo;
    }

    /*
     * Muestra la informacion de la planta
     * Parametros: ninguno
     * Retorno: void
     */
    virtual void mostrarInfo() {
        cout << "Planta: " << nombre << " ( " << tipo << " ) " << endl;
    }
};