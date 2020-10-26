#include <iostream>
#include "arreglo.h"
using namespace std;

int main() 
{
    Arreglo arreglo;
    arreglo.insertar_final("string 2");
    arreglo.insertar_final("string 3");
    arreglo.insertar_final("string 4");
    arreglo.insertar_final("string 5");
    arreglo.insertar_final("string 6");
    arreglo.insertar_final("string 7");
    arreglo.insertar_final("string 8");
    arreglo.insertar_inicio("string 1");
    arreglo.insertar_inicio("string 0");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    cout <<endl << endl;
    system("PAUSE");
    return 0;
}