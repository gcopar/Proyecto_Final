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
				editar("1. Nombre completo", "2. Escuela Profesional", "3. Correo personal", "4. Telefono", "5. Departamento", "6. Provincia", "7. Distrito", "8. Direccion", "0. Menu anterior", "Ingrese la opcion: ", E[i])				
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

void visualizar(string nombre, string escuela, string correo, string telefono, string departamento, string provincia, string distrito, string direccion, string menu, string opcion, estudiante E[999){
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