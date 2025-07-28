#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estadio.h"

struct Estadio{

    char nombre[25];
    int capacidad;
    char localidad[25];
    ColaPtr colaPersonas;

};

EstadioPtr crearEstadio(char* nombre, int cap, char* loc){

    EstadioPtr estadio = (EstadioPtr)malloc(sizeof(struct Estadio));

    strcpy(estadio->nombre, nombre);
    estadio->capacidad = cap;
    strcpy(estadio->localidad, loc);
    estadio->colaPersonas = crearCola();

    return estadio;
};

void mostrarEstadio(EstadioPtr estadio){

    printf("Estadio: %s \n", estadio->nombre);
    printf("Capacidad: %d \n", estadio->capacidad);
    printf("Localidad: %s \n", estadio->localidad);
    printf("\n\n");
};

void insertarPersona(EstadioPtr estadio, PersonaPtr persona){

    encolar(estadio->colaPersonas, persona);

};
