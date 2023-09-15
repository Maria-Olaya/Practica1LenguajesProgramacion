cmake_minimum_required(VERSION 3.26)
project(documentada)

set(CMAKE_CXX_STANDARD 17)

add_executable(documentada main.cpp
        Nodo.cpp
        Nodo.h
        ListaD.cpp
        ListaD.h
        MaquinaT.cpp
        MaquinaT.h)
