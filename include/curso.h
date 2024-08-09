#ifndef CURSO_H
#define CURSO_H

#include <string>

struct Curso
{
    int idC;
    std::string nombre_curso;
    int creditos;
    int ciclo;
};

//Es para declarar como un tipo de variable global y utilizarlo en otro archivo .cpp sin hacer redundancia
extern Curso curso[50];

void inicializarCurso();
void registrarCurso();
void modificarCurso();
void eliminarCurso();
void verCurso();

#endif