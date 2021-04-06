#include <stdio.h>

int main(){
    int numeros[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("%d\n", numeros[3]);
    printf("Ingrese un número:\n");
    scanf("%d", &numeros[0]);
    printf("%d\n", numeros[0]);

    int matriz[2][2];
    matriz[0][0] = 15;
    printf("%d\n", matriz[0][0]);


    return 0;
}