#include <stdio.h>
#include "listaStruct.h"

/* Prototipos */
// Viernes 10/06
bool vacia(Lista lista);
int primero(Lista lista);
int anterior(int p, Lista lista);
int siguiente(int p, Lista lista);

// Martes 14/06
int fin(Lista lista);
void inserta(tipoDato x, int p, Lista &lista);
tipoDato recupera(int p, Lista lista);
int localiza(tipoDato x, Lista lista);

// Viernes 17/06
void imprime(Lista lista);
void suprime(int p, Lista &lista);
void anula(Lista &lista);