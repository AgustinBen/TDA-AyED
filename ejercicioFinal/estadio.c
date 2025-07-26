#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"

struct Estadio{

    char nombre[];
    ColaPtr colaPersonas;

};

EstadioPtr crearEstadio(){

    EstadioPtr estadio = (EstadioPtr)malloc(sizeof(struct Estadio));
    estadio->colaPersonas = crearCola();

    return estadio;
};
