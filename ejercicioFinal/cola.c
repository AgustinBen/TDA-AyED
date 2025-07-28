#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

struct Cola{

    DatoPtr primero;
    DatoPtr ultimo;

};

ColaPtr crearCola(){

    ColaPtr cola = (ColaPtr)malloc(sizeof(struct Cola));
    cola->primero = NULL;
    cola->ultimo = NULL;

    return cola;
};

void encolar(ColaPtr cola, DatoPtr dato){

    NodoPtr nodo = crearNodo(dato, NULL);

    if(cola->primero == NULL){

        cola->primero = nodo;
        cola->ultimo = nodo;

    }else{

        setSiguiente(cola->ultimo, nodo);
        cola->ultimo = nodo;
    }
}

DatoPtr desencolar(ColaPtr cola){

    NodoPtr nodo = cola->primero;

    if(nodo != NULL){

        DatoPtr dato = getDato(nodo);
        cola->primero = getSiguiente(nodo);
        if(cola->primero == NULL){
            cola->ultimo == NULL;
        }
        free(nodo);
        return dato;
    }
    return NULL;
}

void setUltimo(ColaPtr cola, DatoPtr dato){

    NodoPtr nodo = crearNodo(dato, NULL);
    setSiguiente(cola->ultimo, nodo);
    cola->ultimo = nodo;

};
