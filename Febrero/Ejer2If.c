#include <stdio.h>

int main(){
    int horasSem,Phora,Salario;
    puts("Ingresa las horas semanales trabajadas");
    scanf("%d", &horasSem);
    puts("Ingresa el precio por hora");
    scanf("%d", &Phora);
    if(horasSem <= 40){
        Salario = horasSem*40;
    }
    else {
        Salario = (40* Phora + (Phora*1.5*(horasSem-40)));
    }
        printf("El salario semanal es de : %d\n",Salario);

    }

