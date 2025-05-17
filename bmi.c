#include <stdio.h>

float peso, altura, indice;

int main() {
	printf("Ingrese su peso corporal:\n");
	scanf("%f", &peso);
	printf("Ingrese su altura:\n");
	scanf("%f", &altura);
	
	indice = (peso / (altura * altura));
	
	printf("Su indice de masa corporal es:\n");
	printf("%02.2f", indice);
	
	printf("\nIndice       | Condicion\n");
	printf("-----------------------------\n");
	
	if (indice < 18.5)
		printf("<18.5        | Bajo peso\n");
	else if (indice < 25.0)
		printf("18.5 - 24.9  | Normal\n");
	else if (indice < 30.0)
		printf("25.0 - 29.9  | Sobrepeso\n");
	else
		printf(">=30         | Obesidad\n");
	
	return 0;
 }
