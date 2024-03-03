#include <stdio.h>
/*Codigo que suma dos numeros*/
int main (){
    int unNumero;
    int otroNumero;
    puts("Ingresa un numero ");
    scanf("%d", &unNumero);
    puts("Ingresa otro numero ");
    scanf("%d", &otroNumero);
    //Quiero imprimir la suma de 3 mas 4
    printf("La suma de %d + %d es: %d\n",unNumero,otroNumero,unNumero+otroNumero);
    printf("\n");
    return 0;
}