#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo{

    DatoPtr dato;
    NodoPtr siguiente;

};

//constructor

NodoPtr crearNodo(DatoPtr dato, NodoPtr siguiente){

    NodoPtr nodo = (NodoPtr)malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->siguiente = siguiente;

    return nodo;
};

void mostrarNodoInt(NodoPtr nodo){

    printf("{ %d }", *(int*)nodo->dato);

};
void mostrarNodoFloat(NodoPtr nodo){

    printf("{ %.2f }", *(float*)nodo->dato);

};
void mostrarNodoChar(NodoPtr nodo){

    printf("{ %s }", (char*)nodo->dato);

};

void liberarNodo(NodoPtr nodo){

    free(nodo);

};



//setters y getters

void setDato (NodoPtr nodo, DatoPtr nuevoDato){

    nodo->dato = nuevoDato;

};
DatoPtr getDato (NodoPtr nodo){

    return nodo->dato;

};
void setSiguiente (NodoPtr nodo, NodoPtr nuevoSiguiente){

    nodo->siguiente = nuevoSiguiente;

};
NodoPtr getSiguiente (NodoPtr nodo){

    return nodo->siguiente;

};
