#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo{

    int dato;
    NodoPtr siguiente;

};

NodoPtr crearNodo (int dato, NodoPtr siguiente){

    NodoPtr nodo = (NodoPtr) malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->siguiente = siguiente;
    return nodo;
};

void mostrarNodo (NodoPtr n){
    printf(" { %d } ", n->dato);
};
void liberarNodo (NodoPtr n){
    free(n);
};

void setDato(NodoPtr n, int nuevoDato){

     n->dato = nuevoDato;

};
void setSiguiente(NodoPtr n, NodoPtr nuevoNodo){

    n->siguiente = nuevoNodo;

};
int getDato(NodoPtr n){

    return n->dato;

};
NodoPtr getSiguiente(NodoPtr n){

    return n->siguiente;

};

