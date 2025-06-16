#ifndef PRESTAMO_H_INCLUDED
#define PRESTAMO_H_INCLUDED
#include "libro.h"
#include "usuario.h"

struct Prestamo;

typedef struct Prestamo * PrestamoPtr;

PrestamoPtr crearPrestamo(UsuarioPtr usuario, LibroPtr libro);

LibroPtr getLibro(PrestamoPtr prestamo);

void liberarPrestamo(PrestamoPtr prestamo);


#endif // PRESTAMO_H_INCLUDED
