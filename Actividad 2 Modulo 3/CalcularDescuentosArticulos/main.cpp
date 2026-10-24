#include <iostream> // Incluye la biblioteca necesaria para leer y mostrar datos.
using namespace std; // Permite utilizar cin y cout sin escribir std::.
int main() {// La función principal indica dónde comienza la ejecución del programa.
    //Declaracion e inicializacion de variables
    int cantidadArticulos; // Se declara la variable de tipo entero(int), esta guarda cuántos artículos se van a procesar.
    int numeroArticulo; // Se declara la variable de tipo entero(int), sirve de indicador para saber cuál artículo se está procesando.
    double precioArticulo; // Se declara la variable de tipo decimal(double) .Guarda el precio original del artículo.
    double tasaDescuento; // Se declara la variable de tipo decimal(double).Guarda el porcentaje de descuento.
    double descuentoArticulo; // Se declara la variable de tipo decimal(double).Guarda el valor monetario del descuento.
    double pagoArticulo; // Se declara la variable de tipo decimal(double).Guarda el precio final del artículo.
    double sumaDescuentos = 0.0; //Se declara la variable de tipo decimal(double). Inicializa en cero todavía no hemos procesado ningún artículo.Procesa el total de descuentos.
    double sumaPagos = 0.0; // Se declara la variable de tipo decimal(double).Inicializa en cero todavía no hemos procesado ningún artículo.Procesa el total del pago.
    cout << "Ingrese la cantidad de articulos:"; //Muestra mensaje solicitando la cantidad de artículo.
    cin >> cantidadArticulos; // Lee la cantidad ingresada por el usuario y la asigna a la variable cantidadArticulos.
    // Comprueba que la cantidad sea positiva.
    while (cantidadArticulos <= 0) {
        cout << "Ingrese una cantidad mayor que cero: "<<endl; // Solicita corregir el dato.
        cin >> cantidadArticulos; // Lee nuevamente la cantidad.
    } // Termina la validación de la cantidad.
    numeroArticulo = 1; // Inicia el contador en el primer artículo.
    cout <<"INGRESO DE PRECIOS"<<endl; // Presenta el encabezado de la captura.
    // El ciclo se repite mientras el contador sea menor o igual a la cantidad de artículos.
    while (numeroArticulo <= cantidadArticulos) {
        cout << "Ingrese el precio del articulo " << numeroArticulo << ": "; // Solicita el precio actual.
        cin >> precioArticulo; // almacena el precio ingresado en precioArticulo.
        // Esta estructura comprueba que el precio no sea negativo.
        while (precioArticulo < 0) {
            cout << "El precio no puede ser negativo. Ingrese otro: "; //muestra este mensaje cuando el usuario ingresa un valor negativo y pide nuevamente ingresar otro valor.
            cin >> precioArticulo; // Se asigna el nuevo precio a la variable.
        } // Termina la validación del precio.
        // Si el precio es mayor o igual a $200, asigna un descuento del 15 %.
        if (precioArticulo >= 200) {
            tasaDescuento = 15; // Asigna el 15 por ciento de descuento.
        } else { // Se ejecuta si el precio es menor que 200.
            // Si el precio supera $100, asigna un descuento del 12 %.
            if (precioArticulo > 100) {
                tasaDescuento = 12; // Asigna el 12 por ciento de descuento.
            } else { // Asigna un descuento del 10 % cuando el precio es menor o igual a $100.
                tasaDescuento = 10; // Asigna el 10 por cientode descuento.
            } // Termina la segunda decisión.
        } // Termina la selección del porcentaje.
        descuentoArticulo = precioArticulo * tasaDescuento / 100.0; // Calcula el valor descontado.
        pagoArticulo = precioArticulo - descuentoArticulo; // Calcula el precio final.
        cout << "Descuento: " << tasaDescuento << "%"; // Muestra el porcentaje.
        cout << " ($" << descuentoArticulo << ")"<<endl; // Muestra el valor descontado.
        cout << "Precio final: $" << pagoArticulo << endl; // Muestra el precio final del artículo.
        sumaDescuentos = sumaDescuentos + descuentoArticulo; // Acumula el descuento.
        sumaPagos = sumaPagos + pagoArticulo; // Acumula el precio final.
        numeroArticulo = numeroArticulo + 1; // Esta instrucción aumenta el contador en una unidad.Avanzando al siguiente artículo.
    } // Termina el ciclo while, se han procesado todos los artículos.
    cout << "*RESUMEN FINAL:"<< endl; // Muestra el encabezado del resumen.
    cout << "Cantidad de articulos: " << cantidadArticulos <<endl ; // Muestra la cantidad de articulos procesados.
    cout << "Descuento total: $" << sumaDescuentos << endl; // Muestra la suma de descuentos.
    cout << "Total a pagar: $" << sumaPagos << endl; // Muestra el total que el usuario tiene que pagar,aplicados todos los descuentos.
    return 0; // Indica que el programa terminó correctamente.
} // Cierra la función principal.