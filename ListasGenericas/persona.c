#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

struct Persona{

    char nombre[25];

};

PersonaPtr crearPersona(char n[]){

    PersonaPtr p = (PersonaPtr)malloc(sizeof(struct Persona));

    strcpy(p->nombre,n);

    return p;

};

void mostrarPersona(PersonaPtr p){

    printf(" --PERSONA-- \n");
    printf("Nombre: %s \n\n", p->nombre);

};

void wrapperPersona(void * dato){

    PersonaPtr  p = *(PersonaPtr*) dato;

    mostrarPersona(p);

};
