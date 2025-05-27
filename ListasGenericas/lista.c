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
    int tam = obtenerTam(lista);

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

    int tam = obtenerTam(lista);

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

NodoPtr getPrimero(ListaPtr lista){

    return lista->primero;
};

DatoPtr eliminarPrimero(ListaPtr lista){
    NodoPtr segundo = getSiguiente(lista->primero);
    lista->primero = segundo;
};

DatoPtr eliminarUltimo(ListaPtr lista){
    int pos = obtenerTam(lista);
    int contar = 0;
    NodoPtr nodoActual = lista->primero;

    while (contar < pos-2){
        nodoActual = getSiguiente(nodoActual);
        contar++;
    }
    setSiguiente(nodoActual, NULL);

}; //tarea

DatoPtr eliminarposicion(ListaPtr lista, int pos); //tarea

int obtenerTam(ListaPtr lista){
    int nodoTam = 0;

    NodoPtr nodoActual = lista->primero;
    while(nodoActual != NULL){
        nodoActual = getSiguiente(nodoActual);
        nodoTam++;
    }
    //printf("\nTamanio de la lista: %d \n", nodoTam);
    return nodoTam;
}; //tarea

//void ordenarLista(ListaPtr lista, int (*comparar)(void*, void*)){
//
//    NodoPtr actual = getPrimero(lista);
//
//    while(actual != NULL){
//        if(comparar(getDato(actual), getDato(getSiguiente(actual)))){
//
//            void* aux = getDato(actual);
//            setDato(actual, getDato(getSiguiente(actual)));
//            setDato(getSiguiente(actual), aux);
//
//        }
//        actual = getSiguiente(actual);
//    }
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

int buscarElemento(ListaPtr lista, DatoPtr datoBuscado);//tarea

void insertarEnOrden(ListaPtr lista, DatoPtr dato);//tarea, si la lista est� ordenada cada vez que
//se inserta se inserta en la posici�n que corresponda



void mostrarListaGen(ListaPtr lista, void (*mostrar)(void*)){

    printf("\n<LISTA> TAM: %d \n\n", obtenerTam(lista));
    NodoPtr actual = lista->primero;

    while (actual!=NULL){

        mostrar(getDato(actual));
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

void eliminarPos(ListaPtr lista, int pos){
    int tam = obtenerTam(lista);

    if(pos < 0 || pos >= tam){
        printf("\n no se puede eliminar en esa posicion");
    }else{
        if(pos == 0){
            eliminarPrimero(lista);
        }else{
            NodoPtr actual = lista->primero;
            NodoPtr anterior = NULL;
            int contar = 0;
            while(contar < pos){
                anterior = actual;
                actual = getSiguiente(actual);
                contar++;
            }
            setSiguiente(anterior, getSiguiente(actual));
        }
    }
};
