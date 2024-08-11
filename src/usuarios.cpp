#include "nota.h"
#include "usuarios.h"
#include "curso.h"
#include "asistencia.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
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
    if (cantuser == 0)
    {
        cout<<"---------- LISTA DE ALUMNOS ----------"<<endl;
        cout<<"\nNo hay alumnos registrados.\n"<<endl;
        system("pause");
        system("cls");
    }else{
        cout<<"---------- LISTA DE ALUMNOS ----------"<<endl;
        for (int i = 0; i < cantuser; i++)
        {
            cout<<"Alumno Nº "<<i+1<<": "<<endl;
            cout<<"\tNombres y Apellidos: "<<alumno[i].usuario.nombres<<" "<<alumno[i].usuario.apellidos<<endl;
            cout<<"\tCodigo de matricula: "<<alumno[i].matricula<<"\n"<<endl;
        }
        system("pause");
        system("cls");
    }
}

void verUsuariosDetalle(){
    double Parcial_1, Parcial_2;
    int PromFinal, opcion_userDetalle, control_userDetalle, control_buscarAlumno, b;
    char userDetalle_matricula[40], userDetalle_usuario[40], userDetalle_nombres[40], nombreCompleto[80];

    do
    {
        control_userDetalle = 1;
        cout<<"---------- BUSCAR ALUMNO ----------"<<endl;
        cout<<"1. Buscar por codigo de matricula."<<endl;
        cout<<"2. Buscar por usuario."<<endl;
        cout<<"3. Buscar por nombre y apellido completo."<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingresa la opcion: "; cin>>opcion_userDetalle;
        system("cls");
        cin.ignore(1000, '\n');
        switch (opcion_userDetalle)
        {
        case 1:
            control_buscarAlumno = 0;
            b = 0;
            cout<<"Ingresa el codigo de matricula: "; cin.getline(userDetalle_matricula, 40);
            system("cls");
            do
            {
                if (strcmp(userDetalle_matricula, alumno[b].matricula.c_str()) == 0)
                {
                    control_buscarAlumno = 1;
                    cout<<"---------- RESULTADO DE BUSQUEDA ----------"<<endl;
                    cout<<"\n\tNombres: "<<alumno[b].usuario.nombres<<endl;
                    cout<<"\tApellidos: "<<alumno[b].usuario.apellidos<<endl;
                    cout<<"\tDNI: "<<alumno[b].usuario.DNI<<endl;
                    cout<<"\tCorreo: "<<alumno[b].usuario.correo<<endl;
                    cout<<"\tNúmero de celular: "<<alumno[b].usuario.numcelular<<endl;
                    cout<<"\tCodigo de matricula: "<<alumno[b].matricula<<"\n"<<endl;
                    system("pause");
                    system("cls");
                }else{
                    b++;
                }
            } while (control_buscarAlumno != 1 and b < cantuser);

            if (b == cantuser)
            {
                cout<<"No se pudo encontrar nada. \n"<<endl;
                system("pause");
                system("cls");
            }
            break;
        case 2:
            control_buscarAlumno = 0;
            b = 0;
            cout<<"Ingresa el nombre de usuario: "; cin.getline(userDetalle_usuario, 40);
            system("cls");
            do
            {
                if (strcmp(userDetalle_usuario, alumno[b].usuario.user.c_str()) == 0)
                {
                    control_buscarAlumno = 1;
                    cout<<"---------- RESULTADO DE BUSQUEDA ----------"<<endl;
                    cout<<"\n\tNombres: "<<alumno[b].usuario.nombres<<endl;
                    cout<<"\tApellidos: "<<alumno[b].usuario.apellidos<<endl;
                    cout<<"\tDNI: "<<alumno[b].usuario.DNI<<endl;
                    cout<<"\tCorreo: "<<alumno[b].usuario.correo<<endl;
                    cout<<"\tNúmero de celular: "<<alumno[b].usuario.numcelular<<endl;
                    cout<<"\tCodigo de matricula: "<<alumno[b].matricula<<"\n"<<endl;
                    system("pause");
                    system("cls");
                }else{
                    b++;
                }
            } while (control_buscarAlumno != 1 and b < cantuser);

            if (b == cantuser)
            {
                cout<<"No se pudo encontrar nada. \n"<<endl;
                system("pause");
                system("cls");
            }
            break;
        case 3:
            control_buscarAlumno = 0;
            b = 0;
            cout<<"Ingresa el nombre y apellido completo: "; cin.getline(userDetalle_nombres, 40);
            system("cls");
            do
            {
                const char* nombres = alumno[b].usuario.nombres.c_str();
                const char* apellidos = alumno[b].usuario.apellidos.c_str();

                strcpy(nombreCompleto, nombres);
                strcat(nombreCompleto, " ");
                strcat(nombreCompleto, apellidos);
                if (strcmp(userDetalle_nombres, nombreCompleto) == 0)
                {
                    control_buscarAlumno = 1;
                    cout<<"---------- RESULTADO DE BUSQUEDA ----------"<<endl;
                    cout<<"\n\tNombres: "<<alumno[b].usuario.nombres<<endl;
                    cout<<"\tApellidos: "<<alumno[b].usuario.apellidos<<endl;
                    cout<<"\tDNI: "<<alumno[b].usuario.DNI<<endl;
                    cout<<"\tCorreo: "<<alumno[b].usuario.correo<<endl;
                    cout<<"\tNúmero de celular: "<<alumno[b].usuario.numcelular<<endl;
                    cout<<"\tCodigo de matricula: "<<alumno[b].matricula<<"\n"<<endl;
                    system("pause");
                    system("cls");
                }else{
                    b++;
                }
            } while (control_buscarAlumno != 1 and b < cantuser);

            if (b == cantuser)
            {
                cout<<"No se pudo encontrar nada. \n"<<endl;
                system("pause");
                system("cls");
            }
            break;
        case 4:
            control_userDetalle = 0;
            system("cls");
            break;
        default:
            cout<<"Ingrese una de las opciones."<<"\n"<<endl;
            system("pause");
            system("cls");
            break;
        }
    } while (control_userDetalle == 1);
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