#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "nodo.h"

struct Lista;


typedef struct Lista * ListaPtr;

ListaPtr crearLista();

NodoPtr getPrimero(ListaPtr lista);

void insertarPrimero(ListaPtr lista, DatoPtr dato);
void insertarUltimo(ListaPtr lista, DatoPtr dato);
void insertarPosicion(ListaPtr lista, DatoPtr dato, int posicion); //tarea


DatoPtr obtenerPrimero(ListaPtr lista);
DatoPtr obtenerUltimo(ListaPtr lista); //tarea
DatoPtr obtenerPosicion(ListaPtr lista, int pos); //tarea

DatoPtr eliminarPrimero(ListaPtr lista);
DatoPtr eliminarUltimo(ListaPtr lista); //tarea
DatoPtr eliminarposicion(ListaPtr lista, int pos); //tarea

int obtenerTam(ListaPtr lista);

void ordenarLista(ListaPtr lista, int (*comparar)(void*, void*));

int buscarElemento(ListaPtr lista, DatoPtr datoBuscado);//tarea

void insertarEnOrden(ListaPtr lista, DatoPtr dato);//tarea, si la lista está ordenada cada vez que
//se inserta se inserta en la posición que corresponda

//void mostrarLista(ListaPtr lista);
void mostrarListaGen(ListaPtr lista, void(*mostrar)(void*));
//void mostrarListaChar(ListaPtr lista);

void liberarLista(ListaPtr lista);
void eliminarPos(ListaPtr lista, int pos);

#endif // LISTA_H_INCLUDED
