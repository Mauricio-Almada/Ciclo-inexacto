/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresa un cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listar� M�ximo -5.*/

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
