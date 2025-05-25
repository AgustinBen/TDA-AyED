#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aeropuerto.h"


struct Aeropuerto{

    char nombre[35];
    char direccion[25];
    char localidad[25];

    //ListaPtr aviones;
};

AeroPtr crearAeropuerto(char nom[], char dir[], char loc[]){

    AeroPtr aeropuerto = (AeroPtr)malloc(sizeof(struct Aeropuerto));

    strcpy(aeropuerto->nombre, nom);
    strcpy(aeropuerto->direccion, dir);
    strcpy(aeropuerto->localidad, loc);

    return aeropuerto;

};

void mostrarAeropuerto(AeroPtr a){

    printf("\n    ---AEROPUERTO----\n");
    printf("NOMBRE: %s \n", a->nombre);
    printf("DIRECCION: %s \n", a->direccion);
    printf("LOCALIDAD: %s \n", a->localidad);

};
