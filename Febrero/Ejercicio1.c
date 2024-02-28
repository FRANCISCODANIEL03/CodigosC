# include <stdio.h>
/*Codigo que pide tres numeros enteros los multiplica y da el resultado*/
int main(){
    int V1,V2,V3;
    printf("Ingresa el primer numero\n");
    scanf("%d", &V1);
    printf("Ingresa el segundo  numero\n");
    scanf("%d", &V2); 
    printf("Ingresa el tercer numero\n");
    scanf("%d", &V3);

    printf("La multiplicacion de  %d x %d x %d es = %d",V1,V2,V3,V1*V2*V3);
    return 0;   
}    