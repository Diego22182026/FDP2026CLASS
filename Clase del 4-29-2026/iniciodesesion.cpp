#include <iostream>
#include <string>
using namespace std;

int main() {

    // Definiendo variables

    int intentos = 3;
    string user= "Diego";
    int contra =2218;

    // Se le solicita al usuario insertar las credenciales

    cout << "Ingrese su usuario y contrasena " << endl;
    cin >> user >> contra;

    if (user == "Diego" && contra == 2218) {
        cout << "Bienvenido usuario " << user << endl;
    }

    else {

        cout << "Vuelve a intentarlo";
        int contador = intentos - 1;
        cout << "Le restan " << contador <<" intentos" << endl;
            
        cout << "Ingrese su usuario y contrasena ";
        cin >> user >> contra;
             if (user == "Diego" && contra == 2218) {
        cout << "Bienvenido usario " << user << endl;
    }
        else {
        cout << "Vuelve a intentarlo " << endl;
        int contador = intentos -2;
        cout << "Le restan " << contador <<" intentos" << endl;
    
        cin >> user >> contra;
            if (user == "Diego" && contra == 2218) {
        cout << "Bienvenido usario " << user << endl;
    }
        else {
        cout << "Vuelve a intentarlo " << endl;
        int contador = intentos -3;
        cout << "Le restan " << contador <<" intentos" << endl;
        
    }    
    
    }    
}
    return 0;
}
// Resulta dificil hacerlo con if, sin embargo con futuros temas se puede hacer de manera más eficiente