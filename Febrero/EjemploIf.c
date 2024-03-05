#include <stdio.h>
/*Codigo que pide un numero e identifica si es par a no*/
int main(){
    int numero ;
    puts("Ingresa un numero");
    scanf("%d", &numero);
    if (numero %2 == 0){
        printf("El numero es par \n");
    }else{
        printf("El numero no es par \n");
    }
    puts("Fin del programa ");
    return 0;
    
}