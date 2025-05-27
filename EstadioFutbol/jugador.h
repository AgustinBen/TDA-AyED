#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED

struct Jugador;

typedef struct Jugador * JugadorPtr;

JugadorPtr crearJugador(int id, char* nom, float promMin, float promGol);

void mostrarJugador(JugadorPtr jug);
void wrapperJugador(void * dato);

int compararJug(void* , void*);

#endif // JUGADOR_H_INCLUDED
