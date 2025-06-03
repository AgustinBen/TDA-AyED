#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

struct Biblioteca{

    char nombre[30];
    PilaPtr pilaLibros;
    ColaPtr colaUsuarios;

};


BiPtr crearBiblioteca(char* nombre){

    BiPtr biblio = (BiPtr)malloc(sizeof(struct Biblioteca));

    strcpy(biblio->nombre, nombre);

    biblio->pilaLibros = crearPila();
    biblio->colaUsuarios = crearCola();

    return biblio;

};

void mostrarBiblioteca(BiPtr biblio){

    printf("\n-- Biblioteca %s --\n", biblio->nombre);

};

void insertarUsuario();

void devolverLibro(BiPtr biblio, LibroPtr libro){

    insertarEnPila(biblio->pilaLibros, libro);

    printf("\n { Libro devuelto }\n");
    mostrarLibro(libro);

}; //detalles del libro devuelto


void reubicarLibro(BiPtr biblio){

    if(getUltimo(biblio->pilaLibros) == NULL){
        printf("pila de libros vacia!");
    }else{
        eliminarUltimo(biblio->pilaLibros);
    }

};
void registrarSolicitud();
void procesarPrestamo(); //detalles de usuario
