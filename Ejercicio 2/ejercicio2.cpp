#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radio, areaCirculo, areaCirculo2, areaCirculo3,lado,areaCuadrado;
    int base,altura,areaTriangulo;

    cout << "Area del circulo"<<endl;
    cout << "¿Por favor podria digitar un numero para el radio? " << endl;
    cin >> radio;

    areaCirculo = 3.1416 * radio * radio;
    areaCirculo2 = 3.1416 * pow(radio, 2);

    cout << "Su area del circulo es el siguiente : " << areaCirculo << endl;
    cout << "Su area del circulo es el siguiente : " << areaCirculo2 << endl;

    cout << "Area del cuadrado "<<endl;
    cout << ""                  <<endl;
    cout << "¿Podria digitar el valor numerico para el lado del cuadrado? "<<endl;
    cin>>lado;
    areaCuadrado= pow(lado,2);
    cout << "Su area del cuadrado es : "<<areaCuadrado<<endl;

    cout << "area del triangulo"<<endl;
    cout << "¿Podria digitarme el valor numerico de la base?"<<endl;
    cin>>base;
    cout << "¿Podria digitarme el valor numerico de la altura?"<<endl;
    cin>>altura;

    areaTriangulo=(base*altura)/2;

    cout << "Su area del triangulo es : "<<areaTriangulo<<endl;
    return 0;
}