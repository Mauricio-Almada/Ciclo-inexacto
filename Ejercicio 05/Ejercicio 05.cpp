/*Hacer un programa que permita ingresar una lista de números positivos,
negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor
a 10. Calcular e informar:
- La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7*/

#include <iostream>
using namespace std;

int main(){

    int numero, numeroMaximo = 0, numeroMinimo = 0, diferencia, contNumeros = 0;
    bool bandNumero = false;

    cout << "Ingresar numeros hasta que la diferencia entre el maximo y el minimo sea mayor a 10: " << endl;
    cin >> numero;

    while (diferencia < 10){
        contNumeros++;

        if (bandNumero == false){
            numeroMinimo = numero;
            numeroMaximo = numero;
            bandNumero = true;
        }
        else{
            if (numero > numeroMaximo){
                numeroMaximo = numero;
            }
            else{
                if (numero < numeroMinimo){
                    numeroMinimo = numero;
                }
            }
        }

        diferencia = numeroMaximo - numeroMinimo;
        if (diferencia < 10){
            cin >> numero;
        }

    }
    cout << "\nCantidad de numeros: " << contNumeros << endl;


    return 0;
}
