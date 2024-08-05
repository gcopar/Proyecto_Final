//Encabezado del menu del estudiante
//Nina Estuco, William Andre
#pragma once
#include <iostream>
#include "menuestudiante.h"
using namespace std;
struct estudiante{
	string nombres;
	string escuela;
	string correo_personal;
	int telefono;
	string departamento;
	string provincia;
	string distrito;
	string direccion;
	string contrasena;
}E[999];

void menuestudiantil(string perfil, string matricula, string informacion, string menu, string opcion, estudiante E[999]);
void perfil(string visualizar, string editar, string menu, string opcion, estudiante E[999]);
void visualizar(string nombre, string escuela, string correo, string telefono, string departamento, string provincia, string distrito, string direccion, string menu, string opcion, estudiante E[999]);
void editar(string correo, string telefono, string departamento, string provincia, string distrito, string direccion, string contrasena, string menu, string opcion, estudiante E[999]);

