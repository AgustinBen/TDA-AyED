#ifndef PASAJEROS_H_INCLUDED
#define PASAJEROS_H_INCLUDED

struct Pasajero;

typedef struct Pasajero * PasajeroPtr;

PasajeroPtr crearPasajero(char nom[], int edad, char ven);

void mostrarPasajero(PasajeroPtr p);
void wrapperPasajero(void * dato);

#endif // PASAJEROS_H_INCLUDED
