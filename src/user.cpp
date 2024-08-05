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

