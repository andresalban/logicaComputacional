/**
Se requiere un algoritmo para obtener la suma de diez cantidades mediante la
utilización de un ciclo “Mientras”. Realice el diagrama de flujo, el pseudocódigo y la
respectiva codificación en lenguaje C++.
 */
#include <iostream> // Incluye la biblioteca necesaria para leer y mostrar datos.
using namespace std; // Permite utilizar cin y cout sin escribir std::.

int main() {// Define la función principal donde comienza la ejecución.
    //Declaracion e inicializacion de variables
    int contadorCiclo = 1;//Se declara e inicializa el contadorCiclo de tipo entero(int) en uno para identificar la primera cantidad.
    double numero; // Se declara la variable de tipo decimal(double) que almacenará cada cantidad ingresada.
    double suma = 0.0;// se declara e inicializa  la variable suma de tipo decimal(double) esta variable ira acumulando el valor de la suma.

    while (contadorCiclo <= 10) { // Esta instrucción comprueba si el contadorCiclo es menor o igual a diez.
        //Si la condición es verdadera (contadorCiclo menor a 10), el programa ejecuta las instrucciones dentro de las llaves.
        //Si es falsa, (contadoCiclo mayor a 10) se sale del ciclo y continúa con la instrucción que muestra el resultado.
        cout << "Ingrese la cantidad " << contadorCiclo << ": "; // Se le solicita al usuario ingresar una cantidad e indica su número
        cin >> numero; // Lee la cantidad ingresada y la guarda en la variable numeroIngresado.

        suma = suma + numero; // Toma la suma anterior y le agrega el valor de numeroIngresado y lo guarda en la variable suma
        contadorCiclo = contadorCiclo + 1; // Aumenta en contadorCiclo en una unidad,para identificar cuantas cantidades han sido procesadas
    } // Finaliza el ciclo While el contadorCiclo supera el valor de 10.

    cout << "El total de la suma  es: " << suma << endl; // MMuestra el total de las diez cantidades ingresadas.
    return 0; // Indica que el programa terminó correctamente.
} // Cierra la función principal.