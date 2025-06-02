#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

struct Biblioteca;

typedef struct Biblioteca * BiPtr;

BiPtr crearBiblioteca(char* nombre);

void mostrarBiblioteca(BiPtr biblio);


#endif // BIBLIOTECA_H_INCLUDED
