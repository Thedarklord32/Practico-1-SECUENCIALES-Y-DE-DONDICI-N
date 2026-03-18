Algoritmo DescuentoEnCompra
	
	Definir compra, descuento, total Como Real
	
	Escribir "Ingrese el monto de la compra: "
	Leer compra
	
	Si compra > 100 Entonces
		descuento = compra * 0.10
	Sino
		descuento = 0
	FinSi
	
	total = compra - descuento
	
	Escribir "Descuento aplicado: ", descuento
	Escribir "Total final a pagar: ", total
	
FinAlgoritmo