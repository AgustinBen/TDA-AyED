#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"

struct Usuario{

    int id;
    char nombre[25];

};


UsuarioPtr crearUsuario(char* nombre, int id){

    UsuarioPtr usuario = (UsuarioPtr)malloc(sizeof(struct Usuario));

    strcpy(usuario->nombre, nombre);
    usuario->id = id;

    return usuario;

};

void liberarUsuario(UsuarioPtr usuario){

    free(usuario);

};
