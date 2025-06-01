#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

struct Cola{

    NodoPtr primero;
    NodoPtr ultimo;

};

ColaPtr crearCola(){

    ColaPtr cola = (ColaPtr)malloc(sizeof(struct Cola));

    cola->primero = NULL;
    cola->ultimo = NULL;

    return cola;

};

void insertarUltimo(ColaPtr cola, DatoPtr dato){




};

DatoPtr eliminarPrimero(ColaPtr cola);

DatoPtr getPrimero(ColaPtr cola);

void liberarCola(ColaPtr cola);
