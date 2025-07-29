#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "nodo.h"

struct Pila;

typedef struct Pila * PilaPtr;

PilaPtr crearPila();

DatoPtr getTope(PilaPtr pila);

void apilar(PilaPtr pila, DatoPtr dato);
DatoPtr desapilar(PilaPtr pila);

#endif // PILA_H_INCLUDED
