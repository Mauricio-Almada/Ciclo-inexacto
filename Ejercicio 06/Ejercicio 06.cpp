/*Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
- La cantidad de ternas de números negativos ingresados de manera
consecutiva.
Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2*/

#include <iostream>
using namespace std;

int main(){

    int numero, numeroPar, numeroNega;
    int contPar = 0, contTerna = 0, contNega = 0;


    do{
        cout << "Ingresar numeros: ";
        cin >> numero;

        if (numero%2 == 0){
            numeroPar = numero;
            contPar++;
        }
        if (numero < 0){
            contNega++;
            if (contNega == 3){
                contTerna++;

            }
        }
        else{
            contNega = 0;
        }




    }while(contPar != 5);

    cout << "\nTernas: " << contTerna << endl;





    return 0;
}
