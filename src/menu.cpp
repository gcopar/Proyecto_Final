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
    cout<<"Se termino";
}

void menu_alumno(){
    cout<<"Menu alumno"<<endl;
}

void menu_admin(){
    cout<<"Menu admin"<<endl;
}