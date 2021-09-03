#include <stdio.h>
#include <string.h>

int main(){
    printf("Ingrese una frase:\n");
    char frase[50];
    // scanf("%[^\n]s", frase);
    fgets(frase, 50, stdin);
 
    for(int i = 0 ; i < 50 ; i++){
        if(frase[i] >= 97 && frase[i] <= 122){
            frase[i] -= 32; 
        }
    }

    printf("%s", frase);

    return 0;
}