#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

int main()
{
    printf("Hello world!\n\n");

    NodoPtr raiz = crearNodo(14);
    insertar(raiz, 4);
    insertar(raiz, 3);
    insertar(raiz, 9);
    insertar(raiz, 7);
    insertar(raiz, 5);
    insertar(raiz, 15);
    insertar(raiz, 18);

    printf("Mostrando preOrder \n");
    preOrder(raiz);
    printf("\n\nMostrando inOrder \n");
    inOrder(raiz);
    printf("\n\nMostrando postOrder \n");
    postOrder(raiz);
    return 0;
}
