#include <stdio.h>

void func(int x); // Por valor
void func2(int* x); // Por referencia - puntero
void func3(int& x); // Por referencia

int main(){
    int x = 5;
    // func(x); // Por valor
    // func2(&x); // Por referencia - puntero
    func3(x); // Por referencia
    printf("Valor: %d\n", x);
    return 0;
}

void func(int x){
    x = x * x;
}

void func2(int* x){
    *x = (*x) * (*x);
}

void func3(int& x){
    x = x * x;
}