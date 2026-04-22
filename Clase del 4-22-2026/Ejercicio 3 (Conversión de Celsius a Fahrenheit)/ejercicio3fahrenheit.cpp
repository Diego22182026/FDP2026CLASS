#include <iostream>
using namespace std;

int main (){

    int c=32;
    float Celsius,b=1.8;
    char d='°F';

    cout << "Por favor, ingrese los grados en Celsius" << endl;
    cin >> Celsius;

    // Operaciones //
    float Fahrenheit = (Celsius * b) + c;

    // Resultados //
    cout << "Su resultado en grados Fahrenheit es: " << Fahrenheit << " " << d << endl;

    return 0;

}