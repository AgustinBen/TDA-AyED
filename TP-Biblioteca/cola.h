#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED
#include "nodo.h"

struct Cola;

typedef struct Cola * ColaPtr;

ColaPtr crearCola();

void insertarEnCola(ColaPtr cola, DatoPtr dato);
void insertarUltimo(ColaPtr cola, DatoPtr dato);

DatoPtr desencolar(ColaPtr cola);

DatoPtr getPrimeroCola(ColaPtr cola);

void liberarCola(ColaPtr cola);

#endif // COLA_H_INCLUDED
