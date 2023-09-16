
// Este archivo fue creado por Maria el 5 de septiembre de 2023.

#include "MaquinaT.h" // Incluye el archivo de encabezado de la clase MaquinaT.
#include <iostream> // Incluye la biblioteca de entrada/salida estándar.

MaquinaT::MaquinaT() {
    // Constructor de MaquinaT (si es necesario inicializar algo)
}

// Función para calcular el MCD (máximo común divisor) de dos números
int MaquinaT::calcularMCD(int a, int b)  {
    while (b != 0) {
        int temp = b; // Crea una variable temporal para almacenar el valor de 'b'.
        b = a % b; // Calcula el residuo de 'a' dividido por 'b' y lo almacena en 'b'.
        a = temp; // Asigna el valor original de 'b' a 'a'.
    }
    return a; // Devuelve el MCD calculado.
}

// Función para verificar si dos números son coprimos
bool MaquinaT::Coprimo(int m, int n) {
    int mcd = calcularMCD(m, n); // Calcula el MCD de 'm' y 'n'.
    return mcd == 1; // Devuelve true si el MCD es igual a 1, lo que indica que son coprimos.
}



void MaquinaT::determinarEventos(ListaD &lista) {
    Nodo *temp = lista.head; // Crea un puntero temporal que apunta al primer nodo de la lista.
    Nodo *eventoA = nullptr; // Crea un puntero llamado 'eventoA' y lo inicializa como nulo.
    Nodo *eventoB = nullptr; // Crea un puntero llamado 'eventoB' y lo inicializa como nulo.
    Nodo *eventoC = nullptr; // Crea un puntero llamado 'eventoC' y lo inicializa como nulo.

    int indiceActual = 1; // Variable para rastrear el índice actual.

    while (temp != nullptr) { // Itera a través de la lista mientras el puntero 'temp' no sea nulo.
        int dato = temp->getDatoNodo(); // Obtiene el dato almacenado en el nodo actual.

        // Verificar si el número es primo
        if (esPrimo(dato)) { // Llama a la función 'esPrimo' para verificar si 'dato' es primo.
            std::cout << "Indice " << indiceActual << " es primo. Tipo de evento: ";

            if (eventoA == nullptr) { // Comprueba si 'eventoA' no ha sido inicializado.
                eventoA = temp;
                std::cout << "A, el dato es: " << dato << std::endl; // Imprime el tipo de evento y el dato.
                std::cout << "[" << eventoA->getDatoNodo() <<"|"<<eventoA->getCientificoNodo()<<"]"<< std::endl; // Imprime el tipo de evento y el dato.
                std::cout << "\n"; // Salto de línea.


            } else if (eventoB == nullptr) { // Comprueba si 'eventoB' no ha sido inicializado.
                eventoB = temp;
                std::cout << "B, el dato es: " << dato << std::endl; // Imprime el tipo de evento y el dato.
                std::cout << "[" << eventoA->getDatoNodo() <<"|"<<eventoA->getCientificoNodo()<<"]"<<"->"<< "[" << eventoB->getDatoNodo() <<"|"<<eventoB->getCientificoNodo()<<"]"<< std::endl; // Imprime el tipo de evento y el dato.
                std::cout << "\n"; // Salto de línea.
            } else {
                // Ambos eventos A y B están ocupados, considerar como evento C
                eventoC = temp;
                std::cout << "C, el dato es: " << dato << std::endl;

                int n = eventoA->getDatoNodo(); // Obtiene el dato almacenado en 'eventoA'.
                int m = eventoC->getDatoNodo(); // Obtiene el dato almacenado en 'eventoC'.
                char v = eventoA->getCientificoNodo(); // Obtiene el carácter científico almacenado en 'eventoA'.
                char g = eventoC->getCientificoNodo(); // Obtiene el carácter científico almacenado en 'eventoC'.

                if (Coprimo(n, m)) { // Llama a la función 'Coprimo' para verificar si 'n' y 'm' son coprimos.
                    std::cout << "Los numeros " << n << " y " << m << " son coprimos" << std::endl; // Imprime si son coprimos.

                    if (g == 'R' && v == 'R') { // Comprueba si ambos caracteres científicos son 'R'.
                        std::cout << "El cientifico " << g << " ha vuelto pero no puede entregarse a sí mismo información" << std::endl;
                        std::cout << "\n"; // Salto de línea.
                    } else {
                        std::cout << "El cientifico " << g << " ha vuelto y le ha entregado informacion al cientifico " << v << std::endl;
                        std::cout << "\n"; // Salto de línea.
                    }
                } else {
                    std::cout << "Los numeros " << n << " y " << m << " no son coprimos" << std::endl; // Imprime si no son coprimos.
                    std::cout << "El cientifico " << g <<" pero no se puede dar informacion a nadie" << std::endl;
                    std::cout << "\n"; // Salto de línea.
                }

                std::cout << "[" << eventoA->getDatoNodo() <<"|"<<eventoA->getCientificoNodo()<<"]"<<"->"<< "[" << eventoB->getDatoNodo() <<"|"<<eventoB->getCientificoNodo()<<"]"<<"->"<< "[" << eventoC->getDatoNodo() <<"|"<<eventoC->getCientificoNodo()<<"]"<< std::endl;
                std::cout << "\n"; // Salto de línea.
            }
        }

        indiceActual++; // Incrementar el índice actual
        temp = temp->getNextNodo(); // Avanza al siguiente nodo en la lista.
    }
}





// Función para verificar si un número es primo
bool MaquinaT::esPrimo(int num) {
    if (num < 2) { // Comprueba si el número es menor que 2.
        return false; // Devuelve false, ya que los números menores que 2 no son primos.
    }

    for (int i = 2; i * i <= num; i++) { // Itera desde 2 hasta la raíz cuadrada de 'num'.
        if (num % i == 0) { // Comprueba si 'num' es divisible por 'i'.
            return false; // Devuelve false, ya que 'num' no es primo.
        }
    }

    return true; // Devuelve true, ya que 'num' es primo.
}
