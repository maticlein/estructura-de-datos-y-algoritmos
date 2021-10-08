#include <stdio.h>
#include "cola.h"

int main(){
    Cola c;
    ponerEnCola(2, c);
    ponerEnCola(15, c);
    ponerEnCola(50, c);
    ponerEnCola(78, c);
    ponerEnCola(8, c);
    ponerEnCola(19, c);
    quitarDeCola(c);
    imprimeCola(c);
    return 0;
}
