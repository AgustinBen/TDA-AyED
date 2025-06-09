#include <stdio.h>
#include <stdlib.h>
#include "cola.h"


struct Cola{

    NodoPtr primero;
    NodoPtr ultimo;

};

ColaPtr crearCola(){

    ColaPtr cola = (ColaPtr)malloc(sizeof(struct Cola));

    cola->primero = NULL;
    cola->ultimo = NULL;

    return cola;

};

void insertarEnCola(ColaPtr cola, DatoPtr dato){

    NodoPtr nuevoNodo = crearNodo(dato, NULL);

    if(cola->ultimo == NULL){
        // cola vacia
        cola->primero = nuevoNodo;
        cola->ultimo = nuevoNodo;

    }else{
        // cola con al menos un nodo
        setSiguiente(cola->ultimo, nuevoNodo);
        cola->ultimo = nuevoNodo;
    }
};

DatoPtr eliminarPrimero(ColaPtr cola){
    NodoPtr nodo = cola->primero;
    DatoPtr dato = getDato(nodo);
    cola->primero = getSiguiente(nodo);
    if(cola->primero == NULL){

        cola->ultimo = NULL;
    }
    free(nodo);
    return dato;

};

DatoPtr getPrimero(ColaPtr cola);

void liberarCola(ColaPtr cola);
