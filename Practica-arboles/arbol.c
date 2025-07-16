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

void preOrder(NodoPtr nodo){
    if(nodo != NULL){
        printf("{%d}", nodo->dato);
        preOrder(nodo->izq);
        preOrder(nodo->der);
    }

};

void inOrder(NodoPtr nodo){
    if(nodo != NULL){
        inOrder(nodo->izq);
        printf("{%d}", nodo->dato);
        inOrder(nodo->der);
    }
}

void postOrder(NodoPtr nodo){

    if(nodo != NULL){
        postOrder(nodo->izq);
        postOrder(nodo->der);
        printf("{%d}", nodo->dato);

    }
}

NodoPtr buscar(NodoPtr nodo, int dato){

    if(nodo == NULL){
        return NULL;
    }
    if(dato == nodo->dato){
        printf("\nNodo encontrado!");
        return nodo;
    }
    else if(dato > nodo->dato){
        printf("\n%d es mayor que %d --> DERECHA", dato, nodo->dato);
        return buscar(nodo->der, dato);
    }
    else{
        printf("\n%d es menor que %d -->IZQUIERDA", dato, nodo->dato);
        return buscar(nodo->izq, dato);
    }

}

