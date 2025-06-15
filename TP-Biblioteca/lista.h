#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"
#include "libro.h"

#endif // LISTA_H_INCLUDED

struct Lista;

typedef struct Lista * ListaPtr;

ListaPtr crearLista();

void setPrimero(ListaPtr lista, NodoPtr nodo);
NodoPtr getPrimero(ListaPtr lista);
//void setPrimero(ListaPtr lista, NodoPtr nodo);

void insertarEnOrden(ListaPtr lista, DatoPtr dato, int (*comparar)(void*, void*));
void insertarPrimero(ListaPtr lista, DatoPtr dato);

void mostrarLista(ListaPtr lista, void (*wrapper)(void*));

void liberarLista(ListaPtr lista);

int obtenerTam(ListaPtr lista);
