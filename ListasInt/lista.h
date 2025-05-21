#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"
struct Lista;

typedef struct Lista * ListaPtr;

//constructor
ListaPtr crearLista();
void mostrarLista(ListaPtr lista);
void liberarLista(ListaPtr lista);
void insertarPrimero(ListaPtr lista, int dato);
void insertarUltimo(ListaPtr lista, int dato);


//getters y setters
NodoPtr getPrimero(ListaPtr lista);
int getUltimo(ListaPtr lista);
void setPrimero(ListaPtr lista, NodoPtr nodo);
void setUltimo(ListaPtr lista, NodoPtr nodo);

//otros
int obtenerTam(ListaPtr lista);
void eliminarPrimero(ListaPtr lista);
void eliminarUltimo(ListaPtr lista);
int buscarElemento(ListaPtr lista, int dato);
void ordenarBurbuja(ListaPtr lista);

#endif // LISTA_H_INCLUDED
