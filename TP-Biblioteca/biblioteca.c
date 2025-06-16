#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

struct Biblioteca{

    char nombre[30];
    PilaPtr pilaLibros;
    ColaPtr colaUsuarios;
    ListaPtr estanteria;
    ListaPtr prestamos;

};


BiPtr crearBiblioteca(char* nombre){

    BiPtr biblio = (BiPtr)malloc(sizeof(struct Biblioteca));

    strcpy(biblio->nombre, nombre);

    biblio->pilaLibros = crearPila();
    biblio->colaUsuarios = crearCola();
    biblio->estanteria = crearLista();
    biblio->prestamos = crearLista();

    return biblio;

};

PrestamoPtr getPrestamo(BiPtr biblio){

    NodoPtr actual = getPrimero(biblio->prestamos);

    PrestamoPtr prestamo = getDato(actual);

    setPrimero(biblio->prestamos, getSiguiente(actual));

    return prestamo;

}

void mostrarBiblioteca(BiPtr biblio){

    printf("\n-- Biblioteca %s --\n\n", biblio->nombre);

};

ListaPtr getEstanteria(BiPtr biblio){

    return biblio->estanteria;
};

void devolverLibro(BiPtr biblio){

    LibroPtr libro = getLibro(getPrestamo(biblio));

    apilar(biblio->pilaLibros, libro);

    printf("\n { Libro devuelto }\n");
    mostrarLibro(libro);

}; //detalles del libro devuelto


void reubicarLibro(BiPtr biblio){

    if(getUltimo(biblio->pilaLibros) == NULL){
        printf("pila de libros vacia!");
    }else{
//        LibroPtr libro = getUltimo(biblio->pilaLibros);
        insertarPrimero(biblio->estanteria, getDato(getUltimo(biblio->pilaLibros)));
        desapilar(biblio->pilaLibros);
    }
};


void mostrarEstanteria(BiPtr biblio){
    printf("------------------------------------------------------------------------------------------");
    printf("\n-Estanteria-\n\n");

    mostrarLista(biblio->estanteria, &wrapperLibroLista);
    printf("------------------------------------------------------------------------------------------\n");

};

void registrarSolicitud(BiPtr biblio, UsuarioPtr usuario, int codLibro){
    setCodigoLibro(usuario, codLibro);
    insertarEnCola(biblio->colaUsuarios, usuario);

};

LibroPtr buscarLibro(BiPtr biblio, int codLibro, int (*comparar)(void*, void*)){

    NodoPtr actual = getPrimero(biblio->estanteria);
    NodoPtr anterior = NULL;

    while(actual != NULL){

        if(comparar(getDato(actual), &codLibro) == 0){
            LibroPtr libro = (LibroPtr) getDato(actual);
            if(anterior == NULL){
                setPrimero(biblio->estanteria, getSiguiente(actual));
            }else{
                setSiguiente(anterior, getSiguiente(actual));
            }
            free(actual);
            return libro;
        }
        anterior = actual;
        actual = getSiguiente(actual);

    }
    return NULL;

};

void insertarPrestamo(BiPtr biblio,PrestamoPtr nuevoPrestamo){

    insertarPrimero(biblio->prestamos, nuevoPrestamo);

};

void procesarPrestamo(BiPtr biblio){

        UsuarioPtr usu = desencolar(biblio->colaUsuarios);

        if(usu == NULL){

            printf("\n No hay usuarios! \n");
            return;
        }

        int codActual = getCodigoLibro(usu);

        LibroPtr libro = buscarLibro(biblio, codActual, &compararLibro);

        if(libro == NULL){
            printf("\n  libro %d no encontrado!\n", codActual);
            insertarEnCola(biblio->colaUsuarios, usu);
        }else{
                printf("\n-Prestamo procesado-\n");
                mostrarLibro(libro);
                mostrarUsuario(usu);

                PrestamoPtr nuevoPrestamo = crearPrestamo(usu, libro);
                insertarPrestamo(biblio, nuevoPrestamo);
            }
}; //detalles de usuario
