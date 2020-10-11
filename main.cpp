
/*
Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/

#include <iostream>
using namespace std;

bool numero_primo(int);

int main(){

    int numero_A;
    int numero_B;
    int mcm = 1;
    bool primo_A ;
    bool primo_B;

    //Captura de datos
    cout << "Ingrese el numero A: ";
    cin >> numero_A;
    cout << "Ingrese el numero B: ";
    cin >> numero_B;

    primo_A = numero_primo(numero_A);
    primo_B = numero_primo(numero_B);

    //Primera condicion, si los numeros son pares y alguno es mcm del otro
    if ((numero_A % numero_B == 0) || (numero_B % numero_A == 0))

        if (numero_A % numero_B == 0)
            mcm = numero_A,
            cout << "El mcm entre " << numero_A << " y " << numero_B << " es " << mcm << endl;

        else
            mcm = numero_B,
            cout << "El mcm entre " << numero_A << " y " << numero_B << " es " << mcm << endl;

    //Segunda condicion, si ambos numeros son primos
    else if ((primo_A == true) && (primo_B == true))
        mcm = numero_A * numero_B,
        cout << "El mcm entre " << numero_A << " y el numero " << numero_B << " es " << mcm << endl;

    //Tercera condicion un numero par y otro primo
    else
        mcm = numero_A * numero_B,
        cout << "El mcm entre " << numero_A << " y el numero " << numero_B << " es " << mcm << endl;

    return 0;
}

//Funcion de numeros primos
bool numero_primo(int numero){

    bool primo;
    int contador = 0;
    for(int i=1; i<=numero; i++) {

        if((numero % i) == 0) {
                contador += 1;

                if ((contador > 2) || (numero == 1)){
                    primo = false;
                    break;
                }

                else{
                    if((contador == 2) && (i == numero))
                        primo = true;
                }
        }

        else{
            continue;
        }
    }

    return primo;
}
