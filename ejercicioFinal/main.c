#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "persona.h"

int main()
{

    EstadioPtr estadio1 = crearEstadio("La Bombonera", 54000, "Buenos Aires");
    mostrarEstadio(estadio1);

    PersonaPtr p1 = crearPersona("Agustin", 41232425);
    PersonaPtr p2 = crearPersona("Jorge", 4233335);
    PersonaPtr p3 = crearPersona("Leo", 42245562);
    PersonaPtr p4 = crearPersona("Mauro", 40635222);
    PersonaPtr p5 = crearPersona("Santi", 43112244);

    insertarPersona(estadio1, p1);

    mostrarPersona(p1);

    return 0;

}
