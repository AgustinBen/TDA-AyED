#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

struct Biblioteca{

    char nombre[30];
    PilaPtr pilaLibros;
    ColaPtr colaUsuarios;
    ListaPtr estanteria;
    ListaPtr prestamos;

};


BiPtr crearBiblioteca(char* nombre){

    BiPtr biblio = (BiPtr)malloc(sizeof(struct Biblioteca));

    strcpy(biblio->nombre, nombre);

    biblio->pilaLibros = crearPila();
    biblio->colaUsuarios = crearCola();
    biblio->estanteria = crearLista();

    return biblio;

};

void mostrarBiblioteca(BiPtr biblio){

    printf("\n-- Biblioteca %s --\n", biblio->nombre);

};


void devolverLibro(BiPtr biblio, LibroPtr libro){

    apilar(biblio->pilaLibros, libro);

    printf("\n { Libro devuelto }\n");
    mostrarLibro(libro);

}; //detalles del libro devuelto


void reubicarLibro(BiPtr biblio){

    if(getUltimo(biblio->pilaLibros) == NULL){
        printf("pila de libros vacia!");
    }else{
//        LibroPtr libro = getUltimo(biblio->pilaLibros);
        insertarPrimero(biblio->estanteria, getDato(getUltimo(biblio->pilaLibros)));
        desapilar(biblio->pilaLibros);
    }
};

void mostrarEstanteria(BiPtr biblio){
    printf("------------------------------------------------------------------------------------------");
    printf("\n-Estanteria-\n\n");

    mostrarLista(biblio->estanteria, &wrapperLibroLista);
    printf("------------------------------------------------------------------------------------------");

}

void registrarSolicitud(BiPtr biblio, UsuarioPtr usuario){

    insertarEnCola(biblio->colaUsuarios, usuario);

};

LibroPtr buscarLibro(BiPtr biblio, int codLibro, int (*comparar)(void*, void*)){

    NodoPtr actual = getPrimero(biblio->estanteria);
    NodoPtr anterior = NULL;

    while(actual != NULL){

        if(comparar(getDato(actual), &codLibro) == 0){
            printf("Libro encontrado!\n");
            LibroPtr libro = (LibroPtr) getDato(actual);
            if(anterior == NULL){
                setPrimero(biblio->estanteria, getSiguiente(actual));
            }else{
                setSiguiente(anterior, getSiguiente(actual));
            }
            free(actual);
            return libro;
        }
        anterior = actual;
        actual = getSiguiente(actual);

    }
    return NULL;

};


//void insertarPrestamo(BiPtr biblio, PrestamoPtr prestamo){
//
//    insertarPrimero(biblio->prestamos, prestamo);
//
//};
//void procesarPrestamo(BiPtr biblio, int codLibro); //detalles de usuario
