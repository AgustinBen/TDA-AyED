#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

struct Pila;

typedef struct Pila * PilaPtr;

PilaPtr crearPila();

void insertarUltimo(PilaPtr pila, DatoPtr dato);

DatoPtr eliminarUltimo(PilaPtr pila);

DatoPtr getUltimo(PilaPtr pila);

void liberarPila(PilaPtr pila);

#endif // PILA_H_INCLUDED
