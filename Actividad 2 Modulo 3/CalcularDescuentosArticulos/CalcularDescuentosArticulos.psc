Algoritmo CalcularDescuentosArticulos
    Definir cantidadArticulos, numeroArticulo Como Entero
    Definir precioArticulo, tasaDescuento Como Real
    Definir descuentoArticulo, pagoArticulo Como Real
    Definir sumaDescuentos, sumaPagos Como Real
    // Solicitar cantidad de artículos con validación de entrada
    Escribir "Ingrese la cantidad de articulos que desea evaluar:"
    Leer cantidadArticulos
    Mientras cantidadArticulos <= 0 Hacer
        Escribir "El número de artículos debe ser mayor a cero. Por favor, ingrese un número válido:"
        Leer cantidadArticulos
    FinMientras
    numeroArticulo <- 1
    sumaDescuentos <- 0
    sumaPagos <- 0
    Escribir "INGRESO DE PRECIOS DE LOS ARTÍCULOS"
    Mientras numeroArticulo <= cantidadArticulos Hacer
        Escribir "Ingrese el precio del articulo ", numeroArticulo, ":"
        Leer precioArticulo
        // Determinar la tasa de descuento
        Si precioArticulo >= 200 Entonces
            tasaDescuento <- 15
        Sino
            Si precioArticulo > 100 Entonces
                tasaDescuento <- 12
            Sino
                tasaDescuento <- 10
            FinSi
        FinSi
        // Calcular valores del artículo actual
        descuentoArticulo <- precioArticulo * tasaDescuento / 100
        pagoArticulo <- precioArticulo - descuentoArticulo
        // Mostrar detalle inmediato del artículo
        Escribir "Descuento: ", tasaDescuento, "% ($", descuentoArticulo, ")"
        Escribir "Precio Final: $", pagoArticulo
        // Acumular para el resumen final
        sumaDescuentos <- sumaDescuentos + descuentoArticulo
        sumaPagos <- sumaPagos + pagoArticulo
        numeroArticulo <- numeroArticulo + 1
    FinMientras
    Escribir "RESUMEN FINAL:"
    Escribir "Cantidad total de articulos: ", cantidadArticulos
    Escribir "Descuento total acumulado: $", sumaDescuentos
    Escribir "Total a pagar por todos los articulos: $", sumaPagos
FinAlgoritmo