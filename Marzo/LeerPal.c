#include <stdio.h>

int main() {
    int l, i;
    char palabra[21];

    printf("Teclee una palabra de menos de 20 letras: \n");
    scanf("%s", palabra);

    // Calcular la longitud de la palabra
    i = 0;
    while (palabra[i] != '\0') {
        i++;
    }
    l = i;

    printf("%s tiene %d letras\n", palabra, l);

    printf("%s escrita al reves es: ", palabra);
    // Imprimir la palabra al revés
    for (i = l - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }
    printf("\n");

    return 0;
}