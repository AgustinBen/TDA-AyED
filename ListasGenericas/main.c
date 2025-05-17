#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    int n1=4, n2=11, n3=21, n4=23, n5=44, n6=0, n7=1;

    ListaPtr lista = crearLista();
    insertarPrimero(lista, &n1);
    insertarPrimero(lista, &n2);
    insertarPrimero(lista, &n3);
    insertarPrimero(lista, &n4);
    insertarPrimero(lista, &n5);
    insertarUltimo(lista, &n6);
    insertarPosicion(lista, &n7, 1);

    mostrarLista(lista);
    printf("tam: %d \n", obtenerTamanio(lista));
    printf("Ultimo: %d \n", *(int*)obtenerUltimo(lista));
    //obtenerPrimero(lista);
    //obtenerUltimo(lista);
    //eliminarPrimero(lista);
    //eliminarUltimo(lista);
    //mostrarLista(lista);
    //obtenerPosicion(lista, 4 ); //Aun no funciona

    printf("\n--------------------------------------------\n\n");

    ListaPtr listaChar = crearLista();

    char c1[]="a", c2[]="b", c3[]="c", c4[]="d";
    insertarPrimero(listaChar, &c1);
    insertarPrimero(listaChar, &c2);
    insertarPrimero(listaChar, &c3);
    insertarPrimero(listaChar, &c4);

    mostrarListaChar(listaChar);
    printf("tam: %d \n", obtenerTamanio(listaChar));
    printf("Ultimo: %s \n", (char*)obtenerUltimo(listaChar));


    return 0;
}
