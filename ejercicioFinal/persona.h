#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct Persona;

typedef struct Persona * PersonaPtr;

PersonaPtr crearPersona(char* nombre, int dni);

char* getNombre(PersonaPtr persona);
int getDni(PersonaPtr persona);

void mostrarPersona(PersonaPtr persona);

void wrapperPersona(PersonaPtr persona);

#endif // PERSONA_H_INCLUDED
