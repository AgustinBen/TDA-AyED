#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

struct Nodo{

    int dato;
    NodoPtr izq;
    NodoPtr der;
    int peso;

};

NodoPtr crearNodo(int dato){

    NodoPtr nodo = (NodoPtr)malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->izq = NULL;
    nodo->der = NULL;
    nodo->peso = 1;

};

void insertar(NodoPtr nodo,int dato){

    if(dato == nodo->dato){
        nodo->peso++;
    }
    else if(dato > nodo->dato){

        if(nodo->der == NULL){
            nodo->der = crearNodo(dato);
        }
        else{
            insertar(nodo->der, dato);
        }
    }
    else{

        if(nodo->izq == NULL){
            nodo->izq = crearNodo(dato);
        }
        else{
            insertar(nodo->izq, dato);
        }
    }
};

void preOrden(NodoPtr nodo){
    if(nodo != NULL){
        printf("{%d}", nodo->dato);
        preOrden(nodo->izq);
        preOrden(nodo->der);
    }

};
