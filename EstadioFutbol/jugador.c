#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "jugador.h"

struct Jugador{

    int id;
    char nombre[20];

    EstaPtr estadistica;

};


JugadorPtr crearJugador(int id, char* nom, float min, float goles){

    JugadorPtr jugador = (JugadorPtr)malloc(sizeof(struct Jugador));

    jugador->id = id;
    strcpy(jugador->nombre, nom);
    jugador->estadistica = crearEstadistica(min, goles);

    return jugador;
};


EstaPtr getEstadisticasJug(JugadorPtr j){

    return j->estadistica;

};

void mostrarJugador(JugadorPtr jug){

    printf("\n --JUGADOR-- \n");
    printf("   Nombre: %s \n", jug->nombre);
    printf("   ID: %d \n", jug->id);
    printf("   Minutos prom: %.2f \n", getMin(jug->estadistica));
    printf("   Goles prom: %.2f \n", getGoles(jug->estadistica));

};

void wrapperJugador(void * dato){

    JugadorPtr j = dato;

    mostrarJugador(j);

};


int compararMinJug(void* d1, void* d2){

    JugadorPtr j1 = (JugadorPtr )d1;
    JugadorPtr j2 = (JugadorPtr )d2;

    EstaPtr e1 = j1->estadistica;
    EstaPtr e2 = j2->estadistica;

    float min1 = getMin(e1);
    float min2 = getMin(e2);

    return min1 > min2;

};
