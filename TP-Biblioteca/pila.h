#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "nodo.h"
struct Pila;

typedef struct Pila * PilaPtr;

PilaPtr crearPila();

void apilar(PilaPtr pila, DatoPtr dato);

DatoPtr desapilar(PilaPtr pila);

DatoPtr getUltimo(PilaPtr pila);

void liberarPila(PilaPtr pila);

#endif // PILA_H_INCLUDED
