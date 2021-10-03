/*El teatro Lara Rex presentará la obra "Ojo que se viene el primer parcial" en una
única jornada. El mismo cuenta con 1200 butacas a un costo de $5000. Se pide
un programa para poder ingresar todos los tickets vendidos para esta
presentación. Por cada venta se registró:
- Número de venta
- Cantidad de butacas
La venta de tickets se finaliza con un número de venta igual a cero o bien
cuando no se dispongan de más butacas para vender. Se pide calcular e
informar:
    A- El total recaudado.
    B- La cantidad de butacas que quedaron sin vender.*/

#include <iostream>
using namespace std;

int main(){

    const int BUTACAS = 1200, UNIDAD = 5000;
    int nroVenta, cantButacas;

    // A
    int acuButacas = 0, total;

    // B
    int resto;


    cout << "     ############" << endl;
    cout << "     # Lara REX #" << endl;
    cout << "     ############" << endl;
    cout << "  ------------------" << endl;
    cout << "  Registro de venta" << endl;
    cout << "  ------------------" << endl << endl;
    cout << "Nro de venta: ";
    cin >> nroVenta;

    while(nroVenta != 0 || acuButacas != 1200 ){
        cout << "Cantidad de butacas: ";
        cin >> cantButacas;
        acuButacas+=cantButacas;

        cout << endl;

        cout << "Nro de venta: ";
        cin >> nroVenta;
    }

    total = acuButacas * UNIDAD;
    resto = BUTACAS - acuButacas;

    cout << "\nPunto A" << endl;
    cout << "El total recaudado es de: $" << total << endl;
    cout << "\nPunto B" << endl;
    cout << "Quedaron sin vender: " << resto << " butacas" << endl;



    return 0;
}
