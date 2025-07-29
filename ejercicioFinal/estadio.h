#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED
#include "cola.h"
#include "nodo.h"
#include "persona.h"
#include "pila.h"

struct Estadio;

typedef struct Estadio * EstadioPtr;

EstadioPtr crearEstadio(char* nombre, int cap, char* loc);
void mostrarEstadio(EstadioPtr estadio);
ColaPtr getCola(EstadioPtr estadio);
PilaPtr getPila(EstadioPtr estadio);

void insertarPersonaEnCola(EstadioPtr estadio, PersonaPtr persona);
void ingresarPersona(EstadioPtr estadio, void (*wrapper)(DatoPtr));

void apilarPersonas(EstadioPtr estadio, PersonaPtr p);
void desapilarPersona(EstadioPtr estadio, void (*wrapper)(DatoPtr));

#endif // ESTADIO_H_INCLUDED
