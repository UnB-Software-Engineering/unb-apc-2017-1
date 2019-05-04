/* Codifique um software que leia os valores de uma matriz quadrada de ordem 8 de inteiros.
Calcule a soma de sua diagonal SD. Por fim, imprima o número da linha da matriz, cuja soma SL
dos seus elementos dividida por SD tenha o maior resto. */

#include <stdio.h>

int main(){
    int matriz[8][8];
    int sum_diagonal=0;
    int sum_row[8]={0,0,0,0,0,0,0,0};
    int i, j, k;
    float MAIOR=-1;
    
    for(i=0; i<8; i++){
        for(j=0;j<8;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<8; i++){
        for(j=0;j<8;j++){
            sum_row[i] = sum_row[i] + matriz[i][j];

            if(i==j){
                sum_diagonal = sum_diagonal + matriz[i][j];
            }
        }
    }

    for(i=0;i<8;i++){
        if((sum_row[i]%sum_diagonal) > MAIOR){
            MAIOR = sum_row[i]%sum_diagonal;
            k = i;
        }
    }

    printf("%d", k);

    return 0;
}