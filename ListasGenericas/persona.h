#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct Persona;

typedef struct Persona * PersonaPtr;

PersonaPtr crearPersona(char n[25]);

void mostrarPersona(PersonaPtr p);

void wrapperPersona(void * dato);



#endif // PERSONA_H_INCLUDED
