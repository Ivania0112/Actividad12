#include <iostream>
#include "arreglodinamico.h"
using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}

int main() 
{
    ArregloDinamico arreglodinamico;
    arreglodinamico.insertar_final("I");
    arreglodinamico.insertar_final("V");
    arreglodinamico.insertar_final("A");
    arreglodinamico.insertar_final("N");
    arreglodinamico.insertar_final("I");
    arreglodinamico.insertar_final("A");
    arreglodinamico.insertar_final("R");
    arreglodinamico.insertar_final("P");
    arreglodinamico.insertar_inicio("*");
    arreglodinamico.insertar_inicio("*");

    for (size_t i = 0; i < arreglodinamico.size(); i++)
    {
        cout << arreglodinamico[i] << " ";
    }
    

    // int *b = nullptr;
    // b = new int[100];
    // cout << b << " " << *b << endl;
    // delete[] b;
    // int a = 12;

    // cout << a << endl;
    // cout << &a << endl;
    // modificar(&a);
    // cout << a << endl;


    return 0;
}