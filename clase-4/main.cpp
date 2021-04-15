#include <stdio.h>

void saludo();
int suma(int a, int b);

int main(){
    saludo();
    int valor = suma(2, 3);
    printf("%d\n", suma(2, 4));
    return 0;
}

void saludo(){
    printf("Hola EDD\n");
}

int suma(int a, int b){
    int resultado = a + b;
    return resultado;
}