#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "persona.h"

int main()
{

    EstadioPtr estadio1 = crearEstadio("La Bombonera", 54000, "Buenos Aires");
    mostrarEstadio(estadio1);

    PersonaPtr p1 = crearPersona("Rodri", 41232425);
    PersonaPtr p2 = crearPersona("Jorge", 4233335);
    PersonaPtr p3 = crearPersona("Leo", 42245562);
    PersonaPtr p4 = crearPersona("Mauro", 40635222);
    PersonaPtr p5 = crearPersona("Santi", 43112244);

//    insertarPersonaEnCola(estadio1, p1);
//    insertarPersonaEnCola(estadio1, p5);
//
//    ingresarPersona(estadio1, &wrapperPersona);
//    ingresarPersona(estadio1, &wrapperPersona);
//    ingresarPersona(estadio1, &wrapperPersona);

//    apilarPersonas(estadio1, p1); revisar
//    apilarPersonas(estadio1, p3);
//    apilarPersonas(estadio1, p4);
//
//    desapilarPersona(estadio1, &wrapperPersona);
//    desapilarPersona(estadio1, &wrapperPersona);
//    desapilarPersona(estadio1, &wrapperPersona);  revisar

    return 0;

}
