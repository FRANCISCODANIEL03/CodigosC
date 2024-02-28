#include <stdio.h>

int main(){
    int c;
    printf(" Menu:\n");
    printf(" A=Añadir a la lista\n");
    printf(" B=Borrar de la lista\n");
    printf(" O=Ordenar la lista\n");
    printf(" I=Imprimir la lista\n");
    printf(" Escriba su seleccion y luego <enter>\n");
    if((c = getchar()) != ' '){
        if(c == 'A')printf("Has seleccionado añadir\n");
        else if(c == 'B')printf("Has seleccionado borrar\n");
            else  if(c == 'O')printf("Has seleccionado ordenar\n");
                else if(c == 'I')printf("Has seleccionado imprimir\n");
    }else printf("No has seleccionado una opcion valida\n");
}