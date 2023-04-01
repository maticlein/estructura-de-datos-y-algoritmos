#include <stdio.h> // Se incluye la librería estándar de entrada y salida.

#define pi 3.14 // Se declara la macro pi con un valor de 3.14

/* 
    #define ejemplo2 7
    Este es un comentario
    un poco más extenso
    que los ejemplos
    anteriores.
*/

float temperatura; // Declaración
float temperatura2 = 19.6; // Declaración + Inicialización
char letra = 'T'; // Declaración e Inicialización de una variable de tipo carácter

int main(){
    printf("Hola mundo!\n");
    printf("La temperatura actual es: %.1f\n", temperatura2); // .1f es para imprimir sólo un decimal del valor flotante
    printf("El carácter %c tiene como valor numérico a %d\n", letra, letra);
    printf("Ingrese su edad:\n");
    int edad;
    scanf("%d", &edad);
    printf("Su edad es: %d\n", edad);
    printf("Ingrese un carácter:\n");
    char caracter;
    getchar();
    scanf("%c", &caracter);
    printf("Su carácter es: %c\n", caracter);
    printf("Saludos!");

    return 0;
}
