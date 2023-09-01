#include <stdio.h>

int main(){
    int puntos = 0;
    int metodoPago = 0;
    // SABER CANTIDAD DE COMPRAS DEL USUARIO
    int numCompras = 0;
    printf("Ingrese el número de compras: ");
    scanf("%d", &numCompras);
    // PROCESAR COMPRA (N VECES)
    for(int i = 0 ; i < numCompras ; i++){
        // OBTENER CÓDIGO DEL PRODUCTO
        int codigoProducto = 0;
        printf("Ingrese el código del producto %d: ", i + 1);
        scanf("%d", &codigoProducto);
        // OBTENER VALOR DEL PRODUCTO
        int precioProducto = 0;
        printf("Ingrese el precio del producto %d: ", i + 1);
        scanf("%d", &precioProducto);

        if(puntos * 10 >= precioProducto){
            printf("Quieres pagar tu compra con puntos?\n 1.Puntos\n 2.Dinero\n");
            scanf("%d", &metodoPago);
            if(metodoPago == 1){
                // PAGO CON PUNTOS
                puntos -= precioProducto/10; 
            } else {
                // ACUMULAR PUNTOS
        if(codigoProducto >= 100 && codigoProducto < 200){
            if(precioProducto < 10000){
                puntos = puntos + precioProducto/100;
                // puntos += precioProducto/100;
            } else {
                puntos = puntos + precioProducto/50;
            }
        } else {
            if(precioProducto < 10000){
                puntos = puntos + precioProducto/50;
            } else {
                puntos = puntos + precioProducto/30;
            }
        }  
            }
        } else {
            if(codigoProducto >= 100 && codigoProducto < 200){
            if(precioProducto < 10000){
                puntos = puntos + precioProducto/100;
                // puntos += precioProducto/100;
            } else {
                puntos = puntos + precioProducto/50;
            }
        } else {
            if(precioProducto < 10000){
                puntos = puntos + precioProducto/50;
            } else {
                puntos = puntos + precioProducto/30;
            }
        }  
            }
        }
    return 0;
}