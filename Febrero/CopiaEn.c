#include <stdio.h>
/*copia la entrada a la salida;2da version*/
int main(){
    int c;
    while((c = getchar()) != EOF){
        putchar(c);
    }
    return 0;
}