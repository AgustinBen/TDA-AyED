#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"
#include "libro.h"

#endif // LISTA_H_INCLUDED

struct Lista;

typedef struct Lista * ListaPtr;

ListaPtr crearLista();

NodoPtr getPrimero(ListaPtr lista);

void insertarPrimero(ListaPtr lista, DatoPtr dato);

void mostrarLista(ListaPtr lista, void (*wrapper)(void*));

void liberarLista(ListaPtr lista);

int obtenerTam(ListaPtr lista);
