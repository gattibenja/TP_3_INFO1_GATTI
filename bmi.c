#include <stdio.h>

float peso, altura, indice;

int main() {
	printf("Ingrese su peso corporal:\n");
	scanf("%f", &peso);
	printf("Ingrese su altura:\n");
	scanf("%f", &altura);
	
	indice = (peso / (altura * altura));
	
	printf("Su indice de masa corporal es:\n");
	printf("%02.2f\n", indice);
	
	printf("\nIndice| Condición \n ----------------------------- \n<18.5 | Bajo peso \n18.5 a 24.9 | Normal \n25.0 a 29.9 | Sobrepeso \n>=30| Obesidad\n -----------------------------\n");
	
	printf("Su condicion es: ");
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
