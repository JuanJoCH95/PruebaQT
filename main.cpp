#include <iostream>

using namespace std;

int main()
{
    //Imprimir mensajes
    cout << "Hola Mundo, este es mi primera prueba en C++" << endl;

    //Declaracion de variables
    int edad = 0;
    string nombre = "Juan Jose";
    string mensaje;
    bool isMayor = false;
    float salario = 40.5;

    //Leer datos
    cout << "Ingrese su edad: ";
    cin >> edad;

    //Condicionales
    if(edad >= 18) {
        isMayor = true;
    }

    if(isMayor) {
        mensaje = "usted es mayor de edad";
    } else {
        mensaje = "usted es menor de edad";
    }

    //Imprimir valores
    cout << "Señor " << nombre << " " << mensaje << ", su salario es: " << salario << ", su edad es: " << edad << endl;

    return 0;
}
