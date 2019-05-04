#include <stdio.h>

int main(){
    int num1, num2, media;

    scanf("%d %d", &num1, &num2);

    media = (num1 + num2) / 2;

    if (media >= 7){
        printf("APROVADO");
    } else if (media >= 3 && media < 7){
        printf("EXAME");
    } else if (media < 3){
        printf("REPROVADO");
    }

    return 0;
}

