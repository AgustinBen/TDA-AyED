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

//    int dato1 = 12;
//    float dato2 = 12.5;
//    char dato3[] = "Cola cola";
//
//    NodoPtr n1 = crearNodo(&dato1, NULL);
//    NodoPtr n2 = crearNodo(&dato2, NULL);
//    NodoPtr n3 = crearNodo(&dato3, NULL);
//
//    mostrarNodoInt(n1);
//    mostrarNodoFloat(n2);
//    mostrarNodoChar(n3);






    return 0;

}



void mostrarInt(int n){

    printf("\n %d \n", n);

}

void mostrarFloat(float f){

    printf("\n %.2f \n", f);

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


