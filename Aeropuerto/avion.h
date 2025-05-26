#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED
#include "lista.h"
#include "pasajero.h"

struct Avion;

typedef struct Avion * AvionPtr;

AvionPtr crearAvion(char tipo[], int mat, int cap);

void mostrarAvion(AvionPtr a);
void wrapperAvion(void * dato);

void insertarPasajeroUlt(AvionPtr a, PasajeroPtr p);
void insertarPasajeroPri(AvionPtr a, PasajeroPtr p);
void eliminarPasajerosVentanilla(AvionPtr a);

void ordenarPasajeros(AvionPtr a);



#endif // AVION_H_INCLUDED
