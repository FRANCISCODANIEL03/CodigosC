#include <stdio.h>

int main(){
   /* int miArreglo[8];
    miArreglo[0] = 5;
    miArreglo[1] = 10;
    miArreglo[2] = miArreglo[0] + miArreglo[1];*/
    int vector[10];
    int i = 0;
    while(i < 10){
         vector[i] = 10;
          printf("vector[%d] = %d\n",i,vector[i]);
         i++;
    }
    
    return 0;
}