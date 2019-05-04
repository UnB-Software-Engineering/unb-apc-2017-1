#include<stdio.h>

int main(){
    int idade;

    scanf("%d", &idade);

    if (idade < 5){
        printf("SEM CATEGORIA");
    } else if (idade >= 5 && idade < 7){
        printf("INFANTIL A");
    } else if (idade >= 8 && idade < 10){
        printf("INFANTIL B");
    } else if (idade >= 11 && idade < 13){
        printf("JUVENIL A");
    } else if (idade >= 14 && idade < 17){
        printf("JUVENIL B");
    } else if (idade >= 18) {
        printf("SENIOR");
    }

    return 0;
}
