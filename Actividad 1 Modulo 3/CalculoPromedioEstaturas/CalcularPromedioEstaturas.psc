Proceso CalcularPromedioEstaturas
    Definir estatura, sumaEstaturas, promedio Como Real
    Definir contador Como Entero
    // Inicializar acumulador y contador
    sumaEstaturas <- 0
    contador <- 0
    // Lectura inicial (primera estatura o condición de entrada)
    Escribir "Ingrese la estatura en metros (o ingrese 0 para finalizar):"
    Leer estatura
    // Estructura repetitiva Mientras
    Mientras estatura > 0 Hacer
        sumaEstaturas <- sumaEstaturas + estatura
        contador <- contador + 1
	// Leer la siguiente estatura dentro del ciclo
        Escribir "Ingrese la siguiente estatura (o 0 para finalizar):"
        Leer estatura
    FinMientras
    // Validación y cálculo del promedio
    Si contador > 0 Entonces
        promedio <- sumaEstaturas / contador
        Escribir "----------------------------------------"
        Escribir "Cantidad total de personas: ", contador
        Escribir "La estatura promedio es: ", promedio, " metros"
        Escribir "----------------------------------------"
    SiNo
        Escribir "No se ingresaron estaturas válidas para calcular el promedio."
    FinSi
FinProceso