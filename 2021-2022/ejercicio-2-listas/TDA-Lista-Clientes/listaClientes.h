#include <stdio.h>
#include "listaClientesStruct.h"

/* Prototipos */
// Viernes 10/06
bool vacia(ListaClientes lista);
int primero(ListaClientes lista);
int anterior(int p, ListaClientes lista);
int siguiente(int p, ListaClientes lista);

// Martes 14/06
int fin(ListaClientes lista);
void inserta(tipoDatoCliente x, int p, ListaClientes &lista);
tipoDatoCliente recupera(int p, ListaClientes lista);
// int localiza(tipoDato x, ListaClientes lista);

// Viernes 17/06
void imprimeClientes(ListaClientes lista);
void suprime(int p, ListaClientes &lista);
void anula(ListaClientes &lista);