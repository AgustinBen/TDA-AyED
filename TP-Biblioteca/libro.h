#ifndef LIBRO_H_INCLUDED
#define LIBRO_H_INCLUDED

struct Libro;

typedef struct Libro * LibroPtr;

LibroPtr crearLibro(char* titulo, char* autor);

void mostrarLibro(LibroPtr libro);

#endif // LIBRO_H_INCLUDED
