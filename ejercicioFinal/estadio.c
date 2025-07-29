#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estadio.h"

struct Estadio{

    char nombre[25];
    int capacidad;
    char localidad[25];
    ColaPtr colaPersonas;
    PilaPtr pilaPersonas;

};

EstadioPtr crearEstadio(char* nombre, int cap, char* loc){

    EstadioPtr estadio = (EstadioPtr)malloc(sizeof(struct Estadio));

    strcpy(estadio->nombre, nombre);
    estadio->capacidad = cap;
    strcpy(estadio->localidad, loc);
    estadio->colaPersonas = crearCola();
    estadio->pilaPersonas = crearPila();

    return estadio;
};

void mostrarEstadio(EstadioPtr estadio){

    printf("Estadio: %s \n", estadio->nombre);
    printf("Capacidad: %d \n", estadio->capacidad);
    printf("Localidad: %s \n", estadio->localidad);
    printf("\n\n");

};

void insertarPersonaEnCola(EstadioPtr estadio, PersonaPtr persona){

    encolar(estadio->colaPersonas, persona);

};

ColaPtr getCola(EstadioPtr estadio){

    return estadio->colaPersonas;

};

PilaPtr getPila(EstadioPtr estadio){

    return estadio->pilaPersonas;
};

void ingresarPersona(EstadioPtr estadio, void (*wrapper)(DatoPtr)){

    PersonaPtr p = desencolar(estadio->colaPersonas);

    if(p == NULL){
        printf("No hay personas esperando a ingresar \n");
    }else{
        printf("Persona ingresada \n");
        wrapper(p);
    }
};

void apilarPersonas(EstadioPtr estadio, PersonaPtr p){

    apilar(estadio->pilaPersonas, p);

};

void desapilarPersona(EstadioPtr estadio, void (*wrapper)(DatoPtr)){

    if(getTope(estadio->pilaPersonas)==NULL){

        printf("Estadio vacio \n");

    }else{

        DatoPtr p = desapilar(estadio->pilaPersonas);
        printf("Persona se fue del estadio \n");
        wrapper(p);
    }
};


