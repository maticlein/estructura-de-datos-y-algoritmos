#include <stdio.h>

int main(){
    // SE UTILIZA CUANDO SE SABE LA CANTIDAD DE VECES A ITERAR
    for(int i = 0 ; i < 10 ; i++){
        printf("FOR\n");
    }

    int a = 3; 
    int b = 5; 
    
    // EJECUTA LAS INSTRUCCIONES POR LO MENOS UNA VEZ
    do{
        printf("DO-WHILE\n");
    } while(a > b);

    // EVALUA PRIMERO LA CONDICION Y LUEGO EJECUTA O NO
    while(a < b){
        printf("WHILE\n");
        a++;
    }

    return 0;
}