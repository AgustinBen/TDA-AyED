#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"

struct Lista;

typedef struct Lista * ListaPtr;


ListaPtr crearLista();
void mostrarLista(ListaPtr lista, void(*wrapper)(DatoPtr));
void liberarLista(ListaPtr lista);


void setPrimero(ListaPtr lista, NodoPtr nuevoPrimero);
NodoPtr getPrimero(ListaPtr lista);

void insertarPrimero(ListaPtr lista, DatoPtr dato);
void insertarUltimo(ListaPtr lista, DatoPtr dato);

void eliminarPrimero(ListaPtr lista);
void elimarUltimo(ListaPtr lista);

int obtenerTam(ListaPtr lista);

#endif // LISTA_H_INCLUDED
