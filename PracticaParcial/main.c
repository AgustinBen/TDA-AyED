#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void mostrarInt(int n);
void mostrarFloat(float f);
void mostrarChar(char c[]);
void wrapperInt(void * dato);
void wrapperFloat(void * dato);
void wrapperChar(void * dato);

int main()
{
    printf("Hello world!\n");

    ListaPtr lista = crearLista();

    int n1 = 1, n2 = 2, n3 = 3, n4 = 4;

    insertarPrimero(lista, &n1);
    insertarPrimero(lista, &n2);
    insertarPrimero(lista, &n3);
    insertarPrimero(lista, &n4);

    mostrarLista(lista, &wrapperInt);





    return 0;

}



void mostrarInt(int n){

    printf("{ %d }", n);

}

void mostrarFloat(float f){

    printf("{ %.2f }", f);

}
void mostrarChar(char c[]){

    printf("\n %s \n", c);

}


void wrapperInt (void * dato){

    int n = *(int*)dato;

    mostrarInt(n);
}

void wrapperFloat(void * dato){

    float f = *(float*)dato;

    mostrarFloat(f);
}

//void wrapperChar(void * dato){
//
//    char c[] = (char*)dato;
//
//    mostrarChar(c);
//}


