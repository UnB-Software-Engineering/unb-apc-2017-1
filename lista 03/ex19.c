#include <stdio.h>

int main(){
    int maior, menor, num = 0;

    int i;
    for (i = 0; i<20; i++) {
        scanf("%d", &num);
        if (i == 0) {
            maior = num;
            menor = num;
        }

        if (num < menor) {
                menor = num;
        }

        if (num > maior) {
            maior = num;
        }

    }

    printf("Menor: %d\nMaior: %d\n", menor, maior);

    return 0;

}

