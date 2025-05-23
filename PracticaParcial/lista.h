#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"

struct Lista;

typedef struct Lista * ListaPtr;

//constructor

ListaPtr crearLista();
void mostrarLista(ListaPtr lista);

void insertarPrimero(ListaPtr lista, DatoPtr dato);
void insertarUltimo(ListaPtr lista, DatoPtr dato);



//getters y setters

void setUltimo(ListaPtr lista, NodoPtr nodo);
void setPrimero(ListaPtr lista, NodoPtr nodo);
NodoPtr getUltimo(ListaPtr lista);
NodoPtr getPrimero(ListaPtr lista);




#endif // LISTA_H_INCLUDED
