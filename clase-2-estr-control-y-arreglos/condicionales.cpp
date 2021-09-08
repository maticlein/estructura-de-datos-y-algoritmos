#include <stdio.h>

int main(){
    // Estructura condicional simple
    int numero = 5;
    if(numero > 3){
        printf("VERDADERO!\n");
    }

    // Estructura condicional doble
    int numero2 = 1;
    if(numero2 == 0){
        printf("numero2 es igual a cero!\n");
    } else {
        printf("numero2 NO es igual a cero!\n");
    }

    // Estructura condicional múltiple
    float nota = 10.5;

    if(nota < 4.0){
        printf("La nota es menor a 4 (ROJO)!\n");
    } else if(nota < 5.0){
        printf("La nota es entre 4.0 y 5.0! (REGULAR)\n");
    } else if (nota < 6.0) {
        printf("La nota es entre 5.0 y 6.0 (BUENA)!\n");
    } else if (nota <= 7.0) {
        printf("La nota es entre 6.0 y 7.0 (MUY BUENA)!\n");
    } else {
        printf("La nota ingresada no es válida!\n");
    }

    // Switch
    char ejemplo = 'M';

    switch(ejemplo){
        case 'A': printf("El país es Argentina.\n");
                break;
        case 'B': printf("El país es Bolivia.\n");
                break;
        case 'C': printf("El país es Chile.\n");
                break;
        case 'P': printf("El país es Perú.\n");
                break;
        default: printf("No es ninguno de los países válidos!\n");
    }

    return 0;
}