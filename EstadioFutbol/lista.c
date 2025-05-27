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

    printf("\n<LISTA> TAM: %d", obtenerTam(lista));
    NodoPtr actual = getPrimero(lista);

    while(actual != NULL){

        wrapper(getDato(actual));

        actual = getSiguiente(actual);
    }
    printf("\n\n");
};

NodoPtr getPrimero(ListaPtr lista){

    return lista->primero;

};
void setPrimero(ListaPtr lista, NodoPtr nuevoPrimero){

    lista->primero = nuevoPrimero;

};

//void ordenarLista(ListaPtr lista, int(*comparar)(DatoPtr, DatoPtr)){
//    //2) Ordenar la lista de jugadores por cantidad de minutos en cancha de cada jugador (de mayor a menor)
//    NodoPtr actual;
//    int cambios;
//
//    do{
//        actual = getPrimero(lista);
//        cambios = 0;
//
//        while(actual != NULL){
//
//            if(comparar(getDato(actual), getDato(getSiguiente(actual)))){
//
//                DatoPtr aux = getDato(actual);
//                setDato(actual, getDato(getSiguiente(actual)));
//                setDato(getSiguiente(actual), aux);
//
//                cambios++;
//            }
//            actual = getSiguiente(actual);
//        }
//
//    }while(cambios != 0);
//};


void ordenarLista(ListaPtr lista, int(*comparar)(void* , void*)){

	int permutacion;
	NodoPtr nodo;
	NodoPtr ultimo = NULL;

	if(obtenerTam(lista)<2){
	//no hago nada

	}else{

		do{

			permutacion = 0;
			nodo = lista->primero;

			while(getSiguiente(nodo) != ultimo){

			     if(comparar(getDato(nodo), getDato(getSiguiente(nodo)))){

				DatoPtr aux = getDato(nodo);
				setDato(nodo, getDato(getSiguiente(nodo)));
				setDato(getSiguiente(nodo), aux);
				permutacion = 1;
				}
				nodo = getSiguiente(nodo);
			}
			ultimo = nodo; //opcional

        }while(permutacion != 0);
	}
};


void insertarPrimero(ListaPtr lista, DatoPtr d){

    NodoPtr nodo = crearNodo(d, lista->primero);
    setPrimero(lista, nodo);
}


int obtenerTam(ListaPtr lista){

    NodoPtr actual = lista->primero;
    int tam = 0;

    while(actual != NULL){

        tam++;
        actual = getSiguiente(actual);
    }

    return tam;
};
