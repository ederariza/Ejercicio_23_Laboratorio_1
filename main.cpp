
/*
Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/

#include <iostream>
using namespace std;

//Prototipo funcion factores
int factores(int numero);

int main(){

    int numero_A = 15;
    int numero_B = 7;
    int mcm = 1;

    //Captura de datos
    cout << "Ingrese el numero A: ";
    cin >> numero_A;
    cout << "Ingrese el numero B: ";
    cin >> numero_B;

    if (numero_A > numero_B){
       int factor = 1;
        factor = factores(numero_A);
        for (int i = 1; i <= factor; i++){
            if ((i % numero_A == 0) && ( i % numero_B == 0) && (i >=numero_A)){
                mcm = i;
                break;
            }
        }
    }

    else{

        int factor = 1;
        factor = factores(numero_B);

        for (int i = 1; i <= factor; i++){
            if ((i % numero_B == 0) && (i % numero_A == 0) && (i >=numero_B)){
                mcm = i;
                break;
            }
        }
    }

    cout << "El mcm de " << numero_A << " y " << numero_B << " es " << mcm << endl;
    return 0;

}

//Funcion que encuentra los factores del numero
int factores(int numero){

    int factor = 1;
    for (int i = 1; i <= numero; i++){
        factor *= i;
    }

    return factor;
}
