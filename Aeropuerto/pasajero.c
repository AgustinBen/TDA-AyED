#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pasajero.h"


struct Pasajero{

    char apellido[25];
    int edad;
    char ventanilla;

};

PasajeroPtr crearPasajero(char* ape, int edad, char ven){

    PasajeroPtr p = (PasajeroPtr)malloc(sizeof(struct Pasajero));

    strcpy(p->apellido, ape);
    p->edad = edad;
    p->ventanilla = ven;

    return p;
};

void mostrarPasajero(PasajeroPtr p){
    printf("\n     -PASAJERO-");
    printf("\n Apellido: %s", p->apellido);
    printf("\n Edad: %d", p->edad);
    printf("\n Ventanilla: %c \n", p->ventanilla);

};

void wrapperPasajero(void * dato){

    PasajeroPtr p = (PasajeroPtr )dato;

    mostrarPasajero(p);

};


