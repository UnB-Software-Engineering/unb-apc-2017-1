/* Codifique um software que leia uma até 80 caracteres e informe a dimensão da string lida. */

#include <stdio.h>
#include <string.h>

int main (){
    char string[80];

    //printf("Digite até 80 caracteres:\n");
    scanf ("%s", string);

    //printf("\nQuantidade de caracteres digitados: ");
    printf("%d\n", strlen(string));

    return 0;
}                        