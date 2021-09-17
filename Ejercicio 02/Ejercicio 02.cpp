/*Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listará Máximo -5.*/

#include <iostream>
using namespace std;

int main(){

    int numero, numeroMaximo;

    cout << "Ingresar numeros hasta que se ingrese un 0: " << endl;

    cin >> numero;

    numeroMaximo = numero;

    while (numero != 0){
        if (numero > numeroMaximo){
           numeroMaximo = numero;
        }

        cin >> numero;
    }

    cout << "\nNumero maximo: " << numeroMaximo << endl;



    return 0;
}
