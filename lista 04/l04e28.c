/* Codifique um software que leia os valores de uma matriz quadrada de ordem 9 de inteiros
e troque os valores da diagonal principal com a diagonal secundária, imprimindo em seguida a
matriz alterada. */

#include <stdio.h>

int main(){
    int matriz[9][9], nova[9][9], diag_princ[9][9], diag_sec[9][9];
    int i,j,k,l,m;

    for (i=0; i<9; i++) {
        for (j=0; j<9; j++) {
            matriz[i][j] = 0;
            diag_princ[i][j] = 0;
            diag_sec[i][j] = 0;
        }
    }

    //printf("Digite valores matriz de ordem 9:\n");
    for (i=0; i<9; i++) {
        for (j=0; j<9; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                diag_princ[i][j] = matriz[i][j];
                if (i+j == 8) {
                    diag_sec[i][j] = matriz[i][j];
                }
                continue;
            }
            else if (i+j == 8){
                diag_sec[i][j] = matriz[i][j];
                continue;
            }
        }
    }

    //printf("\nNova Matriz\n");
    printf("\n");
        for (i=0; i<9; i++){
            for (l=8-i, m=i, j=0; j<9; j++){
                if (i==j) {
                    nova[i][j] = diag_sec[l][m];
                    l--;
                    m++;
                    continue;
                }
                else if (i+j == 8){
                    nova[i][j] = diag_princ[j][j];
                }
                else {
                    nova[i][j] = matriz[i][j];
                }
            }
        }

    for (i=0; i<9; i++){
        for (j=0; j<9; j++){
            printf("%d ", nova[i][j]);
        }
        printf("\n");
    }

    return 0;
}