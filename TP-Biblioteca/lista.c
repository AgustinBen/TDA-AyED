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

NodoPtr getPrimero(ListaPtr lista){

    return lista->primero;
};

void insertarPrimero(ListaPtr lista, DatoPtr dato){

    lista->primero = crearNodo(dato, lista->primero);

};


void mostrarLista(ListaPtr lista, void (*wrapper)(void*)){
    printf("Tam: %d", obtenerTam(lista));
    NodoPtr actual = lista->primero;
    if(actual == NULL){
        printf("  Vacia!\n");
    }else{

        while(actual != NULL){
        wrapper(getDato(actual));
        actual = getSiguiente(actual);

        }
        printf("\n\n");
    }
};

void liberarLista(ListaPtr lista){

    NodoPtr actual = lista->primero;

    while(actual != NULL){
        NodoPtr nodo = actual;
        free(actual);
        actual = getSiguiente(nodo);
    }

};

int obtenerTam(ListaPtr lista){

    NodoPtr actual = lista->primero;
    int tam = 0;

    while(actual != NULL){
        actual = getSiguiente(actual);
        tam++;
    }
    return tam;
};
