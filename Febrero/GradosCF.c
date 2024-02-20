#include <stdio.h>
/*imprime la tabla Fahrenheit-Celsius 
para fahr = 9,20,...,300*/
int main(){
    int fahr,celsius;
    int lower,upper,step;

    lower = 0;/*limite inferior de temperatura*/
    upper = 300;/*limite superior*/
    step = 20;/*tamaño del incremento*/
    printf("C° \t F° \n");
    fahr = lower;
    while(fahr <= upper ){
        celsius = 5*(fahr-32)/9;
        printf("%d\t%d\n",fahr,celsius);
        fahr = fahr + step;
    }
    return 0;
    
}
