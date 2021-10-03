/*El festival Larapalooza, el mejor festival musical del mundo, brindará una serie
de conciertos distribuidos en tres jornadas distintas. Se desea un programa que
registre los artistas que participarán. Por cada artista se registró:
- Número de artista (entero)
- Integrantes (entero)
- Jornada (1, 2 o 3)
- Duración del show en minutos (entero)
La información no se encuentra ordenada bajo ningún criterio. La carga de
datos se finaliza con un número de artista igual a cero. Calcular e informar:
    A- El número de artista que realice el show más largo de la jornada 1.
    B- La cantidad de solistas (artistas de 1 integrante) que participaron en
        cada una de las jornadas. (se muestran tres resultados).
    C- La jornada más extensa (en minutos).
    D- Duración promedio de show por artista (se muestra un resultado).*/

#include <iostream>
using namespace std;

int main(){

    int nroArt, integrantes, jornada, duracionMints;

    // A
    int showLargo = 0, artShowlargo;
    bool bandShow = false;

    // B
    int solJornada1 = 0, solJornada2 = 0, solJornada3 = 0;

    // C
    int acuJornada1 = 0, acuJornada2 = 0, acuJornada3 = 0, maxJornada, maxDuracion;

    // D
    int promedio, contArtista = 0, acuArtista = 0;

    cout << "\t######################" << endl;
    cout << "\t#Festival LARAPALOOZA#" << endl;
    cout << "\t######################" << endl << endl;

    cout << "Nro de artista: ";
    cin >> nroArt;

    while(nroArt != 0){
        contArtista++;          // contador para punto D
        cout << "Integrantes: ";
        cin >> integrantes;
        cout << "Jornada (1, 2 o 3): ";
        cin >> jornada;
        cout << "Duracion del show (en minutos): ";
        cin >> duracionMints;
        acuArtista += duracionMints;        // acumulador para punto D
        cout << endl;

        // A
        if (jornada == 1){
            if (bandShow == false){
                showLargo = duracionMints;
                artShowlargo = nroArt;
                bandShow = true;
            }
            else{
                if (duracionMints > showLargo){
                    duracionMints = showLargo;
                    artShowlargo = nroArt;
                }
            }
        }

        // B
        if (jornada == 1 && integrantes == 1){
            solJornada1++;
        }
        if (jornada == 2 && integrantes == 1){
            solJornada2++;
        }
        if (jornada == 3 && integrantes == 1){
            solJornada3++;
        }

        // C
        if (jornada == 1){
            acuJornada1 += duracionMints;
        }
        if (jornada == 2){
            acuJornada2 += duracionMints;
        }
        if (jornada == 3){
            acuJornada3 += duracionMints;
        }



        cout << "Nro de artista: ";
        cin >> nroArt;
    }

    // C
    if (acuJornada1 > acuJornada2 && acuJornada1 > acuJornada3){
        maxDuracion = acuJornada1;
    }
    else{
        if (acuJornada2 > acuJornada1 && acuJornada2 > acuJornada3){
            maxDuracion = acuJornada2;
        }
        else{
            if (acuJornada3 > acuJornada1 && acuJornada3 > acuJornada2){
                maxDuracion = acuJornada3;
            }
        }
    }

    // D
    promedio = (float)acuArtista / contArtista;



    cout << "\nPunto A" << endl;
    cout << "El nro de art: " << artShowlargo << " hizo su show mas largo de: " << showLargo << endl;
    cout << "\nPunto B" << endl;
    cout << "En la jornada 1 hubieron " << solJornada1 << " integrantes solistas" << endl;
    cout << "En la jornada 2 hubieron " << solJornada2 << " integrantes solistas" << endl;
    cout << "En la jornada 3 hubieron " << solJornada3 << " integrantes solistas" << endl;
    cout << "\nPunto C" << endl;
    cout << "La jornada " << maxJornada << " fue la mas larga con " << maxDuracion << " minutos" << endl;
    cout << "\nPunto D" << endl;
    cout << "La duracion promedio es de: " << promedio << " minutos" << endl;





    return 0;
}
