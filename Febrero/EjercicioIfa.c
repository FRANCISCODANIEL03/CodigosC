#include <stdio.h>

int main(){
    int años,sueldo;
    float x;
    printf("Ingresa tus años de antiguedad\n");
    scanf("%d", &años);
    printf("Ingresa tu sueldo mensual\n");
    scanf("%d", &sueldo);
    x = (sueldo*100)/10;
    if(años >= 5){
        if(x > 1000.0){
            puts("Eres sujeto a credito hipotecario");
        }
    }else{
    puts("No eres sujeto a credito hipotecario");}
    return 0;
}