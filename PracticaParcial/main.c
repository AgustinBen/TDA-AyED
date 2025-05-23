#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    printf("Hello world!\n");

    int dato1 = 12;
    float dato2 = 12.5;
    char dato3[] = "Cola cola";

    NodoPtr n1 = crearNodo(&dato1, NULL);
    NodoPtr n2 = crearNodo(&dato2, NULL);
    NodoPtr n3 = crearNodo(&dato3, NULL);

    mostrarNodoInt(n1);
    mostrarNodoFloat(n2);
    mostrarNodoChar(n3);

    return 0;

}
