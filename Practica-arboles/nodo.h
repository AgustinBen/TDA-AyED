#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;
typedef void * DatoPtr;

NodoPtr crearNodo(DatoPtr dato, NodoPtr izquierda, NodoPtr derecha);

void setDato(NodoPtr nodo, DatoPtr nuevoDato);
void setDerecha(NodoPtr nodo, NodoPtr nodoDer);
DatoPtr getDato (NodoPtr nodo);
void setIzquierda(NodoPtr nodo, NodoPtr nodoIzq);
NodoPtr getDerecha(NodoPtr nodo);
NodoPtr getIzquierda(NodoPtr nodo);


#endif // NODO_H_INCLUDED
