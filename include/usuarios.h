#ifndef USUARIOS_H
#define USUARIOS_H

#include "curso.h"
#include "nota.h"
#include "asistencia.h"

#include <string>

struct Usuario
{
    int id;
    std::string nombres;
    std::string apellidos;
    int DNI;
    std::string correo;
    int numcelular;
    std::string user;
    std::string contrasena;
    int tipo_usuario;
    bool estado_user;
};

struct Alumno
{
    int idA;
    Usuario usuario;
    std::string matricula;
    Curso cursos[8];
    Nota notas[8];
    Asistencia asistencias[18];
};

struct Docente
{
    int idD;
    Usuario usuario;
};

struct Admin
{
    int idAd;
    Usuario usuario;
};

//Es para declarar como un tipo de variable global y utilizarlo en otro archivo .cpp sin hacer redundancia
extern Alumno alumno[20];
extern Admin administrador[10];

void inicializarUsuario();
void registrarUsuarios();
void registrarNotas(int id, int posicion);
void verUsuarios();
void inicializarNota(); //Solo se creeo para testear
void inicializarAsistencia();

#endif