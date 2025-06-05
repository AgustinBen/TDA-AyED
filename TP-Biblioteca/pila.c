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

};

void apilar(PilaPtr pila, DatoPtr dato){

    NodoPtr nuevoNodo = crearNodo(dato, pila->tope);

    pila->tope = nuevoNodo;

};

DatoPtr desapilar(PilaPtr pila){

    pila->tope = getSiguiente(pila->tope);

};

DatoPtr getUltimo(PilaPtr pila){

    return pila->tope;

};

void liberarPila(PilaPtr pila){

    free(pila);
};
