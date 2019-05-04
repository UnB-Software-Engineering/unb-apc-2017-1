/* Codifique um software que leia um valor inteiro na base decimal 
e o imprima na base hexadecimal. */

#include <stdio.h>

int main(){
    int num;

    //printf("Digite numero:\n");
    scanf("%d", &num);

    //printf("\nNumero digitado convertido para hexadecimal:\n");
    printf("%X\n", num);

    return 0;
}