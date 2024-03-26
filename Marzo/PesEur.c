#include <stdio.h>
#define euro 166.386

int main(){
    float n,x;
    int opcion;
    printf("la cantidad: ");
    scanf("%f", &n);
    puts("1-Pesetas a euros");
    puts("2-Euros a pesetas");
    scanf("%d", &opcion);
    switch(opcion){
        case 1: 
            x = n/euro;
            printf("%.2f Pesetas son %.2f Euros\n",n,x);
        break;
        case 2:
            x= n*euro;
            printf("%.2f Euros son %.2f Pesetas\n",n,x);
        break;
        default:
            printf("Opcion incorrecta\n");
    }
    return 0;
}