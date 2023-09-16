#include <iostream>
#include <string>
#include "ListaD.h"

#include "MaquinaT.h"
    int main() {
        // Crea una instancia de la clase ListaD
        ListaD lista;

        // Llama al método para crear una lista con 22 nodos aleatorios
        lista.crearListaAleatoria();

        // Muestra la lista generada
        lista.Mostrar();

        // Crea una instancia de la clase MaquinaT
        MaquinaT maquina;

        // Llama al método para determinar eventos en la lista
        maquina.determinarEventos(lista);

        // Puedes acceder al índice actual si es necesario

        //int indiceActual = maquina.getIndiceActual();
        //std::cout << "Indice actual: " << indiceActual << std::endl;

        return 0;
}

