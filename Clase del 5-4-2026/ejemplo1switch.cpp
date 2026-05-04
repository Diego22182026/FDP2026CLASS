#include <iostream>
using namespace std;

int main (){

    int res, n;
    cout << "Hola, podrias ingresar un numero entero" << endl;
    cin >> n;
    res = n % 2;
    switch (res) {

        case 1:
            cout << n << " " << "es un numero impar\n";

            break;

        case 0:
            cout << n << " " << "es un numero par\n";
            
            break;

        default:
            cout << "Datos incorrectos" << endl;

            break;
    }
    
    return 0;
}

// case "n" = n es el dato que soltara | Break = parar la condicion una vez se cumple