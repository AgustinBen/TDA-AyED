#include <stdio.h>
#include <stdlib.h>

#include "estadistica.h"

struct Estadistica{

    float promMin;
    float promGol;



};

EstaPtr crearEstadistica( float promMin ,float promGol){

    EstaPtr esta = (EstaPtr)malloc(sizeof(struct Estadistica));

    esta->promMin = promMin;
    esta->promGol = promGol;

    return esta;
};

float getGoles(EstaPtr e){

    return e->promGol;

};
float getMin(EstaPtr e){

    return e->promMin;

};
