#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED
#include "cola.h"
#include "nodo.h"
#include "persona.h"

struct Estadio;

typedef struct Estadio * EstadioPtr;

EstadioPtr crearEstadio(char* nombre, int cap, char* loc);
void mostrarEstadio(EstadioPtr estadio);

void insertarPersona(EstadioPtr estadio, PersonaPtr persona);

#endif // ESTADIO_H_INCLUDED
