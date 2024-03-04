#include <stdio.h>
#include <stdlib.h>
/*Codigo que pide un nombre y lo imprime*/
int main (){
    char nombre[100];
    puts("Ingresa tu nombre ");
    scanf("%s", nombre);
    printf("¡Binvenido %s es un gusto compilar para %s",nombre,nombre);
    return 0;
}