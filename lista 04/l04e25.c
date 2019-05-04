/* Codifique um software que leia os valores de uma matriz quadrada de ordem 9 de inteiros e
imprima ”S”se a mesma ´e sim´etrica (isto e, se A[i][j] = A [j][i] para todo 0 ¡= i,j ¡=9) ou ”N”, caso
contrario. */

#include <stdio.h>

int main(){

	int matriz[9][9], i, j;
	int a=0;

	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			if(matriz[i][j] == matriz[j][i]){
                a++;
            }
		}
	}

	if(a != 81){
		printf("N\n");
	} else {
		printf("S\n");}


	return 0;
}
