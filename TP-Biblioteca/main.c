#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "libro.h"
#include "usuario.h"

int main()
{
    //Creación de biblioteca
    BiPtr biblioteca = crearBiblioteca("Faustino Sarmiento");

    //Creación libros
    LibroPtr libro1 = crearLibro("Don Quijote de la Mancha", "Miguel de Cervantes", 100);
    LibroPtr libro2 = crearLibro("Harry Potter y el prisionero de Azkaban", "J.K. Rowling", 101);
    LibroPtr libro3 = crearLibro("La Metamorfosis", "Franz Kafka", 102);
    LibroPtr libro4 = crearLibro("Rayuela", "Julio Cortazar", 103);
    LibroPtr libro5 = crearLibro("Hamlet", "William Shakespeare", 104);
    LibroPtr libro6 = crearLibro("El libro de arena", "Jorge Luis Borges", 105);

    //Creación de usuarios
    UsuarioPtr usuario1 = crearUsuario("Noelia", 1);
    UsuarioPtr usuario2 = crearUsuario("Jorge", 2);
    UsuarioPtr usuario3 = crearUsuario("Mauro", 3);
    UsuarioPtr usuario4 = crearUsuario("Noemi", 4);

    //Ordenamos los libros en la estanteria
    insertarEnOrden(getEstanteria(biblioteca), libro6, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro3, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro1, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro2, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro5, comparar);
    insertarEnOrden(getEstanteria(biblioteca), libro4, comparar);

    //ABRIMOS BIBLIOTECA

    mostrarBiblioteca(biblioteca);
    mostrarEstanteria(biblioteca);
//
    registrarSolicitud(biblioteca, usuario1, 104);
    registrarSolicitud(biblioteca, usuario2, 102);
//    registrarSolicitud(biblioteca, usuario3, 102);
//    registrarSolicitud(biblioteca, usuario4, 105);

//  Verificamos si el libro deseado esta disponible y si hay usuarios esperando
    procesarPrestamo(biblioteca);
    procesarPrestamo(biblioteca);
    procesarPrestamo(biblioteca);
//    procesarPrestamo(biblioteca);
//    procesarPrestamo(biblioteca);
//
//
    mostrarEstanteria(biblioteca);
//
    devolverLibro(biblioteca, usuario2);
    devolverLibro(biblioteca, usuario1);
//
    reubicarLibro(biblioteca);
    reubicarLibro(biblioteca);
//    reubicarLibro(biblioteca);
//
    mostrarEstanteria(biblioteca);

    return 0;
}
