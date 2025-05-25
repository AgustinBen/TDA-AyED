#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED
#include "lista.h"

struct Avion;

typedef struct Avion * AvionPtr;

AvionPtr crearAvion(char tipo[], int mat, int cap);

void mostrarAvion(AvionPtr a);

void wrapperAvion(void * dato);



#endif // AVION_H_INCLUDED
