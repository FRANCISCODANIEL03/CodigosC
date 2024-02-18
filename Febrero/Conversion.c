#include <stdio.h>

/*Se realizan conversion de datos con decimales a int*/
int main(){
    double d,e,f = 2.33;
    int i = 6;
    e = f * i;
    printf("Resultado = %f \n",e);
    d = (int)(f * i);
    printf("Resultado %f \n",d);
    d = (int)(f * i);
    printf("Resultado %f \n",d);
    return 0;
}