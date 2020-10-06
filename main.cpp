
/*
Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/

#include <iostream>

using namespace std;

int main(){

    int numero_A = 24;
    int numero_B = 12;
    int factor_A;
    int factor_B;
    int mcm = 1;

    cout << "Hello World!" << endl;

    while (true){

        factor_A = numero_A / 2;
        numero_A = factor_A;
        mcm *= factor_A;
        cout << mcm << endl;

        if (numero_A == 1)
            break;

        else if (numero_A == 0)
            break;

    }

    return 0;
}
