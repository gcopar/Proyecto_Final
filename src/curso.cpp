#include "curso.h"
#include <iostream>
using namespace std;

Curso curso[50];

//Cursos base que tendra el programa
void inicializarCurso(){
    //Matematica
    curso[0].idC = 1;
    curso[0].nombre_curso = "Matematica";
    curso[0].creditos = 3;
    curso[0].ciclo = 1;

    //Comunicacion y Redaccion
    curso[1].idC = 2;
    curso[1].nombre_curso = "Comunicacion y Redaccion";
    curso[1].creditos = 3;
    curso[1].ciclo = 1;

    //Metodologia del Trabajo Universitario
    curso[2].idC = 3;
    curso[2].nombre_curso = "Metodologia del Trabajo Universitario";
    curso[2].creditos = 2;
    curso[2].ciclo = 1;

    //Fundamentos de Programacion
    curso[3].idC = 4;
    curso[3].nombre_curso = "Fundamentos de Programacion";
    curso[3].creditos = 3;
    curso[3].ciclo = 1;

    //Quimica
    curso[4].idC = 5;
    curso[4].nombre_curso = "Quimica";
    curso[4].creditos = 3;
    curso[4].ciclo = 1;

    //Matematica Discreta I
    curso[5].idC = 6;
    curso[5].nombre_curso = "Matematica Discreta I";
    curso[5].creditos = 4;
    curso[5].ciclo = 1;

    //Programacion Grafica
    curso[6].idC = 7;
    curso[6].nombre_curso = "Programacion Grafica";
    curso[6].creditos = 4;
    curso[6].ciclo = 1;
}

void registrarCurso(){

}
void modificarCurso(){

}
void eliminarCurso(){

}
void verCurso(){
    for (int i = 0; i < 7; i++)
    {
        cout<<"CURSOS: "<<endl;
        cout<<"\t\tNombre del curso: "<<curso[i].nombre_curso<<endl;
        cout<<"\t\tCreditos: "<<curso[i].creditos<<endl;
    }
}