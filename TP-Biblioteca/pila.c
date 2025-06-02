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

void insertarEnPila(PilaPtr pila, DatoPtr dato){

    NodoPtr nuevoNodo = crearNodo(dato, pila->tope);

    pila->tope = nuevoNodo;

};

DatoPtr eliminarUltimo(PilaPtr pila);

DatoPtr getUltimo(PilaPtr pila);

void liberarPila(PilaPtr pila);
