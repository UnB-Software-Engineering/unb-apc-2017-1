#include <stdio.h>

int main(){
    int idade;

    scanf("%d", &idade);

    if (idade < 16){
        printf("NAO ELEITOR");
    } else if (idade >= 16 && idade < 18 || idade >= 65){
        printf("FACULTATIVO");
    } else if (idade >= 18 && idade < 65){
        printf("OBRIGATORIO");
    }

    return 0;
}
