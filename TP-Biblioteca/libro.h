#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED
#include "nodo.h"

struct Libro;

typedef struct Libro * LibroPtr;

LibroPtr crearLibro(char* titulo, char* autor, int codigo);


DatoPtr getTitulo(LibroPtr libro);
int getCodigo(LibroPtr libro);
void mostrarLibro(LibroPtr libro);
void wrapperLibro(void * dato);
void mostrarLibroLista(LibroPtr libro);
void wrapperLibroLista(void * dato);
int comparar(void* dato1, void* dato2);
void liberarLibro(LibroPtr libro);

#endif // LIBRO_H_INCLUDED
