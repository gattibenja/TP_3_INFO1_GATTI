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
	
	printf("\n\nIndice | Condición \n ----------------------------- \n <18.5 | Bajo peso \n 18.5 a 24.9 | Normal \n 25.0 a 29.9 | Sobrepeso \n >=30| Obesidad");
	
	return 0;
 }

