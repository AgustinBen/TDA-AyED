#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;

NodoPtr crearNodo(int dato);

void insertar(NodoPtr nodo,int dato);
void preOrder(NodoPtr nodo);
void inOrder(NodoPtr nodo);
void postOrder(NodoPtr nodo);
NodoPtr buscar(NodoPtr nodo,int dato);

#endif // NODO_H_INCLUDED
