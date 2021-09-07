#include <stdio.h>

int numeroDivisores(int numero, int divisor);

int main(){
    int contador = numeroDivisores(8, 8);
    printf("Contador: %d\n", contador);
    return 0;
}

int numeroDivisores(int numero, int divisor){
    if(divisor == 1){
        return 1;
    } else if(numero % divisor == 0){
        return 1 + numeroDivisores(numero, divisor - 1);
    } else {
        return 0 + numeroDivisores(numero, divisor - 1);
    }
}