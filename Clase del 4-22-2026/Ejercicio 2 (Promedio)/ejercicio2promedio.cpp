#include <iostream>
using namespace std;

int main (){

    float a,b,c;
    int d=3;

    cout << "Por favor, ingrese el primer numero: " << endl;
    cin >> a;

    cout << "Por favor, ingrese el segundo numero: " << endl ;
    cin >> b;

    cout << "Por favor, ingrese el tercer numero: " << endl ;
    cin >> c;

    // Operaciones //

    float suma = a + b + c;
    int cantidaddedatos = d;
    float promedio = suma / cantidaddedatos;

    // Resultados //

    cout << "Su resultado es: " << promedio <<  endl;

    return 0;

}