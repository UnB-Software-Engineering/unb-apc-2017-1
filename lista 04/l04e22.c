/* Seja A uma matriz quadrada de n´umeros inteiros de ordem 7. Fac¸a um programa que leia os
valores de A e imprima a soma dos elementos de sua diagonal principal. */

#include<stdio.h>

int main(){
    int matriz[7][7];
    int i, j, sum=0;

    //printf("Digite os termos da matriz 7x7:\n");
    for (i=0; i<7; i++){
        for (j=0; j<7; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    //printf("A soma dos termos da diagonal principal eh:\n")
    for (i=0; i<7; i++){
        for (j=0; j<7; j++){
            if (i==j){
                sum += matriz[i][j];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
