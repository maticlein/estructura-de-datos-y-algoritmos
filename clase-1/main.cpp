#include <stdio.h>

// Variables
int anho;
int semestre;

int main(){
	/*
	printf("Ingrese el año:\n");
	scanf("%d", &anho);
	printf("Ingrese el semestre:\n");
	scanf("%d", &semestre);
	* */
	printf("Ingrese el año y el semestre (AAAA-S):\n");
	scanf("%d-%d", &anho, &semestre);
	printf("Hola Estructura de Datos %d-%d\n", anho, semestre);
	printf("Bienvenidos!\n");
	return 0;
	}
