/* Seja A e B duas matrizes 4x5 de inteiros. Faca um programa que leia os valores de A e depois
os de B e imprima a soma da matriz A com a matriz B. */

#include <stdio.h>

int main(){
    int matrizA[4][5];
    int matrizB[4][5];
    int i, j;

    //printf("Insira valores matriz A:\n");
    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }

    //printf("\nInsira valores matriz B:\n");
    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }

    //printf("Soma das matrizes A e B:\n");
    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            printf("%d\t", matrizA[i][j] + matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
