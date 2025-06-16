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


ListaPtr getEstanteria(BiPtr biblio);
void devolverLibro(BiPtr biblio); //detalles del libro devuelto
void reubicarLibro(BiPtr biblio);
void mostrarEstanteria(BiPtr biblio);
void registrarSolicitud(BiPtr biblio, UsuarioPtr usuario, int codLibro);

void insertarPrestamo(BiPtr biblio,PrestamoPtr nuevoPrestamo);
void procesarPrestamo(BiPtr biblio); //detalles de usuario
LibroPtr buscarLibro(BiPtr biblio, int codLibro,  int (*comparar)(void*, void*));


#endif // BIBLIOTECA_H_INCLUDED
