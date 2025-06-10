#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED
#include "nodo.h"

struct Libro;

typedef struct Libro * LibroPtr;

LibroPtr crearLibro(char* titulo, char* autor);


DatoPtr getTitulo(LibroPtr libro);

void mostrarLibro(LibroPtr libro);
void wrapperLibro(void * dato);

void liberarLibro(LibroPtr libro);

#endif // LIBRO_H_INCLUDED
