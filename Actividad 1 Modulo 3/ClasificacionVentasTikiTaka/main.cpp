/*
 * 2.	Un empleado de la tienda “Tiki Taka” realiza N ventas durante el día,
 * se requiere saber cuántas de ellas fueron mayores a $1000, cuántas fueron
 * mayores a $500 pero menores o iguales a $1000, y cuántas fueron menores o
 * iguales a $500. Además, se requiere saber el monto de lo vendido en cada
 * categoría y de forma global. Realice un algoritmo que permita determinar
 * lo anterior y represéntelo mediante el diagrama de flujo, el pseudocódigo
 * y lenguaje C++ utilizando el ciclo apropiado
 */

#include <iostream>
using namespace std;
int main() {
    //Definicion de variables
    int N = 0;
    float montoVenta = 0.0f;
    float totalGlobal = 0.0f;
    //Definicion de los contadores
    int c1 = 0, c2 = 0, c3 = 0;
    // Definicion de los acumuladores
    float a1 = 0.0f, a2 = 0.0f, a3 = 0.0f;

    cout << "=== TIENDA TIKI TAKA - CONTROL DE VENTAS ===" << endl;
    cout << "Ingrese el numero total de ventas del dia (N): ";
    cin >> N;

    // Ciclo For (Para) ya que se conoce la cantidad exacta N
    for (int i = 1; i <= N; i++) {
        cout << "Ingrese el monto de la venta " << i << ": $";
        cin >> montoVenta;
        // Estructuras selectivas anidadas
        if (montoVenta > 1000) {
            c1++;
            a1 = a1 + montoVenta;
        } else if (montoVenta > 500) {
            c2++;
            a2 = a2 + montoVenta;
        } else {
            c3++;
            a3 = a3 + montoVenta;
        }
        // Acumulador global
        totalGlobal = totalGlobal + montoVenta;
    }
    // Resultados en pantalla
    cout << "\n========================================" << endl;
    cout << "          RESUMEN DE VENTAS             " << endl;
    cout << "========================================" << endl;
    cout << "1. Mayores a $1000:" << endl;
    cout << "   - Cantidad de ventas: " << c1 << endl;
    cout << "   - Monto acumulado:    $" << a1 << endl;

    cout << "\n2. Entre $500 y $1000:" << endl;
    cout << "   - Cantidad de ventas: " << c2 << endl;
    cout << "   - Monto acumulado:    $" << a2 << endl;

    cout << "\n3. Menores o iguales a $500:" << endl;
    cout << "   - Cantidad de ventas: " << c3 << endl;
    cout << "   - Monto acumulado:    $" << a3 << endl;

    cout << "----------------------------------------" << endl;
    cout << "MONTO GLOBAL VENDIDO:   $" << totalGlobal << endl;
    cout << "========================================" << endl;
    return 0;
}
