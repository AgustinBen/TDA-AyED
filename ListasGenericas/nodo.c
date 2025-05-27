#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

struct Nodo {

    DatoPtr dato;
    struct Nodo * siguiente;

};

NodoPtr crearNodo(DatoPtr dato, NodoPtr siguiente){


    NodoPtr nodo = (NodoPtr) malloc(sizeof(struct Nodo));

    nodo->dato = dato;
    nodo->siguiente = siguiente;

    return nodo;

};
void mostrarNodo(NodoPtr nodo){

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


///getters y setters
DatoPtr getDato(NodoPtr nodo){

    return nodo->dato;

};
void setDato(NodoPtr nodo, DatoPtr nuevoDato){

    nodo->dato = nuevoDato;

};
NodoPtr getSiguiente(NodoPtr nodo){

    return nodo->siguiente;

};
void setSiguiente(NodoPtr nodo, NodoPtr nuevoSiguiente){

    nodo->siguiente = nuevoSiguiente;

};



void funcionInt(int n){

    printf("\n %d ", n);
};
void funcionFloat(float f){

    printf("\n %.2f ", f);
};

void wrapperInt(void * dato){

    int entero = *(int*)dato;

    funcionInt(entero);

};
void wrapperFloat(void * dato){

    float flotante = *(float*)dato;

    funcionFloat(flotante);

};


int compararInt(DatoPtr d1, DatoPtr d2){

    int dato1 = *(int*)d1;
    int dato2 = *(int*)d2;


    return dato1 > dato2;

};
int compararFloat(DatoPtr d1, DatoPtr d2);
int compararChar(DatoPtr, DatoPtr);
