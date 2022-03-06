#include "ejemplo.h"

void main (void)
{
	float valor1 = 11.5, valor2 = 10.1, resultado = 0;
	
	resultado = sumar_valores(valor1, valor2);
	mostrar_resultado(resultado);
	restar_valores(valor1, valor2, &resultado);
	mostrar_resultado(resultado);
}
