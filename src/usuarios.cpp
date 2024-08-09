#include "nota.h"
#include "usuarios.h"
#include "curso.h"
#include "asistencia.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Alumno alumno[20]; //Ya declare el array con la estructura Alumno
Admin administrador[10]; //Ya declare el array con la estructura Admin

void inicializarUsuario(){
    //Guardamos los datos del primer usuario y administrador
    administrador[0].idAd = 1;
    administrador[0].usuario.id = 1;
    administrador[0].usuario.nombres = "Juan Fernando";
    administrador[0].usuario.nombres = "Copa Romero";
    administrador[0].usuario.DNI = 76458421;
    administrador[0].usuario.correo = "jucopr@unjbg.edu.pe";
    administrador[0].usuario.numcelular = 952034546;
    administrador[0].usuario.user = "jucopr";
    administrador[0].usuario.contrasena = "123ABc";
    administrador[0].usuario.tipo_usuario = 3;
    administrador[0].usuario.estado_user = 1;
}

void registrarUsuarios(){
    cout<<"Ingrese los datos del usuario: "<<endl;
    cout<<"Nombres: "; getline(cin,alumno[0].usuario.nombres);
    cout<<"Apellidos: "; getline(cin,alumno[0].usuario.apellidos);
    cout<<"DNI: "; cin>>alumno[0].usuario.DNI;
    cout<<"Correo: "; cin>>alumno[0].usuario.correo;
    cout<<"Número de celular: "; cin>>alumno[0].usuario.numcelular;
    cout<<"Nombre de usuario: "; cin>>alumno[0].usuario.user;
    cout<<"Contraseña: "; cin>>alumno[0].usuario.contrasena;
    cout<<"Codigo de matricula: "; cin>>alumno[0].matricula;
}

void verUsuarios(){
    double Parcial_1, Parcial_2;
    int PromFinal;

    for (int i = 0; i < 2; i++)
    {
        cout<<i+1<<" persona: "<<endl;
        cout<<"\tNombres: "<<alumno[i].usuario.nombres<<endl;
        cout<<"\tApellidos: "<<alumno[i].usuario.apellidos<<endl;
        cout<<"\tDNI: "<<alumno[i].usuario.DNI<<endl;
        cout<<"\tCorreo: "<<alumno[i].usuario.correo<<endl;
        cout<<"\tNúmero de celular: "<<alumno[i].usuario.numcelular<<endl;
        cout<<"\tNombre de usuario: "<<alumno[i].usuario.user<<endl;
        cout<<"\tContraseña: "<<alumno[i].usuario.contrasena<<endl;
        cout<<"\tCodigo de matricula: "<<alumno[i].matricula<<endl;
        cout<<"\tCursos: "<<endl;
        
        for (int j = 0; j < 8; j++)
        {
            alumno[i].cursos[j].nombre_curso = curso[j].nombre_curso;
            Parcial_1 = calcularParcial1(i, j);
            Parcial_2 = calcularParcial2(i, j);
            PromFinal = calcularNotaFinal(Parcial_1, Parcial_2);

            cout<<"\t\tNombre del curso: "<<alumno[i].cursos[j].nombre_curso<<endl;
            cout<<fixed<<"\t\tNota del I Parcial del curso: "<<setprecision(2)<<Parcial_1<<endl;
            cout<<fixed<<"\t\tNota del II Parcial del curso: "<<setprecision(2)<<Parcial_2<<endl;
            cout<<"\t\tNota Final del curso: "<<PromFinal<<endl;
        }

        cout<<"\tAsistencias: "<<endl;

        for (int j = 0; j < 2; j++)
        {
            cout<<"\t\tSemana "<<alumno[i].asistencias[j].semama<<endl;
            cout<<"\t\tClase "<<j+1<<": "<<alumno[i].asistencias[j].clase[0]<<endl;
            cout<<"\t\tClase "<<j+2<<": "<<alumno[i].asistencias[j].clase[1]<<endl;
        }
        
    }
}

//Solo se creo para testear
void inicializarNota(){
    alumno[0].notas[0].primer_parcial.EC = 16;
    alumno[0].notas[0].primer_parcial.porc_EC = 0.4;
    alumno[0].notas[0].primer_parcial.ED = 10;
    alumno[0].notas[0].primer_parcial.porc_ED = 0.3;
    alumno[0].notas[0].primer_parcial.EP = 13;
    alumno[0].notas[0].primer_parcial.porc_EP = 0.3;
}

//Solo se creo para testear
void inicializarAsistencia(){
    alumno[0].asistencias[0].semama = 1;
    alumno[0].asistencias[0].clase[0] = 1;
    alumno[0].asistencias[0].clase[1] = 1;
    alumno[0].asistencias[1].semama = 2;
    alumno[0].asistencias[1].clase[0] = 1;
    alumno[0].asistencias[1].clase[1] = 1;
}