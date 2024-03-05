#include <stdio.h>
/*Codigo que calcula cuantos segundos haz vivido*/
int main(){
    int seg,min,hora,dia,año;
    puts("Ingresa los años que tienes");
    scanf("%d",&año);
    seg =año*365*24*60*60;
    printf("Los segundos que has vivido son: %d\n",seg);
    return 0;
}