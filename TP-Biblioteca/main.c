#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "libro.h"
#include "usuario.h"

// Un Sistema de Biblioteca tiene una cola de Usuarios esperando libros y una pila de Libros Recibidos.

// Con el menú sí o sí se deberá poder apilar (registrar devolución) y desapilar (reubicar libro),
// encolar (registrar solicitud) y desencolar (procesar préstamo) y
// acceder a la información que corresponda de la pila (detalles del libro devuelto) y la cola (datos del usuario solicitante).


int main()
{
    BiPtr biblioteca = crearBiblioteca("Domingo F. Sarmiento");

    mostrarBiblioteca(biblioteca);

    LibroPtr libro1 = crearLibro("Don Quijote de la Mancha", "Miguel de Cervantes");
    LibroPtr libro2 = crearLibro("Harry Potter", "J.K. Rowling");
    LibroPtr libro3 = crearLibro("La Odisea", "Homero");
    LibroPtr libro4 = crearLibro("Rayuela", "Julio Cortazar");
    LibroPtr libro5 = crearLibro("Hamlet", "William Shakespeare");

    UsuarioPtr usuario1 = crearUsuario("Agustin", 1);
    UsuarioPtr usuario2 = crearUsuario("Dante", 2);
    UsuarioPtr usuario3 = crearUsuario("Toribio", 3);

    devolverLibro(biblioteca, libro1);

    reubicarLibro(biblioteca);



    return 0;
}
