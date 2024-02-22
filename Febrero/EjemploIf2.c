#include <stdio.h>

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