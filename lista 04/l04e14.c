/* Codifique um software que leia uma String com até 100 caracteres e a imprima na ordem
inversa de leitura. */

#include <stdio.h>

    int main () {
    char string[100], string_reversa[100];
    int i, j= 0, k = 0;

    //printf("Digite uma palavra:\n");
    scanf ("%s", string);

    for (i = 0; string[i] != '\0'; i++) {
        j++;
    }

    for (i = j-1; i >=0 ; i--) {
        string_reversa[k] = string[i];
        k++;
    }

    //printf("\nPalavra invertida:\n");
    for (i = 0; i < j; i++) {
        printf ("%c", string_reversa[i]);
    }

    return 0;
    }
