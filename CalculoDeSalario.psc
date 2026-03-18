Algoritmo CalculoDeSalario
	
	Definir horas, pagoHora, salarioBase, bono, salarioTotal Como Real
	
	Escribir "Ingrese las horas trabajadas: "
	Leer horas
	
	Escribir "Ingrese el pago por hora: "
	Leer pagoHora
	
	salarioBase = horas * pagoHora
	
	Si horas > 40 Entonces
		bono <- salarioBase * 0.10
	Sino
		bono <- 0
	FinSi
	
	salarioTotal = salarioBase + bono
	
	Escribir "Salario base: ", salarioBase
	Escribir "Bono: ", bono
	Escribir "Salario total: ", salarioTotal
	
FinAlgoritmo