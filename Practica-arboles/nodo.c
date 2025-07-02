#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo{

    DatoPtr dato;
    NodoPtr izq;
    NodoPtr der;

};

NodoPtr crearNodo(DatoPtr dato){

    NodoPtr nodo = (NodoPtr)malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->izq = NULL;
    nodo->der = NULL;

};

