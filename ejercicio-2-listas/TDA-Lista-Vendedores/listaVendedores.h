#include <stdio.h>
#include "listaVendedoresStruct.h"

/* Prototipos */
// Viernes 10/06
bool vacia(ListaVendedores lista);
int primero(ListaVendedores lista);
int anterior(int p, ListaVendedores lista);
int siguiente(int p, ListaVendedores lista);

// Martes 14/06
int fin(ListaVendedores lista);
void inserta(tipoDato x, int p, ListaVendedores &lista);
tipoDato recupera(int p, ListaVendedores lista);
// int localiza(tipoDato x, ListaVendedores lista);

// Viernes 17/06
// void imprime(ListaVendedores lista);
void suprime(int p, ListaVendedores &lista);
void anula(ListaVendedores &lista);