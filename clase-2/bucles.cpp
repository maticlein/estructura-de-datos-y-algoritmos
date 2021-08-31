#include <stdio.h>

int main(){
    // FOR - SE UTILIZA CUANDO SE SABE LA CANTIDAD DE VECES A ITERAR
    for(int i = 0 ; i < 10 ; i++){
        printf("FOR número %d\n", i);
    }

    int a = 3; 
    int b = 5; 
    
    // // DO-WHILE - EJECUTA LAS INSTRUCCIONES POR LO MENOS UNA VEZ
    do{
        printf("DO-WHILE\n");
    } while(a > b);

    // WHILE - EVALUA PRIMERO LA CONDICION Y LUEGO EJECUTA O NO
    while(a < b){
        printf("WHILE\n");
        a++;
    }

    // break - Rompe el bucle
    for(int i = 0 ; i < 10 ; i++){
        printf("Ejemplo de break %d\n", i);
        if(i == 4){
            break;
        }
    }

    // continue - Salta a la siguiente iteración
    for(int i = 0 ; i < 10 ; i++){
        if(i == 2){
            continue;
        }
        printf("Ejemplo de continue %d\n", i);
    }

    return 0;
}