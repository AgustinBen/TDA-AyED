#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;
typedef void * DatoPtr;

NodoPtr crearNodo(DatoPtr dato, NodoPtr siguiente);

void setDato(NodoPtr nodo, DatoPtr dato);
DatoPtr getDato(NodoPtr nodo);
void setSiguiente(NodoPtr nodo, NodoPtr nuevoSig);
NodoPtr getSiguiente(NodoPtr nodo);

void liberarNodo(NodoPtr nodo);


#endif // NODO_H_INCLUDED
