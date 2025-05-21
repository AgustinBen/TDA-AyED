#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    printf("Hello world!\n");

    ListaPtr listaInt = crearLista();
    insertarPrimero(listaInt, 20);
    insertarPrimero(listaInt, 21);
    insertarPrimero(listaInt, 22);
    insertarUltimo(listaInt, 23);
    insertarUltimo(listaInt, 11);
    //eliminarPrimero(listaInt);
    //eliminarUltimo(listaInt);
    mostrarLista(listaInt);
    ordenarBurbuja(listaInt);
    mostrarLista(listaInt);


    printf("Buscar el 20: %d \n", buscarElemento(listaInt, 20));
    printf("ultimo: %d \n", getUltimo(listaInt));

//    liberarLista(listaInt);
//    insertarPrimero(listaInt, 2);
//    mostrarLista(listaInt);


    return 0;
}
