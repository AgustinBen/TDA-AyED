#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED
#include "lista.h"
#include "jugador.h"

struct Estadio;

typedef struct Estadio * EstadioPtr;

EstadioPtr crearEstadio(char* nombre, int capacidad);

ListaPtr getListaJug(EstadioPtr e);

void insertarJugador(EstadioPtr estadio, JugadorPtr j);

void mostrarEstadio(EstadioPtr e);


#endif // ESTADIO_H_INCLUDED
