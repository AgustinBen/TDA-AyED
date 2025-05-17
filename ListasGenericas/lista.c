#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct Lista{

    NodoPtr primero;

};


ListaPtr crearLista(){

    ListaPtr lista = malloc(sizeof(struct Lista));

    lista->primero = NULL;

    return lista;
};


void insertarPrimero(ListaPtr lista, DatoPtr dato){

    NodoPtr nuevoNodo = crearNodo(dato, lista->primero);

    lista->primero = nuevoNodo;

};


void insertarUltimo(ListaPtr lista, DatoPtr dato){

    NodoPtr nuevoNodo = crearNodo(dato, NULL);

    if (lista->primero == NULL){

        lista->primero = nuevoNodo;
    }else{

        NodoPtr nodoActual = lista->primero;

        while(getSiguiente(nodoActual) != NULL){
            nodoActual = getSiguiente(nodoActual);
        }

        //nodoActual->siguiente = nuevoNodo;
        setSiguiente(nodoActual, nuevoNodo);
    }

} //tarea


void insertarPosicion(ListaPtr lista, DatoPtr dato, int posicion){
    //NodoPtr nuevoNodo = crearNodo(dato, NULL);
    int tam = obtenerTamanio(lista);

    if(posicion < 0 || posicion > tam+1){
        printf("\nNo se puede guardar en esa posicion!\n");
    }else if(posicion == 0){
            insertarPrimero(lista, dato);
        }else if(posicion == tam){
            insertarUltimo(lista, dato);
         }else if(posicion > 0 && posicion < tam){
            NodoPtr nodoActual = lista->primero;

            for (int i = 0; i < posicion-1; i++ ){
                //nodoActual = nodoActual->siguiente;
                nodoActual = getSiguiente(nodoActual);
            }
            //nodoActual->siguiente = crearNodo(dato, nodoActual->siguiente);
            NodoPtr nuevoNodo = crearNodo(dato, getSiguiente(nodoActual));
            setSiguiente(nodoActual, nuevoNodo);
         }

 } //revisar
DatoPtr obtenerPrimero(ListaPtr lista){
    DatoPtr primero = getDato(lista->primero);
    printf("\nEl primer dato es: %d\n", primero);
    return primero;

}; //tarea
DatoPtr obtenerUltimo(ListaPtr lista){
    if(lista->primero != NULL){
            NodoPtr actual = lista->primero;
        while(getSiguiente(actual) != NULL){
                actual = getSiguiente(actual);
        }
        return getDato(actual);
    }else{
        return NULL;
    }
}; //tarea
DatoPtr obtenerPosicion(ListaPtr lista, int pos){

    int tam = obtenerTamanio(lista);

    if (pos < 0 || pos > tam+1){
        printf("No se puede buscar en esa posicion!");
    }else if(pos == 0){

        DatoPtr dato = obtenerPrimero(lista);
        printf("retornando pos 0: %d \n", dato);

         }else if(pos == tam){
             DatoPtr dato = obtenerUltimo(lista);

                printf("retornando pos %d: \n", tam);

            }else if(pos > 0 && pos < tam){
                 NodoPtr nodoActual = lista->primero;
                 for(int i = 0; i <= pos; i++){

                    if(i == pos){
                        printf("retornando pos %d: ", i);
                        return getDato(nodoActual);
                    }
                    nodoActual == getSiguiente(nodoActual);
                 }
            }
}; //tarea

DatoPtr eliminarPrimero(ListaPtr lista){
    NodoPtr segundo = getSiguiente(lista->primero);
    lista->primero = segundo;
};
DatoPtr eliminarUltimo(ListaPtr lista){
    int pos = obtenerTamanio(lista);
    int contar = 0;
    NodoPtr nodoActual = lista->primero;

    while (contar < pos-2){
        nodoActual = getSiguiente(nodoActual);
        contar++;
    }
    setSiguiente(nodoActual, NULL);

}; //tarea

DatoPtr eliminarposicion(ListaPtr lista, int pos); //tarea

int obtenerTamanio(ListaPtr lista){
    int nodoTam = 0;

    NodoPtr nodoActual = lista->primero;
    while(nodoActual != NULL){
        nodoActual = getSiguiente(nodoActual);
        nodoTam++;
    }
    //printf("\nTamanio de la lista: %d \n", nodoTam);
    return nodoTam;
}; //tarea

void ordenarLista(ListaPtr lista);//tarea
ListaPtr ordenarListaCopia(ListaPtr lista);//tarea
ListaPtr duplicarLista(ListaPtr lista);//tarea

int buscarElemento(ListaPtr lista, DatoPtr datoBuscado);//tarea

void insertarEnOrden(ListaPtr lista, DatoPtr dato);//tarea, si la lista está ordenada cada vez que
//se inserta se inserta en la posición que corresponda


void mostrarLista(ListaPtr lista){

    printf("\n<LISTA INT>\n");
    NodoPtr actual = lista->primero;

    while (actual!=NULL){

        mostrarNodo(actual);
        actual = getSiguiente(actual);
    }
    printf("\n\n");
};
void mostrarListaFloat(ListaPtr lista){

    printf("\n<LISTA FLOAT>\n");
    NodoPtr actual = lista->primero;

    while (actual!=NULL){

        mostrarNodoFloat(actual);
        actual = getSiguiente(actual);
    }
    printf("\n\n");
};
void mostrarListaChar(ListaPtr lista){

    printf("\n<LISTA CHAR>\n");
    NodoPtr actual = lista->primero;

    while (actual!=NULL){

        mostrarNodoChar(actual);
        actual = getSiguiente(actual);
    }
    printf("\n\n");
};

void liberarLista(ListaPtr lista) {

    NodoPtr actual = lista->primero;

    while (actual!=NULL){

        free(actual);
        actual = getSiguiente(actual);

    };
}
