#include <stdio.h>

int main(){
    int num = 0, teste = 0, verif = 0, fat = 1, np = 1;
    int i, j, k = 0;

    do {
        scanf("%d", &num);
    } while (num<0);

    do {
        fat *= (num-k);
        k++;
    } while (k<=num-1);
        //printf("%d", fat);

    for (i = fat-1;i>0;i--) {
        teste = fat-i;
        //printf("%d\n", i);
        //printf("i = %d fat = %d teste = %d\n", i,fat,teste);
        for (j = 1;j<=teste;j++) {
            if (!(teste%j == 0)) {
                verif++;
            }
        }
        //printf("verif = %d\n", verif);
        if (verif == teste-2) {
            printf("%d ", teste);
        }
        else {
            np++;
        }
        verif = 0;
    }
    if (np == fat) {
        printf("NENHUM PRIMO");
    }

    return 0;
}
