#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estadio.h"

struct Estadio{

    char nombre[20];
    int capacidad;

    ListaPtr jugadoresL;

};


EstadioPtr crearEstadio(char* nom, int cap){

    EstadioPtr estadio = (EstadioPtr)malloc(sizeof(struct Estadio));

    strcpy(estadio->nombre, nom);
    estadio->capacidad = cap;
    estadio->jugadoresL = crearLista();

    return estadio;
};

ListaPtr getListaJug(EstadioPtr e){

    return e->jugadoresL;
};

void insertarJugador(EstadioPtr estadio, JugadorPtr j){

    insertarPrimero(estadio->jugadoresL, j);

};


void mostrarEstadio(EstadioPtr e){

    printf("\n ---ESTADIO---\n");
    printf("Nombre: %s \n", e->nombre);
    printf("Capacidad: %d \n", e->capacidad);

    mostrarLista(e->jugadoresL, &wrapperJugador);

    printf("-----------------------------------------------");
};
