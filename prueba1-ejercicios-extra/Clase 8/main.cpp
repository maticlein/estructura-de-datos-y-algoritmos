// Librerías
#include <stdio.h>
#include <string.h>
#include "saludo.h"
#include "clientes.h"

// Macros

// Variables Globales

// Estructuras

// Prototipos

// Función main
int main() {
	mensajeSaludo();
	cliente a = nuevoCliente();
	FILE* archivo = fopen("ejemplo.txt","a");
	fprintf(archivo,"Nombre:%s // Edad: %d // Telefono:%d\n", a.nombre, a.edad, a.telefono);
	fclose(archivo);
	printf("Cliente ingresado correctamente!\n");
	return 0;
}

// Implementaciones
