/* Escreva um codigo que leia os valores de uma matriz A (7x9) de inteiros e mostre na tela sua
transposta. */

#include <stdio.h>

int main(){
    int matriz[7][9];
    int i, j;

    for (i=0; i<7; i++){
        for (j=0; j<9; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<9; i++){
        for (j=0; j<7; j++){
            printf("%d\t", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
