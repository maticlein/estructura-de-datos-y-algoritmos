#include <stdio.h>

// PROTOTIPOS
void saludo();
int sumar(int a, int b);

int main(){
    saludo();
    int a = 4;
    int b = 2;
    printf("a del main() %d\n", a);
    int ejemplo = sumar(a, b);
    printf("%d\n", ejemplo);
    printf("2a vez a del main() %d\n", a);
    // printf("%d\n", sumar(4, 2));
    return 0;
}

// IMPLEMENTACIONES
void saludo(){
    printf("Hola Chat GPT!\n");
}

int sumar(int a, int b){
    saludo();
    printf("a de sumar() %d\n", a);
    int resultado = a + b;
    return resultado;
}