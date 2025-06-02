#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "nodo.h"
struct Pila;

typedef struct Pila * PilaPtr;

PilaPtr crearPila();

void insertarEnPila(PilaPtr pila, DatoPtr dato);

DatoPtr eliminarUltimo(PilaPtr pila);

DatoPtr getUltimo(PilaPtr pila);

void liberarPila(PilaPtr pila);

#endif // PILA_H_INCLUDED
