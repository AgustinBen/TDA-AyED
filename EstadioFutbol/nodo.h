#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;
typedef void * DatoPtr;

NodoPtr crearNodo(DatoPtr dato, NodoPtr siguiente);


void setDato(NodoPtr n, DatoPtr nuevoDato);
DatoPtr getDato(NodoPtr n);
void setSiguiente(NodoPtr n, NodoPtr nuevoSiguiente);
NodoPtr getSiguiente(NodoPtr n);

#endif // NODO_H_INCLUDED
