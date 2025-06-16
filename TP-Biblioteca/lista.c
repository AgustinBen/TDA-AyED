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

void setPrimero(ListaPtr lista, NodoPtr nodo){

    lista->primero = nodo;
}

NodoPtr getPrimero(ListaPtr lista){

    return lista->primero;

};



void insertarPrimero(ListaPtr lista, DatoPtr dato){

    lista->primero = crearNodo(dato, lista->primero);

};


void mostrarLista(ListaPtr lista, void (*wrapper)(void*)){
    //printf(" Tam: %d\n\n", obtenerTam(lista));
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


void insertarEnOrden(ListaPtr lista, DatoPtr dato, int (*comparar)(void*, void*)) {
    NodoPtr actual = getPrimero(lista);
    NodoPtr anterior = NULL;

    // Recorremos mientras el dato actual sea menor que el nuevo
    while (actual != NULL && comparar(getDato(actual), dato) < 0) {
        anterior = actual;
        actual = getSiguiente(actual);
    }

    NodoPtr nodo = crearNodo(dato, actual);

    if (anterior == NULL) {
        // Insertar al principio si no hay anterior
        setPrimero(lista, nodo);
    } else {
        setSiguiente(anterior, nodo);
    }
}
