#include "ArregloDinamico.h"

ArregloDinamico::ArregloDinamico()
{
    arreglodinamico = new string[MAX];
    cont = 0;
    tam = MAX;
}

ArregloDinamico::~ArregloDinamico()
{
    delete[] arreglodinamico;
}

void ArregloDinamico::insertar_final(string v)
{
    if (cont == tam) {
        expandir();
    }
    arreglodinamico[cont] = v;
    cont++;
}
void ArregloDinamico::insertar_inicio(string v)
{
    if (cont == tam) {
        expandir();
    }
    for (size_t i = cont; i > 0; i--) {
        arreglodinamico[i] = arreglodinamico[i-1]; 
    }
    arreglodinamico[0] = v;
    cont++;
}

size_t ArregloDinamico::size()
{
    return cont;
}

void ArregloDinamico::expandir()
{
    string *nuevo = new string[tam+MAX];

    for (size_t i = 0; i < cont; i++) {
        nuevo[i] = arreglodinamico[i];
    }
    delete[] arreglodinamico;
    arreglodinamico = nuevo;
    tam = tam + MAX;
}