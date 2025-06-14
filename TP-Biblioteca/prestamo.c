#include <stdio.h>
#include <stdlib.h>
#include "prestamo.h"

struct Prestamo{

    UsuarioPtr usuario;
    LibroPtr libro;

};

PrestamoPtr crearPrestamo(UsuarioPtr usuario, LibroPtr libro){

    PrestamoPtr pres = (PrestamoPtr)malloc(sizeof(struct Prestamo));

    pres->usuario = usuario;
    pres->libro = libro;

    return pres;

};

void liberarPrestamo(PrestamoPtr prestamo){

    free(prestamo);

};
