#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;
//typedef void * DatoPtr;

///Primitivas

//constructor
NodoPtr crearNodo (int dato, NodoPtr siguiente);
void mostrarNodo (NodoPtr n);
void liberarNodo (NodoPtr n);

// Setter y getter
void setDato(NodoPtr n, int nuevoDato);
int getDato(NodoPtr n);
void setSiguiente(NodoPtr n, NodoPtr nuevoNodo);
NodoPtr getSiguiente(NodoPtr n);

#endif // NODO_H_INCLUDED
