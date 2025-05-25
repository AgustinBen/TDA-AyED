#include <stdio.h>
#include <stdlib.h>
#include "aeropuerto.h"

int main()
{
    printf("Hello World!\n");

    AeroPtr aeroP1 = crearAeropuerto("Aeropuerto Internacional Ezeiza", "Richieri Km 33", "Ezeiza");
    mostrarAeropuerto(aeroP1);

    return 0;
}
