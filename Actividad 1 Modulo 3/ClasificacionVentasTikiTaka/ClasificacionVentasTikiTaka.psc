Proceso ClasificacionVentasTikiTaka
    Definir N, i Como Entero
    Definir montoVenta Como Real
    // Contadores en 0
    Definir c1, c2, c3 Como Entero
    c1 <- 0
    c2 <- 0
    c3 <- 0
    // Acumuladores en 0
    Definir a1, a2, a3, totalGlobal Como Real
    a1 <- 0.0
    a2 <- 0.0
    a3 <- 0.0
    totalGlobal <- 0.0
    Escribir "Ingrese el número total de ventas (N):"
    Leer N
    // Ciclo Para para iterar N veces
    Para i <- 1 Hasta N Hacer
        Escribir "Ingrese el monto de la venta ", i, ":"
        Leer montoVenta
        // Estructuras selectivas múltiples / anidadas
        Si montoVenta > 1000 Entonces
            c1 <- c1 + 1
            a1 <- a1 + montoVenta
        Sino
            Si montoVenta > 500 Entonces
                c2 <- c2 + 1
                a2 <- a2 + montoVenta
            Sino
                c3 <- c3 + 1
                a3 <- a3 + montoVenta
            FinSi
        FinSi
        totalGlobal <- totalGlobal + montoVenta
    FinPara
    // Mostrar Resultados
    Escribir "=== RESUMEN DE VENTAS TIKI TAKA ==="
    Escribir "1. Mayores a $1000 -> Cantidad: ", c1, " | Monto: $", a1
    Escribir "2. Entre $501 y $1000 -> Cantidad: ", c2, " | Monto: $", a2
    Escribir "3. Menores o iguales a $500 -> Cantidad: ", c3, " | Monto: $", a3
    Escribir "-----------------------------------"
    Escribir "MONTO GLOBAL VENDIDO: $", totalGlobal
FinProceso