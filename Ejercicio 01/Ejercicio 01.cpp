/*Hacer un programa para ingresar una lista de n�meros que finaliza cuando se
ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.*/

#include <iostream>
using namespace std;

int main(){

    int numero, contPos = 0, contNeg = 0;

    cout << "Ingresar numeros hasta que se ingrese un 0: ";
    cin >> numero;

    while (numero != 0){
        if (numero < 0){
            contNeg++;
        }
        else{
            if (numero > 0){
                contPos++;
            }
        }
        cin >> numero;
    }
    cout << "\nNumeros positivos: " << contPos << endl;
    cout << "\nNumeros negativo: " << contNeg << endl;



    return 0;
}
