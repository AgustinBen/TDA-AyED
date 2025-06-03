#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libro.h"

struct Libro{

    char titulo[45];
    char autor[25];

};


LibroPtr crearLibro(char* titulo, char* autor){

    LibroPtr libro = (LibroPtr)malloc(sizeof(struct Libro));

    strcpy(libro->titulo, titulo);
    strcpy(libro->autor, autor);

    return libro;

};

void mostrarLibro(LibroPtr libro){

        //printf("\n -Libro- \n");
        printf("  Titulo: %s\n", libro->titulo);
        printf("  Autor:  %s\n", libro->autor);

};

void liberarLibro(LibroPtr libro){

    free(libro);

};
