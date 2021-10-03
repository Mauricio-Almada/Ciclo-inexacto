/*Se dispone de la información de los exámenes rendidos por algunos
estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
- Legajo del estudiante (entero)
- Código de materia (entero)
- Nota (float)
La finalización de la carga de datos se indica con un legajo de estudiante mayor
a 30000. Calcular e informar:
    A- La nota promedio entre todos los estudiantes.
    B- El legajo del estudiante con menor nota.
    C- La cantidad de exámenes rendidos para la materia 10.
    D- El porcentaje de aprobados y no aprobados.
NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.*/

#include <iostream>
using namespace std;

int main(){


    int legajo, codMateria;
    float nota;

    // A
    int contEst = 0, acuNota = 0, promedio;

    // B
    int notaMin = 0, legajoMin;
    bool bandMin = false;

    // C
    int contExamen = 0;

    // D
    int apro = 0, desap = 0;
    float porcAp, porcDes;

    cout << "\n---INGRESAR DATOS DE ESTUDIANTE---" << endl;

    cout << "Legajo: ";
    cin >> legajo;

    while (legajo < 30000){
        // A
        contEst++;
        cout << "Cod. Materia: ";
        cin >> codMateria;
        cout << "Nota: ";
        cin >> nota;
        acuNota += nota;

        // B
        if (bandMin == false){
            notaMin = nota;
            legajoMin = legajo;
            bandMin = true;
        }
        else{
            if (nota < notaMin){
                notaMin = nota;
                legajoMin = legajo;
            }
        }

        // C
        if (codMateria == 10){
            contExamen++;
        }

        // D
        if (nota >= 6){
            apro++;
        }
        else{
            if (nota < 6){
                desap++;
            }
        }


        cout << "Legajo: ";
        cin >> legajo;
    }
    promedio = acuNota / contEst;
    porcAp = (float)(apro * 100) / contEst;
    porcDes = (float)(desap * 100) / contEst;

    cout << "\nPunto A" << endl;
    cout << "El promedio de notas es del: " << promedio << endl;
    cout << "\nPunto B" << endl;
    cout << "La nota menor es: " << notaMin << " del legajo nro " << legajoMin << endl;
    cout << "\nPunto C" << endl;
    cout << "Examenes rendidos en la materia 10: " << contExamen << endl;
    cout << "\nPunto D" << endl;
    cout << "El porcentaje de aprobados es del: " << porcAp << " % " << endl;
    cout << "El porcentaje de desaprobados es del: " << porcDes << " % " << endl;


    return 0;
}
