#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"

struct Usuario{

    int id;
    char nombre[25];
    int codigoLibro;

};


UsuarioPtr crearUsuario(char* nombre, int id){

    UsuarioPtr usuario = (UsuarioPtr)malloc(sizeof(struct Usuario));

    strcpy(usuario->nombre, nombre);
    usuario->id = id;
    usuario->codigoLibro = 0;

    return usuario;

};

void setCodigoLibro(UsuarioPtr usuario, int codigo){

    usuario->codigoLibro = codigo;
}

void liberarUsuario(UsuarioPtr usuario){

    free(usuario);

};
