//Menu del Estudiante: Funciones
//Nina Estuco, William Andre
#include "menuestudiante.h"

void menuestudiantil(string perfil, string matricula, string informacion, string menu, string opcion, estudiante E[999]){
    int n;
    cout<<perfil<<endl;
    cout<<matricula<<endl;
    cout<<informacion<<endl;
    cout<<menu<<endl;
    cout<<opcion; cin>>n;
    do{
    	switch(n){
    		case 1:
    			perfil("1. Visualizar", "2. Editar", "3. Menu anterior", "Ingrese una opcion: ", E[i]);
    			break;
    		case 2:
    			matricula();
    			break;
    		case 3:
    			informacion();
    			break;
    		case 4:
    			//funcion menu anterior
    			break;
    		default:
    			cout<<"Opcion no valida, intentelo de nuevo.";
    			break;
		}
	}while(n!=0);
}

void perfil(string visualizar, string editar, string menu, string opcion, estudiante E[999]){
	int m;
	cout<<"PERFIL"<<endl;
	cout<<visualizar<<endl;
	cout<<editar<<endl;
	cout<<menu<<endl;
	cout<<opcion; cin>>m;
	do{
		switch(m){
			case 1:
				visualizar("Nombre completo: ", "Escuela Profesional: ", "Correo personal: ", "Telefono: ", "Departamento: ", "Provincia: ", "Distrito: ", "Direccion: ", "0. Menu anterior", "Ingrese la opcion: ", E[i]);
				break;
			case 2:
				editar("1. Nombre completo", "2. Escuela Profesional", "3. Correo personal", "4. Telefono", "5. Departamento", "6. Provincia", "7. Distrito", "8. Direccion", "0. Menu anterior", "Ingrese la opcion: ", E[i]);				
				break;
			case 0:
				menuestudiantil("1. Perfil", "2. Matricula en linea", "3. Informacion academica", "4. Menu anterior", "Ingrese una opcion: ", E[i]);
				break;
			default:
    			cout<<"Opcion no valida, intentelo de nuevo.";
    			break;
		}
	}while(m!=0);
}

void visualizar(string nombre, string escuela, string correo, string telefono, string departamento, string provincia, string distrito, string direccion, string menu, string opcion, estudiante E[999]){
	int n;
	cout<<"VISUALIZAR"<<endl;
	cout<<nombre<<E[i].nombres<<endl;
	cout<<escuela<<E[i].escuela<<endl;
	cout<<correo<<E[i].correo_personal<<endl;
	cout<<telefono<<E[i].telefono<<endl;
	cout<<departamento<<E[i].departamento<<endl;
	cout<<provincia<<E[i].provincia<<endl;
	cout<<distrito<<E[i].distrito<<endl;
	cout<<direccion<<E[i].direccion<<endl;
	cout<<menu<<endl; 
	cout<<opcion; cin>>n;
	do{
		switch(n){
			case 0:
				perfil("1. Visualizar", "2. Editar", "3. Menu anterior", "Ingrese una opcion: ", E[i]);
				break;
			default:
    			cout<<"Opcion no valida, intentelo de nuevo.";
    			break;
		}
	}while(n!=0);
}

void editar(string correo, string telefono, string departamento, string provincia, string distrito, string direccion, string contrasena, string menu, string opcion, estudiante E[999]){
	int n;
    int i=0;
	do{
		cout<<"EDITAR"<<endl;
		cout<<correo<<endl;
		cout<<telefono<<endl;
		cout<<departamento<<endl;
		cout<<provincia<<endl;
		cout<<distrito<<endl;
		cout<<direccion<<endl;
		cout<<contrasena<<endl;
		cout<<menu<<endl; 
		cout<<opcion; cin>>n;
		switch(n){
			case 1:
				cout<<"Ingrese nuevo correo personal: "; cin>>E[i].correo_personal; cout<<endl;
				cout<<"Cambios guardados"<<endl;
				break;
			case 2:
				cout<<"Ingrese nuevo # telefono: "; cin>>E[i].telefono; cout<<endl;
				cout<<"Cambios guardados"<<endl;
				break;
			case 3:
				cout<<"Ingrese nuevo departamento: "; cin>>E[i].departamento; cout<<endl;
				cout<<"Cambios guardados"<<endl;
				break;
			case 4:
				cout<<"Ingrese nueva provincia: "; cin>>E[i].provincia; cout<<endl;
				cout<<"Cambios guardados"<<endl;
				break;
			case 5:
				cout<<"Ingrese nuevo distrito: "; cin>>E[i].distrito; cout<<endl;
				cout<<"Cambios guardados"<<endl;
				break;
			case 6:
				cout<<"Ingrese nueva direccion: "; cin>>E[i].direccion; cout<<endl;
				cout<<"Cambios guardados"<<endl;
				break;
			case 7:
				cout<<"Ingrese nueva contrasena: "; cin>>E[i].contrasena; cout<<endl;
				cout<<"Cambios guardados"<<endl;
				break;
			case 0:
				perfil("1. Visualizar", "2. Editar", "3. Menu anterior", "Ingrese una opcion: ", E[i]);
				break;
			default:
    			cout<<"Opcion no valida, intentelo de nuevo.";
    			break;
		}
	}while(n!=0);
}