#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "avion.h"
#include "lista.h"


struct Avion{

    char tipo[20];
    int matricula;
    int capacidad;

    ListaPtr pasajerosL;

    //ListaPtr Destinos

};;


AvionPtr crearAvion(char tipo[], int mat, int cap){

    AvionPtr avion = (AvionPtr)malloc(sizeof(struct Avion));

    strcpy(avion->tipo, tipo);
    avion->capacidad = cap;
    avion->matricula = mat;
    avion->pasajerosL = crearLista();

    return avion;

};

void mostrarAvion(AvionPtr a){

    printf("\n  --AVION--\n");
    printf("\n    Tipo:  %s; Matricula: %d; Capacidad: %d \n", a->tipo, a->matricula, a->capacidad);

    mostrarLista(a->pasajerosL, &wrapperPasajero);

};

void wrapperAvion(void * dato){

    AvionPtr a =  (AvionPtr )dato;
    mostrarAvion(a);

};

void insertarPasajeroUlt(AvionPtr a, PasajeroPtr p){

    if(a->capacidad != 0){
         insertarUltimo(a->pasajerosL, p);
         a->capacidad--;
    }else{
        printf("No hay asientos disponibles");
    }

};
void insertarPasajeroPri(AvionPtr a, PasajeroPtr p);

//void eliminarVentanaS(AvionPtr a){
//
//    PasajeroPtr p = getDato(getPrimero(a->pasajerosL));
//
//    if(p->ventanilla == 'S'){
//        if()
//
//    }
//
//
//};


//void eliminarPasajerosVentanilla(AvionPtr a){
//    NodoPtr actual = getPrimero(a->pasajerosL);
//    NodoPtr anterior = NULL;
//    int pos = 0;
//
//    while (actual != NULL) {
//        PasajeroPtr p = (PasajeroPtr)getDato(actual);
//        if (getVentanilla(p) == 'S') {
//            if (anterior == NULL) {
//                eliminarPrimero(a->listaPasajeros);
//                actual = getPrimero(a->listaPasajeros);
//            } else {
//                NodoPtr siguiente = getSiguiente(actual);
//                eliminarPosicion(a->listaPasajeros, pos);
//                actual = siguiente;
//                continue;
//            }
//            a->capacidad++;
//        } else {
//            anterior = actual;
//            actual = getSiguiente(actual);
//            pos++;
//        }
//    }
//}

void ordenarPasajeros(AvionPtr a){
    int tam = obtenerTam(a->pasajerosL);
    NodoPtr actual = getPrimero(a->pasajerosL);

    for(int i = 0; i < tam-1; i++){
        PasajeroPtr p = (PersonaPtr)actual;
        for(int j = 0; j < tam; i++){
            if(actual->)

        }
    }


};
