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
int cantuser = 0;

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
    cout<<"\tNombres: "; getline(cin,alumno[cantuser].usuario.nombres);
    cout<<"\tApellidos: "; getline(cin,alumno[cantuser].usuario.apellidos);
    cout<<"\tDNI: "; cin>>alumno[cantuser].usuario.DNI;
    cout<<"\tCorreo: "; cin>>alumno[cantuser].usuario.correo;
    cout<<"\tNúmero de celular: "; cin>>alumno[cantuser].usuario.numcelular;
    cout<<"\tNombre de usuario: "; cin>>alumno[cantuser].usuario.user;
    cout<<"\tContraseña: "; cin>>alumno[cantuser].usuario.contrasena;
    cout<<"\tCodigo de matricula: "; cin>>alumno[cantuser].matricula;
    cantuser++;
}

void registrarNotas(int id, int posicion){
    int opcion_parcial, control_opcion;

    do
    {
        cout<<"------------- REGISTRAR NOTAS -------------";
        cout<<"Nombre del alumno: "<<alumno[id-1].usuario.nombres<<" "<<alumno[id-1].usuario.apellidos;
        cout<<"Codigo de matricula: "<<alumno[id-1].matricula;
        cout<<"Nombre del curso"<<alumno[id-1].cursos[posicion].nombre_curso<<endl;

        cout<<"\n\nSeleccione a que parcial quiere ingresar las notas: "<<endl;
        cout<<"\t1. Primer Parcial"<<endl;
        cout<<"\t2. Segundo Parcial"<<endl;
        cout<<"Ingrese la opcion: "; cin>>opcion_parcial;
        
        switch (opcion_parcial)
        {
        case 1:
            cout<<"\n\n\tPRIMER PARCIAL: "<<endl;
            cout<<"\t\tEvaluacion de Conocimiento: "; cin>>alumno[id-1].notas[posicion].primer_parcial.EC;
            cout<<"\t\tPeso de EC: "; cin>>alumno[id-1].notas[posicion].primer_parcial.porc_EC;
            cout<<"\t\tEvaluacion de Desempeño: "; cin>>alumno[id-1].notas[posicion].primer_parcial.ED;
            cout<<"\t\tPeso de EC: "; cin>>alumno[id-1].notas[posicion].primer_parcial.porc_EC;
            cout<<"\t\tEvaluacion de Producto: "; cin>>alumno[id-1].notas[posicion].primer_parcial.EP;
            cout<<"\t\tPeso de EC: "; cin>>alumno[id-1].notas[posicion].primer_parcial.porc_EC;
            break;
        case 2:
            cout<<"\n\n\tSEGUNDO PARCIAL: "<<endl;
            cout<<"\t\tEvaluacion de Conocimiento: "; cin>>alumno[id-1].notas[posicion].segundo_parcial.EC;
            cout<<"\t\tPeso de EC: "; cin>>alumno[id-1].notas[posicion].segundo_parcial.porc_EC;
            cout<<"\t\tEvaluacion de Desempeño: "; cin>>alumno[id-1].notas[posicion].segundo_parcial.ED;
            cout<<"\t\tPeso de EC: "; cin>>alumno[id-1].notas[posicion].segundo_parcial.porc_EC;
            cout<<"\t\tEvaluacion de Producto: "; cin>>alumno[id-1].notas[posicion].segundo_parcial.EP;
            cout<<"\t\tPeso de EC: "; cin>>alumno[id-1].notas[posicion].segundo_parcial.porc_EC;
            break;
        default:
            break;
        }
        system("cls");
    } while (control_opcion);
    
}

void verUsuarios(){
    double Parcial_1, Parcial_2;
    int PromFinal;
    if (cantuser == 0)
    {
        cout<<"---------- LLISTA DE ALUMNOS ----------"<<endl;
        cout<<"\nNo hay alumnos registrados.\n"<<endl;
        system("pause");
        system("cls");
    }else{
        for (int i = 0; i < cantuser; i++)
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