#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


struct Lista{

    NodoPtr primero;

};

//constructor

ListaPtr crearLista(){

    ListaPtr lista = (ListaPtr)malloc(sizeof(struct Lista));

    lista->primero = NULL;

    return lista;

};

void mostrarLista(ListaPtr lista, void (*wrapper)(void*)){
    printf("--LISTA---\n");
    NodoPtr actual = getPrimero(lista);

    while (actual != NULL){
        wrapper(getDato(actual));
        actual = getSiguiente(actual);
    }
    printf("\n\n");
};



//getters y setters

void setPrimero(ListaPtr lista, NodoPtr nodo);
NodoPtr getPrimero(ListaPtr lista){

    return lista->primero;

};
