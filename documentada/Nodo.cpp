
// Creado por maria el 5 de septiembre de 2023.

#include "Nodo.h"

// Constructor de Nodo que recibe un entero "dato" y una cadena "cientifico".
Nodo::Nodo(int dato, char cientifico)
{
    // Se inicializan los   datos con los valores proporcionados.
    this->dato = dato; // Asigna el valor de 'dato' al miembro de datos 'dato' de este objeto Nodo.
    this->cientifico = cientifico; // Asigna el valor de 'cientifico' al miembro de datos 'cientifico' de este objeto Nodo.

    // Se establecen los punteros "next" y "prev" en nullptr, indicando que el nodo no está vinculado a ningún otro nodo en este momento.
    this->next = nullptr; // 'next' es un puntero que apunta al siguiente nodo en la lista (inicializado a nullptr).
    this->prev = nullptr; // 'prev' es un puntero que apunta al nodo previo en la lista (inicializado a nullptr).
}

// Constructor de Nodo que recibe un entero "e" y dos punteros a Nodo "p" y "n".
Nodo::Nodo(int e, Nodo* p, Nodo* n) {
    // Se inicializan los miembros de datos con los valores proporcionados.
    dato = e; // Asigna el valor de 'e' al miembro de datos 'dato' de este objeto Nodo.
    prev = p; // 'prev' es un puntero que apunta al nodo previo en la lista (pasado como argumento).
    next = n; // 'next' es un puntero que apunta al siguiente nodo en la lista (pasado como argumento).
}

// Método que devuelve el valor del dato almacenado en el nodo.
int Nodo::getDatoNodo() const {
    return dato; // Retorna el valor almacenado en el miembro de datos 'dato' de este objeto Nodo.
}


  char Nodo::getCientificoNodo() const {
    return cientifico; // Retorna la cadena almacenada en el miembro de datos 'cientifico' de este objeto Nodo.
}

// Método que devuelve un puntero al nodo previo en la lista enlazada (si existe).
Nodo* Nodo::getPrevNodo() const {
    return prev; // Retorna el puntero 'prev', que apunta al nodo previo en la lista.
}

// Método que establece el puntero "prev" del nodo actual para apuntar al nodo pasado como argumento.
void Nodo::setPrev(Nodo* sgte) {
    prev = sgte; // Asigna el valor del puntero 'sgte' al puntero 'prev' de este objeto Nodo.
}

// Método que devuelve un puntero al siguiente nodo en la lista enlazada (si existe).
Nodo* Nodo::getNextNodo() const {
    return next; // Retorna el puntero 'next', que apunta al siguiente nodo en la lista.
}

// Método que establece el puntero "next" del nodo actual para apuntar al nodo pasado como argumento.
void Nodo::setNext(Nodo* sgte) {
    next = sgte; // Asigna el valor del puntero 'sgte' al puntero 'next' de este objeto Nodo.
}
