#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;
typedef void * DatoPtr;

NodoPtr crearNodo(DatoPtr dato);

void insertar(NodoPtr nodo,DatoPtr dato);
void preOrden(NodoPtr nodo);
void inOrden(NodoPtr nodo);
void postOrden(NodoPtr nodo);
NodoPtr buscar(NodoPtr nodo, DatoPtr dato);

#endif // NODO_H_INCLUDED
