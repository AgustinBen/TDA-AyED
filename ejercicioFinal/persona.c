#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"


struct Persona{

    char nombre[30];
    int  dni;

};

PersonaPtr crearPersona(char* nombre, int dni){

    PersonaPtr persona = (PersonaPtr)malloc(sizeof(struct Persona));

    strcpy(persona->nombre, nombre);
    persona->dni = dni;
};

char* getNombre(PersonaPtr persona){

    return persona->nombre;
};

int getDni(PersonaPtr persona){

    return persona->dni;
};

void mostrarPersona(PersonaPtr persona){

    printf("Nombre: %s \n", persona->nombre);
    printf("DNI: %d \n \n", persona->dni);

};

void wrapperPersona(PersonaPtr persona){



};
