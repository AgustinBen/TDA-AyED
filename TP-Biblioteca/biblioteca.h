#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include "libro.h"
#include "cola.h"
#include "pila.h"
#include "usuario.h"
#include "lista.h"



struct Biblioteca;

typedef struct Biblioteca * BiPtr;

BiPtr crearBiblioteca(char* nombre);

void mostrarBiblioteca(BiPtr biblio);

void insertarUsuario();

void devolverLibro(BiPtr biblio, LibroPtr libro); //detalles del libro devuelto
void reubicarLibro(BiPtr biblio);
void registrarSolicitud();
void procesarPrestamo(); //detalles de usuario


#endif // BIBLIOTECA_H_INCLUDED
