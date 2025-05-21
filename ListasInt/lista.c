#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct Lista{

    NodoPtr primero;

};

//constructor
ListaPtr crearLista(){

    ListaPtr lista = (ListaPtr) malloc(sizeof(struct Lista));
    lista->primero = NULL;
    return lista;

};
void mostrarLista(ListaPtr lista){
    printf("\n<-Lista-> \n");
    if(lista->primero == NULL){

        printf("Lista vacia! \n");
    }else{
        NodoPtr nodoActual = lista->primero;
        while(nodoActual != NULL){
            mostrarNodo(nodoActual);
            nodoActual = getSiguiente(nodoActual);
        }
    }
    printf("\n\n");
};
void liberarLista(ListaPtr lista){

    NodoPtr actual = lista->primero;
    while(actual != NULL){

        free(actual);
        setSiguiente(actual, getSiguiente(actual));
    }
    free(lista);
};
void insertarPrimero(ListaPtr lista, int dato){

    NodoPtr nodo = crearNodo(dato, lista->primero);
    lista->primero = nodo;

};
void insertarUltimo(ListaPtr lista, int dato){

    NodoPtr nodo = crearNodo(dato, NULL);
    if(lista->primero == NULL){
        lista->primero = nodo;
    }else{
        NodoPtr actual = lista->primero;
        while(getSiguiente(actual) != NULL){
            actual = getSiguiente(actual);
        }
        setSiguiente(actual, nodo);
    }
};



//getters y setters
NodoPtr getPrimero(ListaPtr lista){

    return lista->primero;

};
int getUltimo(ListaPtr lista){

    if(lista->primero != NULL){

        NodoPtr actual = lista->primero;
        while(getSiguiente(actual) != NULL){

            actual = getSiguiente(actual);
        }

        return getDato(actual);
    }

    return -1;
};
void setPrimero(ListaPtr lista, NodoPtr nodo){

    lista->primero = nodo;

};

void setUltimo(ListaPtr lista, NodoPtr nodo){

    if(getPrimero(lista) != NULL){
        NodoPtr actual = getPrimero(lista);
        while(getSiguiente(actual) != NULL){
            actual = getSiguiente(actual);
        }
        setSiguiente(actual, nodo);
    }
    setPrimero(lista, nodo);

};


//otros
int obtenerTam(ListaPtr lista){
    NodoPtr actual = getPrimero(lista);
    int tam = 0;
    while(getSiguiente(actual) != NULL){
        tam++;
        actual = getSiguiente(actual);
    }
    tam++;
    //printf("Tam: %d", tam);
    return tam;
};
void eliminarPrimero(ListaPtr lista){

    lista->primero = getSiguiente(lista->primero);

};
void eliminarUltimo(ListaPtr lista){

    int tam = obtenerTam(lista);
    int indice = 0;
    NodoPtr actual = getPrimero(lista);

    while(indice < tam-2){
        actual = getSiguiente(actual);
        indice++;
    }
    setSiguiente(actual, NULL);
};
int buscarElemento(ListaPtr lista, int dato){
    NodoPtr actual = getPrimero(lista);
    int tam = obtenerTam(lista);
    int encontrado = -1;

    for(int i = 0; i < tam; i++){
        if(getDato(actual) == dato){
            encontrado = i;
            i = tam;
        }
        actual = getSiguiente(actual);
    }
    return encontrado;
};
void ordenarBurbuja(ListaPtr lista){

    int tam = obtenerTam(lista);
    int aux;

    for(int i = 0; i < tam-1; i++){
        NodoPtr actual = getPrimero(lista);
        for(int j = 0; j < tam-1; j++){
            if(getDato(actual) > getDato(getSiguiente(actual))){

                aux = getDato(actual);
                setDato(actual, getDato(getSiguiente(actual)));
                setDato(getSiguiente(actual), aux);
//                aux = actual2;
//                actual2 = actual1;
//                actual1 = aux;
            }
            actual = getSiguiente(actual);
        }
    }
};

