/* Codifique um software que leia 200 numeros inteiros e os imprima em ordem contrária a da
leitura. */

#include <stdio.h>

int main (){
    int num [200];
    int i, j;


    //printf("Digite 200 numeros:\n");

    for (i=0; i<200; i++){
        scanf ("%d", &num[i]);
    }

    printf("\n");

    for (j=199; j>=0; j--){
        printf("%d ", num[j]);
    }
    printf("\n");

    return 0;
}
