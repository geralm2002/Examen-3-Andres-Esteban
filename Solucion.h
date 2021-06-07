#pragma once
#include "Nodo.h"
#include <fstream> #include <string> ... 
#include <fstream>
#include <string>
#include <iostream>

#include <cstdlib>
#include <cstdio>
using namespace std;
class Solucion
{
    void ayudantePreordenEscritura(Nodo* nodoM)
    {

        std::fstream file("MemoriaIA.txt", std::fstream::out | std::ios::app); //usamos out y app para escribir y guardar el texto anterios sin sobre escribir en el archivo, respectivamente

        if (nodoM == 0) { //cuando el noso sea cero agregamos un cero al archivo para indicar que es un nodo vaci cuando este se requiera reestructurar
            file << "0" << "\n";
            file << std::flush;
            return;
        }
        if (file.is_open()) {
        }


        //mostrar datos del nodo
        ayudantePreordenEscritura(nodoM->subArbolIzdo());
        //recorrer sub�rbol izquierdo
        ayudantePreordenEscritura(nodoM->subArbolDcho());
        //recorrer sub�rbol derecho
        file.close();

    }
    //m�todo recursivo para realizar el recorrido inorden
     void ayudanteInorden(Nodo* nodo)
    {
        if (nodo == 0)
            return;
        ayudanteInorden(nodo->subArbolIzdo());
        //recorrer sub�rbol izquierdo				
        Console.WriteLine(nodo.datos + " ");
        //mostrar datos del nodo
        ayudanteInorden(nodo->subArbolDcho());
        //recorrer sub�rbol derecho
    }
   

    //m�todo recursivo para realizar el recorrido postorden
     void ayudantePostorden(Nodo* nodoM)
    {
        if (nodoM == 0)
            return;
        ayudantePostorden(nodoM->subArbolIzdo());
        //recorrer sub�rbol izquierdo				
        ayudantePostorden(nodoM->subArbolDcho());
        //recorrer sub�rbol derecho
        Console.WriteLine(nodoM.dato + " ");
        //mostrar datos del nodo
    }

};

