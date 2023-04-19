#include <stdio.h>

bool verificarPar(int num);
bool verificarPrimo(int num);

int main(){
    int num = 0;
    FILE* lectura = fopen("./data.dat", "r");
    FILE* escritura = fopen("./numeros.txt", "w");
    while(!feof(lectura)){
        fscanf(lectura, "%d ", &num);
        fprintf(escritura, "%d -> ", num);
        if(verificarPar(num) == 1){
            fprintf(escritura, "PAR - ");
        } else {
            fprintf(escritura, "IMPAR - ");
        }
        
        if(verificarPrimo(num) == 1){
            fprintf(escritura, "PRIMO\n");
        } else {
            fprintf(escritura, "NO PRIMO\n");
        }
    }


    return 0;
}

bool verificarPar(int num){
    if(num % 2 == 0){
        return true;
    } else {
        return false;
    }
}

bool verificarPrimo(int num){
    int divisores = 1;
    for(int i = 2; i <= num ; i++){
        if(num % i == 0){
            divisores++;
        }
        if(divisores > 2){
            return false;
        }
    }
    if(divisores == 2){
        return true;
    } else {
        return false;
    }
}