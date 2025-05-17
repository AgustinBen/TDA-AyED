#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;
typedef void * DatoPtr;


NodoPtr crearNodo(DatoPtr dato, NodoPtr siguiente);
void mostrarNodo(NodoPtr nodo);
void mostrarNodoFloat(NodoPtr nodo);
void mostrarNodoChar(NodoPtr nodo);
void liberarNodo(NodoPtr nodo);

///getters y setters
DatoPtr getDato(NodoPtr nodo);
void setDato(NodoPtr nodo, DatoPtr nuevoDato);
NodoPtr getSiguiente(NodoPtr nodo);
void setSiguiente(NodoPtr nodo, NodoPtr nuevoSiguiente);





#endif // NODO_H_INCLUDED
