#ifndef ESTADISTICA_H_INCLUDED
#define ESTADISTICA_H_INCLUDED

struct Estadistica;

typedef struct Estadistica * EstaPtr;

EstaPtr crearEstadistica(float promMin, float promGol);

float getGoles(EstaPtr e);
float getMin(EstaPtr e);


#endif // ESTADISTICA_H_INCLUDED
