#include <stdio.h>
#include <stdlib.h>
#include "aeropuerto.h"
#include "avion.h"
#include "lista.h"

int main()
{
    printf("Hello World!\n");

    AeroPtr aeroP1 = crearAeropuerto("Aeropuerto Internacional Ezeiza", "Riccheri Km 33", "Ezeiza");
    AvionPtr avion1 = crearAvion("Boeing 737", 1111, 10);
    AvionPtr avion2 = crearAvion("Airbus A320", 2222, 5);
    AvionPtr avion3 = crearAvion("Embraer E190", 3333, 8);

    insertarAvion(aeroP1, avion1);
    insertarAvion(aeroP1, avion2);
    insertarAvion(aeroP1, avion3);
    mostrarAeropuerto(aeroP1);



    return 0;
}
