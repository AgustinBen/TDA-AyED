#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

struct Pila{

    NodoPtr ultimo;

};

PilaPtr crearPila(){

    PilaPtr pila = (PilaPtr)malloc(sizeof(struct Pila));

    pila->ultimo = NULL;

    return pila;

};

void insertarUltimo(PilaPtr pila, DatoPtr dato);

DatoPtr eliminarUltimo(PilaPtr pila);

DatoPtr getUltimo(PilaPtr pila);

void liberarPila(PilaPtr pila);
