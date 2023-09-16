// Archivo: MaquinaT.h
// Este archivo fue creado por Maria el 5 de septiembre de 2023.

#ifndef MAQUINAT_H
#define MAQUINAT_H

#include "ListaD.h" // Incluye el archivo de encabezado de la clase ListaD, asumiendo que MaquinaT utilizará la ListaD para sus operaciones.

class MaquinaT {
public:
    // Constructor de la clase MaquinaT
    MaquinaT();

    // Método para determinar números primos y eventos relacionados
    void determinarEventos(ListaD &lista);

private:
    // Función para verificar si un número es primo
    bool esPrimo(int num);

    // Función para verificar si dos números son coprimos
    bool Coprimo(int m, int n);

    // Función para calcular el Máximo Común Divisor (MCD) de dos números
    int calcularMCD(int a, int b);

    // Otros métodos y variables privadas según sea necesario para implementar la lógica de tus eventos
};

#endif // MAQUINAT_H
