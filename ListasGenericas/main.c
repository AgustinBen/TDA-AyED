#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "persona.h"


int main()
{
    int n1=4, n2=11, n3=21, n4=23, n5=44, n6=0, n7=1;

    ListaPtr lista = crearLista();
    insertarPrimero(lista, &n1);
    insertarPrimero(lista, &n2);
    insertarPrimero(lista, &n3);
    insertarUltimo(lista, &n6);
    insertarPosicion(lista, &n7, 1);

    mostrarListaGen(lista, &wrapperInt);
    printf("Ultimo: %d \n", *(int*)obtenerUltimo(lista));

    printf("-------------------------------------");

    //ordenarLista(lista);
    //eliminarPos(lista, 4);
    ordenarLista(lista, compararInt);
    mostrarListaGen(lista, &wrapperInt);
    //obtenerPrimero(lista);
    //obtenerUltimo(lista);
    //eliminarPrimero(lista);
    //eliminarUltimo(lista);
    //mostrarLista(lista);
    //obtenerPosicion(lista, 4 ); //Aun no funciona

    printf("\n--------------------------------------------\n\n");

//    ListaPtr listaFloat = crearLista();
//
//    float f1=22.5 , f2=55.5, f3= 0.20, f4=99.9;
//
//    insertarPrimero(listaFloat, &f1);
//    insertarPrimero(listaFloat, &f2);
//    insertarPrimero(listaFloat, &f3);
//    insertarPrimero(listaFloat, &f4);
//
//    mostrarListaGen(listaFloat, &wrapperFloat);
//    printf("tam: %d \n", obtenerTamanio(listaFloat));
//    printf("Ultimo: %.2f \n", *(float*)obtenerUltimo(listaFloat));
//
//    printf("\n--------------------------------------------\n\n");
//
//    PersonaPtr p1 = crearPersona("agustin");
//    PersonaPtr p2 = crearPersona("Karina");
//    PersonaPtr p3 = crearPersona("Ariana");
//
//    ListaPtr listaPer = crearLista();
//
//    insertarPrimero(listaPer, &p1);
//    insertarPrimero(listaPer, &p2);
//    insertarPrimero(listaPer, &p3);
//
//    mostrarListaGen(listaPer, &wrapperPersona);

    return 0;
}


