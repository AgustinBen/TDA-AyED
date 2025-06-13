#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

struct Biblioteca{

    char nombre[30];
    PilaPtr pilaLibros;
    ColaPtr colaUsuarios;
    ListaPtr estanteria;

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

void insertarUsuario();

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

    printf("\n-Estanteria-\n");

    mostrarLista(biblio->estanteria, &wrapperLibroLista);

}

void registrarSolicitud();
void procesarPrestamo(); //detalles de usuario
