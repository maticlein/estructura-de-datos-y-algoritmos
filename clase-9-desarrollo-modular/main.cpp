#include <stdio.h>
#include "usuario.h"

int main(){
    saludo();
    despedida();
    User a;
    a.edad = 20;
    printf("La edad del usuario es %d\n", a.edad);
    return 0;
}

