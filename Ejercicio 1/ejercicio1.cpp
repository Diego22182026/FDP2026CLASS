#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Operaciones aritméticas
    int suma = a + b;
    int diferencia = a - b;
    int producto = a * b;
    int division = a / b;
    int division2 = a % b;

    // Mostrar resultados
    cout << "Suma: " << suma << endl;
    cout << "Diferencia: " << diferencia << endl; 
    cout << "Producto: " << producto << endl;
    cout << "Division entera: " << division << endl;
    cout << "Residuo de la division " << division2 << endl;
    
    return 0;
}