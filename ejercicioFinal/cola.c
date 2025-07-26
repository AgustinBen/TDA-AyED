#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

struct Cola{

    DatoPtr primero;
    DatoPtr ultimo;

};

ColaPtr crearCola(){

    ColaPtr cola = (ColaPtr)malloc(sizeof(struct Cola));
    cola->primero = NULL;
    cola->ultimo = NULL;

    return cola;
};
