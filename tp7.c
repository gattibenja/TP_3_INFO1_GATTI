#include <stdio.h>
#define TAM 2 

int main(void) {
	int codigos[TAM];
	float precios[TAM];
	int codigo;
	float precio;
	
	printf("Ingrese %d productos, se solicitará el código y precio:\n\n", TAM);
	
	for (int i = 0; i < TAM; i++) {
		do {
			printf("Ingrese el código de barras (1-999999999): ");
			scanf("%d", &codigo);
			if (codigo < 1 || codigo > 999999999) {
				printf("Error. El código de barras debe estar entre 1 y 999999999\n");
			}
		} while (codigo < 1 || codigo > 999999999);
		codigos[i] = codigo;
		do {
			printf("Ingrese el precio: ");
			scanf("%f", &precio);
			if (precio < 0) {
				printf("Error. El precio no puede ser negativo\n");
			}
		} while (precio < 0);
		precios[i] = precio;
	}
	printf("\nCódigo\t\tPrecio\n");
	for (int i = 0; i < TAM; i++) {
		printf("%d\t\t%.2f\n", codigos[i], precios[i]);
	}
	
	int indice_mayor = 0;
	int indice_menor = 0;
	
	for (int i = 1; i < TAM; i++) {
		if (precios[i] > precios[indice_mayor]) {
			indice_mayor = i;
		}
		if (precios[i] < precios[indice_menor]) {
			indice_menor = i;
		}
	}
	
	printf("\nMás caro: [%d] %.2f\n", codigos[indice_mayor], precios[indice_mayor]);
	printf("Más barato: [%d] %.2f\n", codigos[indice_menor], precios[indice_menor]);
	
	return 0;
}
