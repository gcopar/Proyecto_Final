#include "menu.h"
#include "usuarios.h"
#include "curso.h"

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;

void menu_login(){
    char usuario_is[40], contrasena_is[40];
    int controlador = 0, intento, buscador, b;
    inicializarUsuario();
    
    do
    {
        buscador = 0;
        cout<<"------------- INICIAR SESION --------------"<<endl;
        cout<<"\tIngresa su usuario: "; cin.getline(usuario_is, 40);
        cout<<"\tIngresa su contraseña: "; cin.getline(contrasena_is, 40);

        while (buscador == 0)
        {
        b = 0;
        if (strcmp(usuario_is, administrador[b].usuario.user.c_str()) == 0){
            if (strcmp(contrasena_is, administrador[b].usuario.contrasena.c_str()) == 0){
                cout<<"Bienvenido."<<endl;
                system("pause");
                system("cls");
                buscador = 1;
                controlador =1;
                menu_admin();

            }else{
                intento = 1;
                cout<<"La contraseña es incorrecta"<<endl;
                system("pause");
                system("cls");
                do
                {
                    cout<<"\tIngresa su contraseña: "; cin.getline(contrasena_is, 40);
                    if (strcmp(contrasena_is, administrador[0].usuario.contrasena.c_str()) == 0){
                        cout<<"Bienvenido."<<endl;
                        system("pause");
                        system("cls");
                        buscador = 1;
                        controlador =1;
                        intento = 3;
                        menu_admin();
                    }else{
                        intento++;
                        system("cls");
                    }
                } while (intento < 3);
                if (intento >= 3 and buscador == 0)
                {
                    cout<<"Realizaste los 3 intentos maximos permitidos. Se volvera a INICIO DE SESION"<<endl;
                    system("pause");
                    system("cls");
                    buscador = 1;
                }
            }
        }else{
            cout<<"El usuario no existe."<<endl;
            system("pause");
            system("cls");
            
            if (b<20)
            {
                buscador = 1;
            }
        }
        b++;

        }

    } while (controlador == 0);
}

void menu_alumno(){
    cout<<"Menu alumno"<<endl;
}

void menu_admin(){
    int opcion_adm, control_adm = 0, totaluser;

    do
    {
        cout<<"------------- MENU ADMIN -------------"<<endl;
        cout<<"1. Agregar usuario"<<endl;
        cout<<"2. Ver usuario"<<endl;
        cout<<"Ingresa una opcion: "; cin>>opcion_adm;
        cin.ignore(1000, '\n');
        switch (opcion_adm)
        {
        case 1:
            registrarUsuarios();
            break;
    
        case 2:
            inicializarCurso();
            inicializarNota();
            inicializarAsistencia();
            verUsuarios();
            break;
        default:
            break;
            control_adm = 1;
        }
    } while (control_adm == 0);
    cout<<"Se termino";
}