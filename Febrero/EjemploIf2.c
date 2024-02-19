#include <stdio.h>
/*Codigo que pide una calificacion y evalua si es aprobatoria o no*/
int main(){
    int num;
    puts("Escribe tu calificacion");
    scanf("%d", &num);
    if (num >= 8){
        puts("¡Felicidades aprobaste el curso!");
    }
    else {
        puts("No aprobaste el curso");
    }

}