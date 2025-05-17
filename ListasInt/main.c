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
    //eliminarPrimero(listaInt);
    //eliminarUltimo(listaInt);
    mostrarLista(listaInt);
    buscarElemento(listaInt, 20);

    //getUltimo(listaInt);
    //obtenerTam(listaInt);


//    liberarLista(listaInt);
//    insertarPrimero(listaInt, 2);
//    mostrarLista(listaInt);


    return 0;
}
