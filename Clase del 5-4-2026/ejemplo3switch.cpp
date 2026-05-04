#include <iostream>
using namespace std;

int main (){

    char V;
    cout << "Ingresa la inicial de un dia de la semana \n" << endl;
    cin >> V;
    switch (V) {

        case 'L':
            cout << "Lunes\n";

            break;

        case 'M':
            cout << "Martes\n";
            
            break;

        case 'm':
            cout << "Miercoles\n";

            break;
        case 'J':
            cout << "Jueves\n";

            break;

        case 'V':
            cout << "Viernes\n";
            
            break;

        case 'S':
            cout << "Sabado\n";

        case 'D':
            cout << "Domingo\n";
            
            break;

        default:
            cout << "Datos incorrectos" << endl;

            break;
    }
    
    return 0;
}

// case "n" = n es el dato que soltara | Break = parar la condicion una vez se cumple