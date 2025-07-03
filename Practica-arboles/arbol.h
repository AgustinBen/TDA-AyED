#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;

NodoPtr crearNodo(int dato);

void insertar(NodoPtr nodo,int dato);
void preOrden(NodoPtr nodo);
void inOrden(NodoPtr nodo);
void postOrden(NodoPtr nodo);
NodoPtr buscar(NodoPtr nodo,int dato);

#endif // NODO_H_INCLUDED
