#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include "libro.h"
#include "cola.h"
#include "pila.h"
#include "usuario.h"
#include "lista.h"
#include "libro.h"
#include "prestamo.h"



struct Biblioteca;

typedef struct Biblioteca * BiPtr;

BiPtr crearBiblioteca(char* nombre);

void mostrarBiblioteca(BiPtr biblio);

void insertarPrestamo(BiPtr biblio, PrestamoPtr prestamo);
void devolverLibro(BiPtr biblio, LibroPtr libro); //detalles del libro devuelto
void reubicarLibro(BiPtr biblio);
void mostrarEstanteria(BiPtr biblio);
void registrarSolicitud(BiPtr biblio, UsuarioPtr usuario);

void procesarPrestamo(); //detalles de usuario


#endif // BIBLIOTECA_H_INCLUDED
