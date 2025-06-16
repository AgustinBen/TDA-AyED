#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "libro.h"
#include "usuario.h"

// Un Sistema de Biblioteca tiene una cola de Usuarios esperando libros y una pila de Libros Recibidos.

// Con el menú sí o sí se deberá poder apilar (registrar devolución) y desapilar (reubicar libro),
// encolar (registrar solicitud) y desencolar (procesar préstamo) y
// acceder a la información que corresponda de la pila (detalles del libro devuelto) y
// la cola (datos del usuario solicitante).


int main()
{
    BiPtr biblioteca = crearBiblioteca("Faustino Sarmiento");

    mostrarBiblioteca(biblioteca);

    LibroPtr libro1 = crearLibro("Don Quijote de la Mancha", "Miguel de Cervantes", 100);
    LibroPtr libro2 = crearLibro("Harry Potter y el prisionero de Azkaban", "J.K. Rowling", 101);
    LibroPtr libro3 = crearLibro("La Metamorfosis", "Franz Kafka", 102);
    LibroPtr libro4 = crearLibro("Rayuela", "Julio Cortazar", 103);
    LibroPtr libro5 = crearLibro("Hamlet", "William Shakespeare", 104);
    LibroPtr libro6 = crearLibro("El libro de arena", "Jorge Luis Borges", 105);

    insertarEnOrden(getEstanteria(biblioteca), libro6, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro3, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro1, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro2, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro5, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro4, comparar);

    //Abrimos biblioteca
    mostrarEstanteria(biblioteca);

    UsuarioPtr usuario1 = crearUsuario("Agustin", 1);
    UsuarioPtr usuario2 = crearUsuario("Jorge", 2);
    UsuarioPtr usuario3 = crearUsuario("Mauro", 3);
    UsuarioPtr usuario4 = crearUsuario("Noemi", 4);
    UsuarioPtr usuario5 = crearUsuario("Noelia", 5);

    registrarSolicitud(biblioteca, usuario1, 104);
    registrarSolicitud(biblioteca, usuario2, 102);
    registrarSolicitud(biblioteca, usuario3, 105);
//    registrarSolicitud(biblioteca, usuario4, 103);
//    registrarSolicitud(biblioteca, usuario5, 103);

    procesarPrestamo(biblioteca);
    procesarPrestamo(biblioteca);
    procesarPrestamo(biblioteca);
//    procesarPrestamo(biblioteca);
//    procesarPrestamo(biblioteca);

    mostrarEstanteria(biblioteca);

    devolverLibro(biblioteca);
    devolverLibro(biblioteca);
    devolverLibro(biblioteca);
//    devolverLibro(biblioteca, libro3);
//
    reubicarLibro(biblioteca);
    reubicarLibro(biblioteca);
    reubicarLibro(biblioteca);
//
    mostrarEstanteria(biblioteca);

    return 0;
}
