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

void setDato(NodoPtr nodo, DatoPtr nuevoDato){

    nodo->dato = nuevoDato;

};
DatoPtr getDato(NodoPtr nodo){

    return nodo->dato;

};
void setSiguiente(NodoPtr nodo, NodoPtr nuevoSiguiente){

    nodo->siguiente = nuevoSiguiente;

};
NodoPtr getSiguiente(NodoPtr nodo){

    return nodo->siguiente;

};
