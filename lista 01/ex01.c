#include <stdio.h>

int main() {
    int num1, num2, num3, num4, SOMA;

    //printf("Informe 4 numeros inteiros:\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    SOMA = num1 + num2 + num3 + num4;
    printf("%d", SOMA);

    return 0;
}
