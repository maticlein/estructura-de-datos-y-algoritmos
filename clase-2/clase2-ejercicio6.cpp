#include <stdio.h>

int main(){
    int numero;
    printf("Ingrese un número para saber si es primo o no.\n");
    scanf("%d", &numero);
    
    int i;

    for(i = 2 ; i < numero ; i++){
        if(numero%i == 0){
            break;
        }        
    }
    if(i == numero){
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }
    return 0;
}