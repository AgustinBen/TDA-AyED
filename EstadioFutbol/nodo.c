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


void setDato(NodoPtr n, DatoPtr nuevoDato){

    n->dato = nuevoDato;

};

DatoPtr getDato(NodoPtr n){

    return n->dato;

};
void setSiguiente(NodoPtr n, NodoPtr nuevoSiguiente){

    n->siguiente = nuevoSiguiente;

};
NodoPtr getSiguiente(NodoPtr n){

    return n->siguiente;

};
