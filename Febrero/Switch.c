#include <stdio.h>

int main(){
    int nota;

    printf("Inserte una nota:");
    scanf("%d", &nota);
    switch(nota){
        case 0:puts("\nSuspenso");break;
        case 1:puts("\nSuspenso");break;
        case 2:puts("\nSuspenso");break;
        case 3:puts("\nSuspenso");break;
        case 4:puts("\nSuspenso");break;
        case 5:puts("\nAprobado");break;
        case 6:puts("\nBien");break;
        case 7:puts("\nNotable");break;
        case 8:puts("\nNotable");break;
        case 9:puts("\nSobresaliente");break;
        case 10:puts("\nSobresaliente");break;        
        default:puts("nota incorrecta");
    }
    return 0;
}