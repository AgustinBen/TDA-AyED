#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libro.h"

struct Libro{

    int codigo;
    char titulo[45];
    char autor[25];

};


LibroPtr crearLibro(char* titulo, char* autor,int codigo){

    LibroPtr libro = (LibroPtr)malloc(sizeof(struct Libro));

    libro->codigo = codigo;
    strcpy(libro->titulo, titulo);
    strcpy(libro->autor, autor);

    return libro;

};

int getCodigo(LibroPtr libro){

    return libro->codigo;

}

DatoPtr getTitulo(LibroPtr libro){

    return libro->titulo;

};

void mostrarLibro(LibroPtr libro){

        //printf("\n -Libro- \n");
        printf("  Titulo: %s\n", libro->titulo);
        printf("  Autor:  %s\n", libro->autor);

};

void mostrarLibroLista(LibroPtr libro){

        //printf("\n -Libro- \n");
        printf("{ %s }", libro->titulo);

};



void wrapperLibro(void * dato){

    LibroPtr libro = dato;

    mostrarLibro(libro);

};



void wrapperLibroLista(void* dato){

    LibroPtr libro = dato;

    mostrarLibroLista(libro);

};

void liberarLibro(LibroPtr libro){

    free(libro);

};

int compararLibro(void* libro, void* codigo){

    LibroPtr n1 = libro;

    int* n2 = codigo;

    return (getCodigo(n1) - *n2);

};

int comparar(void* dato1, void* dato2){

    LibroPtr libro1 = (LibroPtr)dato1;
    LibroPtr libro2 = (LibroPtr)dato2;

    int codigo1 = getCodigo(libro1);
    int codigo2 = getCodigo(libro2);

    return (codigo1 - codigo2);
};
