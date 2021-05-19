#include "clientes.h"
#include <stdio.h>

// Implementaciones
cliente nuevoCliente(){
	cliente a;
	printf("Ingrese su nombre:\n");
	scanf("%s", a.nombre);
	printf("Ingrese su edad:\n");
	scanf("%d", &a.edad);
	printf("Ingrese su telefono:\n");
	scanf("%d", &a.telefono);
	return a;
}