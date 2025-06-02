#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
#include "cola.h"
#include "pila.h"

struct Biblioteca{

    char nombre[30];
    PilaPtr listaLibros;
    ColaPtr listaUsuarios;

};


BiPtr crearBiblioteca(char* nombre){

    BiPtr biblio = (BiPtr)malloc(sizeof(struct Biblioteca));

    strcpy(biblio->nombre, nombre);

    biblio->listaLibros = crearPila();
    biblio->listaUsuarios = crearCola();

    return biblio;

};

void mostrarBiblioteca(BiPtr biblio){

    printf("\n-- Biblioteca %s --\n", biblio->nombre);

};
