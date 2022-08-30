#include <stdio.h>
#include <string.h>

int numeroDivisores(int numero, int divisor);
bool par(int numero);
bool impar(int numero);
bool esPrimo(int numero, int divisor);
void cadenaMayusculas(char cadena[], int indice);
void invertirCadena(char cadena[], int indice);

int main(){
    printf("DIVISORES: %d\n", numeroDivisores(8,8));
    printf("PAR? = %d\n", par(2));
    printf("PRIMO? = %d\n", esPrimo(7, 2));
    printf("PRIMO? = %d\n", esPrimo(8, 2));
    char ejemplo[15] = "Hola mundo";
    cadenaMayusculas(ejemplo, 0);
    printf("%s\n", ejemplo);
    invertirCadena(ejemplo, 0);
    printf("%s\n", ejemplo);
    return 0;
}

int numeroDivisores(int numero, int divisor){
    if(divisor == 1){
        return 1;
    } else if(numero%divisor == 0){
        return 1 + numeroDivisores(numero, divisor - 1);
    } else {
        return numeroDivisores(numero, divisor - 1);
    }
}

bool par(int numero){
    if(numero == 0){
        return true;
    } else {
        return impar(numero - 1); 
    }
}

bool impar(int numero){
    if(numero == 0){
        return false;
    } else {
        return par(numero - 1); 
    }
}

bool esPrimo(int numero, int divisor){
    if(numero/2 < divisor){
        return true;
    } else {
        if(numero%divisor == 0){
            return false;
        } else {
            return esPrimo(numero, divisor + 1);
        }
    }
}

void cadenaMayusculas(char cadena[], int indice){
    if(indice > strlen(cadena)){
        return;
    } else {
        if((cadena[indice] >= 97) && (cadena[indice] <= 122)){
            cadena[indice] -= 32;
        }
        return cadenaMayusculas(cadena, indice + 1);
    }
}

void invertirCadena(char cadena[], int indice){
    if(indice >= strlen(cadena)/2){
        return;
    } else {
        char aux;
        aux = cadena[indice];
        cadena[indice] = cadena[strlen(cadena) - 1 - indice];
        cadena[strlen(cadena) - 1 - indice] = aux;
        return invertirCadena(cadena, indice + 1);
    }
}