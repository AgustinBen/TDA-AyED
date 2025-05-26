#ifndef AEROPUERTO_H_INCLUDED
#define AEROPUERTO_H_INCLUDED
#include "lista.h"
#include "avion.h"

struct Aeropuerto;

typedef struct Aeropuerto * AeroPtr;

AeroPtr crearAeropuerto();
void mostrarAeropuerto();

void insertarAvion(AeroPtr aero, AvionPtr avion);


#endif // AEROPUERTO_H_INCLUDED
