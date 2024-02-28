#include <stdio.h>

int main(){
    int descuento = 10;
    int descuentoCliente = 20;
    int cliente = 1;
    int z = 0;
    z = (cliente) ? descuentoCliente : descuento;
    printf("El descuento es de %d\n",z);
    puts("Fin del programa");
    return 0;
}