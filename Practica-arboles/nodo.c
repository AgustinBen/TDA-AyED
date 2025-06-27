#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo{

    DatoPtr dato;
    NodoPtr izq;
    NodoPtr der;

};

NodoPtr crearNodo(DatoPtr dato, NodoPtr izquierda, NodoPtr derecha){

    NodoPtr nodo = (NodoPtr)malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->izq = izquierda;
    nodo->der = derecha;

};

void setDato(NodoPtr nodo, DatoPtr nuevoDato){

    nodo->dato = nuevoDato;

};

DatoPtr getDato (NodoPtr nodo){

    return nodo->dato;

};
void setIzquierda(NodoPtr nodo, NodoPtr nodoIzq){

    nodo->izq = nodoIzq;

};
NodoPtr getDerecha(NodoPtr nodo);
void setDerecha(NodoPtr nodo, NodoPtr nodoDer);
NodoPtr getIzquierda(NodoPtr nodo);
