# include <stdio.h>
/*Codigo que divide dos numeros con decimales*/
double main(){
    float V1,V2;
    puts("Ingresa un numero con decimales");
    scanf("%f", &V1);
    puts("Ingresa un numero con decimales");
    scanf("%f", &V2);
    printf("La division de %.2f entre %.2f es = %f",V1,V2,V1/V2);
    return 0;
}