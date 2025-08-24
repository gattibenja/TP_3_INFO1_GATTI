#include <stdio.h>
#include <math.h>   


float calcularAreaRectangulo(float largo, float alto);
float calcularPerimetroRectangulo(float largo, float alto);
float calcularDiagonalRectangulo(float largo, float alto);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);


int main() {
	int opcion;
	
	printf("Ingrese la figura que desea calcular (1: rectángulo, 2: círculo): ");
	scanf("%d", &opcion);
	
	while(opcion != 1 && opcion != 2) {
		printf("Opción inválida. Ingrese 1 para rectángulo o 2 para círculo: ");
		scanf("%d", &opcion);
	}
	
	if(opcion == 1) {
		printf("Opción de rectángulo seleccionada\n");
		float largo, alto;
		printf("Ingrese la longitud del rectángulo: ");
		scanf("%f", &largo);
		printf("Ingrese la altura del rectángulo: ");
		scanf("%f", &alto);
		
		float area = calcularAreaRectangulo(largo, alto);
		float perimetro = calcularPerimetroRectangulo(largo, alto);
		float diagonal = calcularDiagonalRectangulo(largo, alto);
		
		imprimirResultados(area, perimetro);
		printf("La diagonal del rectángulo es: %.2f\n", diagonal);
		
	} else if(opcion == 2) {
		printf("Opción de círculo seleccionada\n");
		float radio;
		printf("Ingrese el radio del círculo: ");
		scanf("%f", &radio);
		
		float area = calcularAreaCirculo(radio);
		float perimetro = calcularPerimetroCirculo(radio);
		
		imprimirResultados(area, perimetro);
	}
	
	return 0;
}

float calcularAreaRectangulo(float largo, float alto) {
	return largo * alto;
}

float calcularPerimetroRectangulo(float largo, float alto) {
	return 2 * (largo + alto);
}

float calcularDiagonalRectangulo(float largo, float alto) {
	return sqrt(largo * largo + alto * alto);
}

float calcularAreaCirculo(float radio) {
	return M_PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
	return 2 * M_PI * radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El área es: %.2f\n", area);
	printf("El perímetro es: %.2f\n", perimetro);
}

