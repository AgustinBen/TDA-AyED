#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libro.h"

struct Libro{

    int codigo;
    char titulo[45];
    char autor[25];

};


LibroPtr crearLibro(char* titulo, char* autor,int codigo){

    LibroPtr libro = (LibroPtr)malloc(sizeof(struct Libro));

    libro->codigo = codigo;
    strcpy(libro->titulo, titulo);
    strcpy(libro->autor, autor);

    return libro;

};

DatoPtr getTitulo(LibroPtr libro){

    return libro->titulo;

};

void mostrarLibro(LibroPtr libro){

        //printf("\n -Libro- \n");
        printf("  Titulo: %s\n", libro->titulo);
        printf("  Autor:  %s\n", libro->autor);

};


void wrapperLibro(void * dato){

    LibroPtr libro = dato;

    mostrarLibro(libro);

};

void mostrarLibroLista(LibroPtr libro){

        //printf("\n -Libro- \n");
        printf("{ %s }", libro->titulo);

};


void wrapperLibroLista(void * dato){

    LibroPtr libro = dato;

    mostrarLibroLista(libro);

};

void liberarLibro(LibroPtr libro){

    free(libro);

};
