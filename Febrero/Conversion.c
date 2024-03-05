#include <stdio.h>

/*Se realizan conversion de datos con decimales a int*/
int main(){
    float d,e;
    puts("Ingresa el numero con decimales");
    scanf("%f", &d);
    printf("Numero inicial= %f \n",d);
    e = (int)(d);
    printf("Resultado en decimal:  %f \n",d);
    printf("Resultado entero es: %.0f \n",e);
    return 0;
    
}