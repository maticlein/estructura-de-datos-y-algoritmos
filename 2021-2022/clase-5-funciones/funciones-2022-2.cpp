#include <stdio.h>

// Prototipos
int suma(int num1, int num2);
void modificarNumero(int* numero);
int sumatoriaArreglo(int arreglo[], int numElementos);

int b = 5; //Variable global

int main(){
    /* int a = suma(3, 4);
    printf("%d\n", a);
    printf("%d\n", suma(1, 2));
    printf("%d\n", b); */

    int ejemplo = 5;
    modificarNumero(&ejemplo);
    printf("%d\n", ejemplo);

    int numeros[5] = {1, 2, 3, 4, 5};
    int cantElementos = sizeof(numeros) / sizeof(int);
    printf("Cantidad de Elementos: %d\n", cantElementos);
    printf("Sumatoria: %d\n", sumatoriaArreglo(numeros, cantElementos));
    return 0;
}

// Implementaciones
int suma(int num1, int num2){
    int resultado = num1 + num2;
    return resultado;
}

void modificarNumero(int* numero){
    *numero = (*numero) * (*numero);
}

int sumatoriaArreglo(int arreglo[], int numElementos){
    int sumatoria = 0;
    for(int i = 0 ; i < numElementos ; i++){
        sumatoria += arreglo[i];
    }
    return sumatoria;
}