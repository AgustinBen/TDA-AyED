#include <stdio.h>
#include <stdlib.h>
#include "aeropuerto.h"
#include "avion.h"
#include "lista.h"
#include "pasajero.h"

int main()
{

    AeroPtr aeroP1 = crearAeropuerto("Aeropuerto Internacional Ezeiza", "Riccheri Km 33", "Ezeiza");
    AvionPtr avion1 = crearAvion("Boeing 737", 1111, 10);
    AvionPtr avion2 = crearAvion("Airbus A320", 2222, 10);
    AvionPtr avion3 = crearAvion("Embraer E190", 3333, 10);
    //AvionPtr avion4 = crearAvion("Pajaro 3000", 4444, 2);
    PasajeroPtr p1 = crearPasajero("Perez", 45, 'S');
    PasajeroPtr p2 = crearPasajero("Lopez", 55, 'N');
    PasajeroPtr p3 = crearPasajero("Gomez", 35, 'N');
    PasajeroPtr p4 = crearPasajero("Garcia", 65, 'S');

    insertarAvion(aeroP1, avion1);
    insertarAvion(aeroP1, avion2);
    insertarAvion(aeroP1, avion3);
    insertarPasajeroUlt(avion3, p1);
    insertarPasajeroUlt(avion3, p2);
    insertarPasajeroUlt(avion3, p3);
    insertarPasajeroUlt(avion3, p4);
    mostrarAeropuerto(aeroP1);




    return 0;
}
