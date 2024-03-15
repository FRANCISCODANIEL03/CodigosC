#include <stdio.h>
/*Codigo que crea un arreglo y guarda el valor de 10  en cada una de sus posiciones */
int main(){
    int vector[10];
    int i = 0;
    while(i < 10){
         vector[i] = 10;
          printf("vector[%d] = %d\n",i,vector[i]);
         i++;

    }
    
    return 0;
}