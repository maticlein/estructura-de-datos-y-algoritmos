#include <stdio.h>

int main(){
    int numero;
    printf("Ingrese un número para buscar sus divisores.\n");
    scanf("%d", &numero);

    printf("Los divisores de %d son: 1", numero);
    
    if(numero > 1){
        for(int i = 2 ; i < numero ; i++){
            if(numero%i == 0){
                printf(", %d", i);
            }        
        }
        printf(" y %d\n", numero);
    }

    return 0;
}