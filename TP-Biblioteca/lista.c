#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct Lista{

    NodoPtr primero;

};


ListaPtr crearLista(){

    ListaPtr lista = (ListaPtr)malloc(sizeof(struct Lista));

    lista->primero = NULL;

    return lista;

};

void mostrarLista(ListaPtr lista, void (*wrapper)(void*)){

    NodoPtr actual = lista->primero;

    while(actual != NULL){

        wrapper(getDato(actual));
        actual = getSiguiente(actual);

    }
    printf("\n\n");
};

void liberarLista(ListaPtr lista){

    NodoPtr actual = lista->primero;

    while(actual != NULL){
        free(actual);
        actual = getSiguiente(actual);
    }

};
