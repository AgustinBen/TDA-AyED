#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

int main()
{
    printf("Hello world!\n\n");

    NodoPtr raiz = crearNodo(11);
    insertar(raiz, 10);
    insertar(raiz, 12);

    printf("Mostrando preOrden\n");
    preOrden(raiz);

    return 0;
}
