#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct Lista{

    NodoPtr primero;

};


ListaPtr crearLista(){

    ListaPtr lista = (ListaPtr)malloc(sizeof(struct Lista));

    lista->primero = NULL;

    return lista;
};

void mostrarLista(ListaPtr lista, void (*wrapper)(DatoPtr)){

    printf("TAM: %d \n", obtenerTam(lista));
    NodoPtr actual = getPrimero(lista);

    while(actual != NULL){
        wrapper(getDato(actual));
        actual = getSiguiente(actual);
    }
    printf("\n\n");
};

void liberarLista(ListaPtr lista){

    NodoPtr actual = getPrimero(lista);
    NodoPtr aux;

    while(actual != NULL){
        aux = actual;
        actual =  getSiguiente(actual);
        free(aux);
    }
    free(lista);
};

void setPrimero(ListaPtr lista, NodoPtr nuevoPrimero){

    lista->primero = nuevoPrimero;

};

NodoPtr getPrimero(ListaPtr lista){

    return lista->primero;

};

void insertarPrimero(ListaPtr lista, DatoPtr dato){

    setPrimero(lista, crearNodo(dato, lista->primero));

};
void insertarUltimo(ListaPtr lista, DatoPtr dato){

    NodoPtr nodo = crearNodo(dato, NULL);
    if(lista->primero == NULL){
        setPrimero(lista, nodo);
    }else{
        NodoPtr actual = getPrimero(lista);
        while(getSiguiente(actual) != NULL){

            actual = getSiguiente(actual);
        }
        setSiguiente(actual, nodo);
    }
};

void eliminarPrimero(ListaPtr lista){

    NodoPtr actual = getPrimero(lista);
    lista->primero = getSiguiente(actual);
    free(actual);

};

void eliminarPos(ListaPtr lista, int pos){
    int tam = obtenerTam(lista);

    if(pos < 0 || pos > tam){
        printf("\n no se puede eliminar en esa posicion");
    }else{
        if(pos == 0){
            eliminarPrimero(lista);
        }
        else{
            NodoPtr actual = getPrimero(lista);
            int contar = 0;
            while (getSiguiente(actual) != NULL){
                if(contar == pos-1){
                    NodoPtr siguiente = getSiguiente(actual);
                    setSiguiente(actual, getSiguiente(getSiguiente(actual)));
                    free(siguiente);
                }
                actual = getSiguiente(actual);
                contar++;
            }
        }
    }
};

void eliminarUltimo(ListaPtr lista);

int obtenerTam(ListaPtr lista){

    NodoPtr actual = getPrimero(lista);
    int tam = 0;

    while(actual != NULL){
        tam++;
        actual = getSiguiente(actual);
    }
    return tam;
};
