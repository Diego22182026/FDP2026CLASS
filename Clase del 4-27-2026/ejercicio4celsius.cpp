#include <iostream>
using namespace std;

int main (){

    double celsius;

    // Solicita al usuario ingresar los datos //

    cout << "Welcome!" << endl << "Please, insert the temperature of the water in Celsius " << endl ;
    cin >> celsius;

    // Si la temperatura es menor a 15 grados, el agua esta helada//

    if (celsius <=15){

        cout << "The water is cold" << endl;
    }   
    // Si la temperatura es mayor a 15 grados pero menor que 25 grados, el agua esta tibia//
        else if (celsius >=15 && celsius <25)
        {

            cout << "The water is lukewarm" << endl;
        
        }
    // Si la temperatura es mayor a 25 grados,m el agua esta caliente //
        else if (celsius >=25) {

        cout << "The water is hot" << endl;
        } 
        else {

            cout << "I don't know the data you are giving me" << endl;
        }
    
    

    return 0;
}