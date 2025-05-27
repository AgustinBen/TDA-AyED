#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "jugador.h"
#include "lista.h"

//Enunciado: El estadio tiene una lista de Jugadores, cada jugador tiene Estadisticas
//El estadio tiene una capacidad y un nombre... los jugadores tienen un id y
//Un nombre... Las estadisticas tienen prom de min en cancha y promedio de goles
//1) Agregar al estadio los 5 jugadores del main.
//2) Ordenar la lista de jugadores por cantidad de minutos en cancha de cada jugador (de mayor a menor)
//3) mostrar el estadio (aca se debe ver la lista ordenada).
// Hasta aca para aprobar.
//4) Crear un procedimiento que elimine de la lista a los jugadores con menos de 1 gol de promedio
//5) Mostrar el estadio

int main()
{
    printf("Hello world!\n");

    EstadioPtr est1 = crearEstadio("Bombonera", 70);

    JugadorPtr j1 = crearJugador(1, "Messi", 78.65, 1.8);
    JugadorPtr j2 = crearJugador(2, "Riquelme", 43.3, 0.20);
    JugadorPtr j3 = crearJugador(3, "Di Maria", 77.9, 0.65);
    JugadorPtr j4 = crearJugador(4, "Neymar", 23.45, 1.7);
    JugadorPtr j5 = crearJugador(5, "Ronaldinho", 89.3, 2.01);

    insertarJugador(est1, j1);
    insertarJugador(est1, j2);
    insertarJugador(est1, j3);
    insertarJugador(est1, j4);
    insertarJugador(est1, j5);

    ordenarLista(getListaEstadio(est1), compararJug);
    mostrarEstadio(est1);


    return 0;
}
