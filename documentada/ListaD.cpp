// Archivo: ListaD.cpp
// Este archivo fue creado por Maria el 5 de septiembre de 2023.

#include "ListaD.h" // Incluye el archivo de encabezado de la clase ListaD.
#include "Nodo.h" // Incluye el archivo de encabezado de la clase Nodo.
#include <iostream> // Incluye la biblioteca de entrada/salida estándar.

using namespace std; // Usamos el espacio de nombres std para evitar tener que anteponer "std::" a los elementos de esta biblioteca.

// Constructor de la clase ListaD
ListaD::ListaD() {
    this->head = nullptr; // Inicializa el puntero head como nullptr, indicando que la lista está vacía al principio.
}

// Método para insertar un nuevo nodo al inicio de la lista
void ListaD::insert(int value, char cientifico) {
    // Crea un nuevo nodo
    Nodo *node = new Nodo(value, cientifico);
    node->next = this->head;

    // Cuando la lista no está vacía
    if (this->head != nullptr) {
        this->head->prev = node;
    }

    // Hace que el nuevo nodo sea el Head de la lista
    this->head = node;
}



// Método para insertar un nuevo nodo al final de la lista doblemente enlazada.
void ListaD::insertF(int dato, char cientifico) {
    // Crear un nuevo nodo con los valores proporcionados.
    Nodo* nuevoNodo = new Nodo(dato, cientifico);

    // Caso especial: si la lista está vacía, el nuevo nodo se convierte en el primer nodo.
    if (head == nullptr) {
        head = nuevoNodo;
    } else {
        // Caso general: recorrer la lista hasta llegar al último nodo.
        Nodo* nodoActual = head;

        // Avanzar hasta el último nodo.
        while (nodoActual->getNextNodo() != nullptr) {
            nodoActual = nodoActual->getNextNodo();
        }

        // Actualizar los punteros del nuevo nodo y del último nodo actual.
        nuevoNodo->setPrev(nodoActual);
        nodoActual->setNext(nuevoNodo);
    }
}





// Método para crear una lista con 22 nodos con valores y científicos aleatorios
void ListaD::crearListaAleatoria() {
    srand(static_cast<unsigned int>(time(nullptr))); // Inicializa la semilla del generador de números aleatorios

    for (int i = 0; i < 22; i++) {
        // Genera un valor entero aleatorio entre 1 y 100
        int valorAleatorio = rand() % 100 + 1;

        // Genera un carácter aleatorio ('R' o 'E')
        char cientificoAleatorio = (rand() % 2 == 0) ? 'R' : 'E';

        // Inserta el nodo con el valor y científico aleatorios en la lista
        insertF(valorAleatorio, cientificoAleatorio);
    }
}


// Método para mostrar los elementos de la lista doblemente enlazada


void ListaD::Mostrar() {
    Nodo* nodoActual = head;

    // Iterar a través de la lista.
    while (nodoActual != nullptr) {
        // Imprimir la representación del nodo en el formato deseado.
        std::cout << "[" << nodoActual->getDatoNodo() << "|" << nodoActual->getCientificoNodo() << "] -> ";

        nodoActual = nodoActual->getNextNodo();
    }

    std::cout << "null\n"; // Marca el final de la lista.
    std::cout << "\n"; // Salto de línea.
}


/*void ListaD::Mostrar() {
    Nodo* nodoActual = head;

    // Iterar a través de la lista.
    while (nodoActual != nullptr) {
        // Imprimir la representación del nodo en el formato deseado.
        std::cout << "[";
        if (nodoActual->getPrevNodo() != nullptr) {
            std::cout << nodoActual->getPrevNodo() << "|";
        } else {
            std::cout << "null|";
        }

        std::cout << " " << nodoActual->getDatoNodo() << "| " << nodoActual->getCientificoNodo() << " |";

        if (nodoActual->getNextNodo() != nullptr) {
            std::cout << nodoActual->getNextNodo();
        } else {
            std::cout << "null";
        }

        std::cout << "] -> ";

        nodoActual = nodoActual->getNextNodo();
    }

    std::cout << "null\n"; // Marca el final de la lista.
}
*/
