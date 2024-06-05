#include <stdio.h>
#include "lista.h"

int main(){
    printf("Test del TDA de Lista\n");
    Lista ejemplo = NULL;
    anula(ejemplo);
    if(vacia(ejemplo)){
        printf("Lista vacia!!\n");
    }
    return 0;
}