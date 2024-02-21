#include <stdio.h>

int main(){
    int pesetas;

    printf("\n Introduzca cantidad en pesetas:");
    scanf("%d",&pesetas);

    printf("\n Equivalen a:%.2f euros",pesetas / 166.386);

    return 0;
}