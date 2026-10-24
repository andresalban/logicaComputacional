Algoritmo SumaDiezCantidades
	Definir contadorCiclo Como Entero
	Definir numeroIngresado, suma Como Real
	suma <- 0
	contadorCiclo <- 1
	Mientras contadorCiclo<=10 Hacer
		Escribir 'Ingrese la cantidad ', contadorCiclo, ':'
		Leer numeroIngresado
		suma <- suma+numeroIngresado
		contadorCiclo <- contadorCiclo+1
	FinMientras
	Escribir 'el total de la suma es: ', suma
FinAlgoritmo
