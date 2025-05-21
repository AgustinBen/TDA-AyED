#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

struct Nodo;

typedef struct Nodo * NodoPtr;
typedef void * DatoPtr;

// constructores

NodoPtr crearNodo(DatoPtr dato, NodoPtr siguiente);
void liberarNodo();
void mostrarNodoInt(NodoPtr nodo);
void mostrarNodoFloat(NodoPtr nodo);
void mostrarNodoChar(NodoPtr nodo);

//setters y getters

void setDato (NodoPtr nodo, DatoPtr nuevoDato);
DatoPtr getDato (NodoPtr nodo);
void setSiguiente (NodoPtr nodo, NodoPtr nuevoSiguiente);
NodoPtr getSiguiente (NodoPtr nodo);


#endif // NODO_H_INCLUDED
