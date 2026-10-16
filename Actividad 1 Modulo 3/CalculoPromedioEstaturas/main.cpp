/*
Se requiere un algoritmo para obtener la estatura promedio de un
grupo de personas, cuyo número de miembros se desconoce, el ciclo
debe efectuarse siempre y cuando se tenga una estatura registrada.
Realice el diagrama de flujo, el pseudocódigo, utilizando el ciclo
apropiado.
*/

#include <iostream>
using namespace std;
int main() {
    //declaracion de variables
    float estatura = 0.0f;
    float promedio = 0.0f;
    float sumaEstatura = 0.0f;
    int contador = 0;
    //
    cout << "=== PROGRAMA PARA CALCULAR LA ESTATURA PROMEDIO ===" << endl;
    cout << "Ingrese la estatura en metros (ingrese 0 o un valor negativo para terminar):" << endl;
    // Lectura inicial (primera estatura)
    cout << "Estatura 1:";
    cin >> estatura;
    // Estructura repetitiva Mientras (while)
    while (estatura > 0) {
        sumaEstatura = sumaEstatura + estatura;
        contador++;
        cout << "Estatura " << (contador + 1) << ":";
        cin >> estatura;
    }
    // Validación para evitar división por cero
    if (contador > 0) {
        promedio = sumaEstatura / contador;
        cout << "\n----------------------------------------" << endl;
        cout << "RESULTADOS DEL GRUPO:" << endl;
        cout << "Cantidad total de personas: " << contador << endl;
        cout << "La estatura promedio es: " << promedio << " metros" << endl;
        cout << "\n----------------------------------------" << endl;
    } else {
        cout << "No se ingresaron estaturas válidas para calcular el promedio." << endl;
    }
    return 0;
}