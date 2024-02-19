#include <stdio.h>
/*Codigo que pide un numero e identifica si es par a no*/
int main(){
    int numero ;
    scanf("%d", &numero);
    if (numero %2 == 0){
        printf("El numero es par \n");
    }
    puts("Fin del programa ");
    return 0;
}