#include <stdio.h>

int main(){
    int numero;
    puts("Ingresa un numero");
    scanf("%d", &numero);
    if(numero < 50){
        puts("El numero es menor que 50");}
    else{
            puts("El numero es mayor que 50");
        }
    
    puts("Fin del programa");
    return 0;
}