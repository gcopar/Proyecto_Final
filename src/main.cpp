
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string USER_FILE = "users.txt";

struct User {    // Estructura para almacenar los datos del usuario
    string username;
    string password;
    string userType;
};

void registerUser() { // Función para registrar un nuevo usuario
    User newUser;

    cout << "Ingrese el nombre de usuario: ";
    cin >> newUser.username;
    cout << "Ingrese la contrasena: ";
    cin >> newUser.password;
   //cout << "Ingrese el tipo de usuario (admin/normal): ";
   // cin >> newUser.userType;

    ofstream userFile(USER_FILE, ios::app); // Abrir el archivo en modo anexado
    if (userFile.is_open()) {
        userFile << newUser.username << " " << newUser.password << " " << newUser.userType << endl;
        userFile.close();
        cout << "Registro exitoso." << endl;
    } else {
        cout << "Error al abrir el archivo de usuarios." << endl;
    }
}

bool verifyUser(const string& username, const string& password) {  // Función para verificar las credenciales del usuario
    ifstream userFile(USER_FILE);
    string fileUsername, filePassword, fileUserType;

    if (userFile.is_open()) {
        while (userFile >> fileUsername >> filePassword >> fileUserType) {
            if (fileUsername == username && filePassword == password) {
                userFile.close();
                return true;
            }
        }
        userFile.close();
    } else {
        cout << "Error al abrir el archivo de usuarios." << endl;
    }
    return false;
}

int main() {   // Función principal
    int choice;
    
    cout << "1. Registrar nuevo usuario" << endl;
    cout << "2. Iniciar sesion" << endl;
    cout << "Ingrese una opcion (1 o 2): ";
    cin >> choice;
    User lista;
    lista.username =  "juan";
    lista.password =  "123";
    
    User list;
    list.username =  "pedro";
    list.password =  "234";
    
    User lis;
    lis.username =  "arturo";
    lis.password =  "135";
    
    
    switch (choice) {
        case 1: {
            registerUser();
            break;
        }
        case 2: {
            string username, password;

            cout << "Ingrese el nombre de usuario: ";
            cin >> username;
            cout << "Ingrese la contrasena: ";
            cin >> password;
            
            if ((lista.username== username) ){
            	cout<<"\nEs correcto";
            	cout << "\nInicio de sesion exitoso." << endl;
            
              int a;
              cout<<" \n!Bienvenido Estudiante!"<<endl;
              cout<<"1.opcion1"<<endl;
              cout<<"2.opcion2"<<endl;
              cout<<"3.opcion3"<<endl;
              cin>>a;
          
              switch(a){
              	case 1:
              		cout<<1;
              		break;
              	case 2:
              	    cout<<2;
              	    break;
              	case 3:
              	    cout<<3;
              	 break;
			  
			  default:
			  	cout<<"numero incorrecto";
			  	break;
	       }
	       }
			if ((list.username== username)){
            	cout<<"\nEs correcto";
            	cout << "\nInicio de sesion exitoso.";
            	
            	int b;
              cout<<" \n!Bienvenido Docente!"<<endl;
              cout<<"1.opcion1"<<endl;
              cout<<"2.opcion2"<<endl;
              cout<<"3.opcion3"<<endl;
              cin>>b;
          
              switch(b){
              	case 1:
              		cout<<3;
              		break;
              	case 2:
              	    cout<<2;
              	    break;
              	case 3:
              	    cout<<3;
              	 break;
			  
			  default:
			  	cout<<"numero incorrecto";
			  	break;
	       }
           }
            
             if ((lis.username== username) ){
            	cout<<"\nEs correcto";
            	cout << "\nInicio de sesion exitoso." << endl;
            
			  int c;
              cout<<" \n!Bienvenido Administrador!"<<endl;
              cout<<"1.opcion"<<endl;
              cout<<"2.opcion"<<endl;
              cout<<"3.opcion"<<endl;
              cin>>c;
          
              switch(c){
              	case 1:
              		cout<<1;
              		break;
              	case 2:
              	    cout<<2;
              	    break;
              	case 3:
              	    cout<<3;
              	 break;
			  
			  default:
			  	cout<<"numero incorrecto";
			  	break;
         	}	
            }
           break;
        }
        default:
            cout << "Opción no valida." << endl;
            break;
    }
    return 0;
}
