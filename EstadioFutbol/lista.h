#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"
#include "jugador.h"

struct Lista;

typedef struct Lista * ListaPtr;

ListaPtr crearLista();

void mostrarLista(ListaPtr lista, void (*wrapper)(DatoPtr));

void setPrimero(ListaPtr lista, NodoPtr nuevoPrimero);
NodoPtr getPrimero(ListaPtr lista);

void ordenarLista(ListaPtr lista, int(*comparar)(DatoPtr, DatoPtr));

void insertarPrimero(ListaPtr lista, DatoPtr d);


#endif // LISTA_H_INCLUDED
