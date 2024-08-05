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
