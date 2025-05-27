#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"

struct Jugador{

    int id;
    char nombre[20];
    float promMin;
    float promGol;

};


JugadorPtr crearJugador(int id, char* nom, float promMin, float promGol){

    JugadorPtr jugador = (JugadorPtr)malloc(sizeof(struct Jugador));

    jugador->id = id;
    strcpy(jugador->nombre, nom);
    jugador->promMin = promMin;
    jugador->promGol = promGol;

    return jugador;
};

void mostrarJugador(JugadorPtr jug){

    printf("\n --JUGADOR-- \n");
    printf("   Nombre: %s \n", jug->nombre);
    printf("   ID: %d \n", jug->id);
    printf("   Minutos prom: %.2f \n", jug->promMin);
    printf("   Goles prom: %.2f \n", jug->promGol);

};

void wrapperJugador(void * dato){

    JugadorPtr j = (JugadorPtr)dato;

    mostrarJugador(j);

};


int compararJug(void* d1, void* d2){
    float* dato1 = (float*)d1;
    float* dato2 = (float*)d2;

    return dato1 > dato2;

};
