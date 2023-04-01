#include <stdio.h>

// Prototipos
void saludo();
int suma(int a, int b);
void saludarUsuario(char nombreUsuario[]);

int variableGlobal = 5;

int main(){
    saludo();
    
    char nombre[15];
    printf("Por favor ingrese su nombre de usuario:\n");
    scanf("%s", nombre);
    saludarUsuario(nombre);

    int numero1 = 5;
    int numero2 = 10;

    // Almacenar y mostrar la respuesta
    int valor = suma(numero1, numero2);
    printf("El valor de la suma es %d\n", valor);

    // Sólo mostrar la respuesta - Sin almacenar
    printf("%d\n", suma(2, 4));

    // // Error
    // printf("La variable resultado es igual a %d\n", resultado);
    
    printf("La variable variableGlobal es igual a %d\n", variableGlobal);

    
    return 0;
}

// Implementaciones

void saludo(){
    printf("Hola EDD\n");
}

int suma(int a, int b){
    int resultado = a + b;
    // // Error
    // printf("La variable numero1 es igual a %d\n", numero1);
    
    printf("La variable variableGlobal es igual a %d\n", variableGlobal);
    return resultado;
}

void saludarUsuario(char nombreUsuario[]){
    printf("Bienvenido %s!!\n", nombreUsuario);
}