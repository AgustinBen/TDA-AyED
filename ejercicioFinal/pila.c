#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

struct Pila{

    NodoPtr tope;

};


PilaPtr crearPila(){

    PilaPtr pila = (PilaPtr)malloc(sizeof(struct Pila));

    pila->tope = NULL;

    return pila;

}

DatoPtr getTope(PilaPtr pila){

    return pila->tope;

}

void apilar(PilaPtr pila, DatoPtr dato){

    NodoPtr nodo = crearNodo(dato, pila->tope);
    pila->tope = nodo;

}

DatoPtr desapilar(PilaPtr pila){

    if(pila->tope != NULL){

        NodoPtr nodo = pila->tope;
        DatoPtr dato = getDato(nodo);
        pila->tope = getSiguiente(pila->tope);

        liberarNodo(nodo);
        return dato;
    }
    return NULL;
}
