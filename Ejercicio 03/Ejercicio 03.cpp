/*Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo y la posición dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo: 35 - Posición: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo: 55 - Posición: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listará Máximo: -5 - Posición: 1.*/

#include <iostream>
using namespace std;

int main(){

    int numero, numeroMax, posicionMax;
    int posicion = 1; // utilizo posicion en 1 como contador para averiguar la posicion. Actualmente en posicion 1

    cout << "\tIngrese numeros hasta ingresar un cero: " << endl;
    cin >> numero;

    numeroMax = numero;
    posicionMax = posicion;

    while(numero != 0){
        if (numero > numeroMax){
            numeroMax = numero;
            posicionMax = posicion;
        }
        posicion++;
        cin >> numero;
    }
    cout << "\nEl numero mayor es: " << numeroMax << " en posicion: " << posicionMax << endl;


    return 0;
}
