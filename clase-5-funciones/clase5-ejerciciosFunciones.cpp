#include <stdio.h>
#include <string.h>

int mayorDosNumeros(int numero1, int numero2);
void esPar(int numero);
int mayorTresNumeros(int numero1, int numero2, int numero3);
int sumatoriaArreglo(int arreglo[]);
int numeroDivisores(int numero);
void esPrimo(int numero);
void cadenaMayusculas(char cadena[]);

int main(){
    printf("Ingrese una frase:\n");
    char frase[50];
    fgets(frase, 50, stdin);
    cadenaMayusculas(frase);
    printf("%s\n", frase);

    return 0;
}

int mayorDosNumeros(int numero1, int numero2){
    if(numero1 == numero2){
       return 0;
    } else if(numero1 > numero2) {
        return numero1;
    } else {
        return numero2;
    }
}

void esPar(int numero){
    if(numero%2 == 0){
        printf("El número %d es PAR\n", numero);
    } else {
        printf("El número %d es IMPAR\n", numero);
    }
}

int mayorTresNumeros(int numero1, int numero2, int numero3){
    int mayor;
    if((numero1 == numero2) && (numero2 == numero3)){
        return 0;
    } else {
        mayor = numero1;
        if(numero2 > mayor){
            mayor = numero2;
        }
        if(numero3 > mayor){
            mayor = numero3;
        }
        return mayor;
    }
}

int sumatoriaArreglo(int arreglo[]){
    int sumatoria = 0;
    for(int i = 0 ; i < 5 ; i++){
        sumatoria += arreglo[i];
    }
    return sumatoria;
}

int numeroDivisores(int numero){
    int divisores = 1;
    if(numero > 1){
        for(int i = 2 ; i <= numero ; i++){
            if(numero%i == 0){
                divisores++;
            }        
        }
    
    }
    return divisores;
}

void esPrimo(int numero){
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
}

void cadenaMayusculas(char cadena[]){
    for(int i = 0 ; i < 50 ; i++){
        if(cadena[i] >= 97 && cadena[i] <= 122){
            cadena[i] -= 32; 
        }
    }
}