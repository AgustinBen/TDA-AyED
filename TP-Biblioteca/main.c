#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    BiPtr biblioteca = crearBiblioteca("Domingo F. Sarmiento");

    mostrarBiblioteca(biblioteca);

    printf("\n  Bienvenido!\n");


    return 0;
}
