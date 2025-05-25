#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo{

    DatoPtr dato;
    NodoPtr siguiente;

};


NodoPtr crearNodo(DatoPtr dato, NodoPtr siguiente){

    NodoPtr nodo = (NodoPtr)malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->siguiente = siguiente;

    return nodo;

};

void mostrarNodo(NodoPtr nodo);

void liberarNodo(NodoPtr nodo){

    free(nodo);
};

void setDato(NodoPtr nodo, DatoPtr dato){

    nodo->dato = dato;

};

DatoPtr getDato(NodoPtr nodo){

    return nodo->dato;

};

void setSiguiente(NodoPtr nodo, NodoPtr nuevoSig){

    nodo->siguiente = nuevoSig;

};

NodoPtr getSiguiente(NodoPtr nodo){

    return nodo->siguiente;

};

