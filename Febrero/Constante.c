#include <stdio.h>
#define EURO 166.386

int main(){
    int pesetas;
    float euros;

    printf("\n Introduzca la cantidad en pesetas:");
    scanf("%d",&pesetas);

    euros = pesetas / EURO;

    printf("\n Equivalen a: %.2f euros", euros);

    return 0;
}