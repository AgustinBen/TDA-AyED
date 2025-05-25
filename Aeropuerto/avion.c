#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avion.h"


struct Avion{

    char tipo[20];
    int matricula;
    int capacidad;

    //ListaPtr Pasajeros;

    //ListaPtr Destinos

};;


AvionPtr crearAvion(char tipo[], int mat, int cap){

    AvionPtr avion = (AvionPtr)malloc(sizeof(struct Avion));

    strcpy(avion->tipo, tipo);
    avion->capacidad = cap;
    avion->matricula = mat;
};

void mostrarAvion(AvionPtr a){

    printf("\n  --AVION--\n");
    printf("\n    Tipo:  %s; Matricula: %d; Capacidad: %d \n", a->tipo, a->matricula, a->capacidad);

};

void wrapperAvion(void * dato){

    AvionPtr a =  (AvionPtr )dato;
    mostrarAvion(a);

}

