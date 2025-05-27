#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "estadistica.h"

struct Jugador;

typedef struct Jugador * JugadorPtr;

JugadorPtr crearJugador(int id, char* nom, float min, float goles);

EstaPtr getEstadisticasJug(JugadorPtr j);

void mostrarJugador(JugadorPtr jug);
void wrapperJugador(void * dato);

int compararMinJug(void* , void*);

#endif // JUGADOR_H_INCLUDED
