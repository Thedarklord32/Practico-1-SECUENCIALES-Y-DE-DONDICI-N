Algoritmo NumeroMayor
	
	Definir num1, num2, mayorr Como Real
	
	Escribir "Ingrese el primer numero: "
	Leer num1
	
	Escribir "Ingrese el segundo numero: "
	Leer num2
	
	Si num1 > num2 Entonces
		mayorr = num1
		Escribir "El numero mayor es: ", mayorr
	Sino
		Si num2 > num1 Entonces
			mayorr = num2
			Escribir "El numero mayor es: ", mayorr
		Sino
			Escribir "Ambos numeros son iguales"
		FinSi
	FinSi
	
FinAlgoritmo