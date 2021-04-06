#include <stdio.h>

int main(){
    int a = 275;
    float b = 7.89;
    double c = 198.97987239872;
    printf("[%d] - [%f] - [%lf]\n", a, b, c);
    int d;
    float e;
    char f;
    e = c;
    d = b;
    f = a;
    printf("Menor precisión -> [%f]\n", e);
    printf("Truncamiento -> [%d]\n", d);
    printf("Overflow -> [%d]\n", f);
    return 0;
}