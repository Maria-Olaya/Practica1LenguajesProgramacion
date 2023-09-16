// Archivo: Nodo.h
// Creado por maria el 5 de septiembre de 2023.
// Este archivo va el esquema de la clase Nodo.

#ifndef PRACTICALEN_NODO_H
#define PRACTICALEN_NODO_H

#include <iostream>
#include <string>

class Nodo {
public:
    // Punteros a nodos adyacentes y  datos

    Nodo *next; // Puntero al siguiente nodo en la lista.
    Nodo *prev; // Puntero al nodo previo en la lista.
    int dato; // Almacena un valor entero.
    char cientifico; // Almacena una cadena de texto.

    // Constructores
    Nodo(int t, char c); // Constructor para crear un nodo con dato y científico.

    Nodo(int e, Nodo* p, Nodo* n); // Constructor para crear un nodo con enlaces a nodos previo y siguiente.

    // Métodos de acceso y modificación de datos y enlaces

    int getDatoNodo() const; // Método que devuelve el valor almacenado en el nodo.
    char getCientificoNodo() const; // Método que devuelve la cadena almacenada en el nodo.
    Nodo* getPrevNodo() const; // Método que devuelve un puntero al nodo previo en la lista (si existe).
    void setPrev(Nodo* sgte); // Método que establece el puntero "prev" del nodo actual para apuntar al nodo pasado como argumento.
    Nodo* getNextNodo() const; // Método que devuelve un puntero al siguiente nodo en la lista (si existe).
    void setNext(Nodo* sgte); // Método que establece el puntero "next" del nodo actual para apuntar al nodo pasado como argumento.
};

#endif // PRACTICALEN_NODO_H
