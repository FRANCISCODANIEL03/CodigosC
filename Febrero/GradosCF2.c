#include <stdio.h>

/*imprime la tabla Fahrenheit-Celsius
para fahr = 0,20,...,300;version de punto flotante*/
int main(){
    float fahr,celsius;
    int lower,upper,step;
    lower = 0;/*limite superior de la tabla de temperatura*/
    upper = 300;/*limite superior*/
    step = 20;/*tamaño del incremento*/
    printf("C° \t F° \n");

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f \n",fahr,celsius);
        fahr = fahr + step;
    }
    return 0;
}