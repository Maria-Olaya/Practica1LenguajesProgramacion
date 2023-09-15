//
// Created by maria on 10/09/2023.
//
// Archivo: Listad.h
// Este archivo fue creado por Maria el 5 de septiembre de 2023.

#ifndef PRACTICALEN_LISTAD_H
#define PRACTICALEN_LISTAD_H

#include "Nodo.h"

class ListaD {
public:
    Nodo *head; // Puntero al primer nodo de la lista doblemente enlazada.

    // Constructor de la clase ListaD
    ListaD();

    // Método para insertar un nuevo nodo al principio de la lista.
    void insert(int value, char cientifico);

    void insertF(int value, char cientifico);

    // Método para crear una lista doblemente enlazada aleatoria (posiblemente contiene números aleatorios).
    void crearListaAleatoria();

    // Método para mostrar los elementos de la lista doblemente enlazada.
    void Mostrar();
};

#endif //PRACTICALEN_LISTAD_H
