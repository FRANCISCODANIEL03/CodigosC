#include <stdio.h>

int main(){
    int seg,min,hora,dia,año;
   /* printf("Ingresa los minutos que has vivido");
    scanf("%d",&min);
    printf("Ingresa las horas que has vivido");
    scanf("%d",&hora);
    printf("Ingresa los dias que has vivido");
    scanf("%d",&dia);
    printf("Ingresa los años que has vivido");
    scanf("%d",año);
    seg= año * dia * hora *min;
    printf("segundos que has vivido = "+ seg);
    return 0;*/
    scanf("%d",&año);
    seg =año*365*24*60*60;
    printf("%d",seg);
    return 0;
}