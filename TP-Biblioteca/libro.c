#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libro.h"

struct Libro{

    char titulo[25];
    char autor[25];

};


LibroPtr crearLibro(char* titulo, char* autor){

    LibroPtr libro = (LibroPtr)malloc(sizeof(struct Libro));

    strcpy(libro->titulo, titulo);
    strcpy(libro->autor, autor);

    return libro;

};

void mostrarLibro(LibroPtr libro);
