#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

struct Cola;

typedef struct Cola * ColaPtr;

ColaPtr crearCola();

void insertarUltimo(ColaPtr cola, DatoPtr dato);

DatoPtr eliminarPrimero(ColaPtr cola);

DatoPtr getPrimero(ColaPtr cola);

void liberarCola(ColaPtr cola);

#endif // COLA_H_INCLUDED
