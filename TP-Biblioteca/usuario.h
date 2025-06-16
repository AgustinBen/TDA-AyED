#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

struct Usuario;

typedef struct Usuario * UsuarioPtr;

UsuarioPtr crearUsuario(char* nombre, int id);
void setCodigoLibro(UsuarioPtr usuario, int codigo);
int getCodigoLibro(UsuarioPtr usu);
void mostrarUsuario(UsuarioPtr usu);

void liberarUsuario(UsuarioPtr usuario);


#endif // USUARIO_H_INCLUDED
